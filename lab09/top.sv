`default_nettype none
// Empty top module

typedef enum logic [3:0] {
  LS0=0, LS1=1, LS2=2, LS3=3, LS4=4, LS5=5, LS6=6, LS7=7,
  INIT=8, OPEN=9, ALARM=10
} state_t;

module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);
  // state_t state;

  logic hzX;
  logic keyclk;
  logic [4:0] keycode;
  logic [3:0] keystate;
  logic [7:0] seq;

  clock_psc psc(.clk(hz100), .rst(reset), .lim(8'd49), .hzX(hzX));
  keysync sk1 (.clk(hz100), .rst(reset), .keyin(pb[19:0]), .keyout(keycode), .keyclk(keyclk));
  sequence_sr ssr(.clk(keyclk), .rst(reset), .en(~|keycode[4:1] && keystate == INIT), .button(keycode[0]), .seq(seq));
  fsm f(.clk(keyclk), .rst(reset), .keyout(keycode), .seq(seq), .state(keystate));
  display d(.hzX(hzX), .state(keystate), .ss({ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0}), .red(red), .green(green), .blue(blue));

  assign right = seq;

endmodule


module clock_psc(
  input logic clk, rst,
  input logic [7:0] lim,
  output logic hzX
);

  logic [7:0] temp;
  logic [7:0] ntemp;
  logic noclk;
  logic oclk; 

  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      temp <= 0;
      noclk <= 0;
    end else begin
      temp <= ntemp;
      noclk <= oclk;
    end 
  end 
  always_comb begin 
    if (temp == lim) begin
      oclk = ~noclk;
      ntemp = 8'd0;
    end else begin
      ntemp = temp + 1;
      oclk = hzX;
    end
  end
  assign hzX = (lim == 0) ? clk : noclk;
endmodule


module keysync(
  input logic clk,
  input logic rst,
  input logic [19:0]keyin,
  output logic [4:0]keyout,
  output logic keyclk
);

  assign keyout[0] = keyin[1] | keyin[3] | keyin[5] | keyin[7] | keyin[9] | 
  keyin[11] | keyin[13] | keyin[15] | keyin[17] | keyin[19];
                     
  assign keyout[1] = keyin[2] | keyin[3] | keyin[6] | keyin[7] |
                     keyin[10] | keyin[11] | keyin[14] | keyin[15] |
                     keyin[18] | keyin[19];
                     
  assign keyout[2] = (|keyin[7:4]) | (|keyin[15:12]);
  assign keyout[3] = |keyin[15:8];
  assign keyout[4] = |keyin[19:16];
  
  logic [1:0]d;
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      d <= 2'b0;
    end else begin
      d <= (d << 1) | {1'b0, |keyin[19:0]};
    end
  end
  assign keyclk = d[1];
endmodule

module sequence_sr(
    input logic clk,
    input logic rst,
    input logic en,
    input logic button,
    output logic [7:0] seq
);
  logic [7:0] next_s;
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      next_s <= 8'b0;
      end
    else begin
      if (en) begin
        next_s <= {next_s[6:0], button};
      end
    end
  end
  assign seq = next_s;
endmodule

module fsm(
    input logic clk, rst,
    input logic[4:0] keyout,
    input logic[7:0] seq,
    output logic[3:0] state
);

  state_t lockstate, n_lockstate;

  assign state = lockstate;

  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      lockstate <= INIT;
    end 
    else begin
      lockstate <= n_lockstate;
    end
  end
  logic M, R;
  assign M = (keyout[0] == seq[~lockstate[2:0]]) ? 1 : 0;
  assign R = (keyout == 5'b10000) ? 1 : 0;

  always_comb begin
    casez({lockstate, M, R})
      {INIT, 1'b?, 1'b1}: n_lockstate = LS0;
      {OPEN, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS1, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS2, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS3, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS4, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS5, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS6, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS7, 1'b?, 1'b1}: n_lockstate = LS0;
      
      {LS0, 1'b1, 1'b0}: n_lockstate = LS1;
      {LS1, 1'b1, 1'b0}: n_lockstate = LS2;
      {LS2, 1'b1, 1'b0}: n_lockstate = LS3;
      {LS3, 1'b1, 1'b0}: n_lockstate = LS4;
      {LS4, 1'b1, 1'b0}: n_lockstate = LS5;
      {LS5, 1'b1, 1'b0}: n_lockstate = LS6;
      {LS6, 1'b1, 1'b0}: n_lockstate = LS7;
      {LS7, 1'b1, 1'b0}: n_lockstate = OPEN;
      
      {LS0, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS1, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS2, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS3, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS4, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS5, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS6, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS7, 1'b0, 1'b0}: n_lockstate = ALARM;
      
      default: n_lockstate = lockstate;
    endcase
  end
endmodule

module display(
  input logic hzX,
  input logic [3:0] state,
  output logic [63:0] ss,
  output logic red, green, blue
);

  localparam OPEN_MESSAGE = 64'b00111111_01110011_01111001_01010100;
  localparam SECURE_MESSAGE = 64'b01101101_01111001_00111001_00111110_01010000_01111001;
  localparam CALL_911_MESSAGE = 64'b00111001_01110111_00111000_00111000_00000000_01100111_00000110_00000110;
  
  always_comb begin
    case(state)
      INIT: begin
        ss = 64'd0;
        red = 0;
        blue = 0;
        green = 0;
      end
      LS0, LS1, LS2, LS3, LS4, LS5, LS6, LS7: begin
        ss = SECURE_MESSAGE | (64'd1 << (7 - state) * 8 + 7);
        blue = 1;
        red = 0;
        green = 0;
      end
      OPEN: begin
        ss = OPEN_MESSAGE;
        green = 1;
        red = 0;
        blue = 0;
      end
      ALARM: begin
        ss = CALL_911_MESSAGE;
        green = 0;
        blue = 0;
        red = hzX;
      end
      default: begin
        ss = 64'd0; 
        red = 0;
        green = 0;
        blue = 0;
      end
    endcase
  end
  
endmodule
  