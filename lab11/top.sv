`default_nettype none
// Empty top module

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
  lunarlander ll (
    .hz100(hz100), .reset(reset), .in(pb[19:0]), 
    .red(red), .green(green),                       // for crashed/landed
    .ss0(ss0), .ss1(ss1), .ss2(ss2), .ss3(ss3),     // for values
    .ss5(ss5), .ss6(ss6), .ss7(ss7)                 // for display message
);

endmodule


module lunarlander #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,
  parameter VELOCITY=16'h0,
  parameter THRUST=16'h5,
  parameter GRAVITY=16'h5
)(
  input logic hz100, reset,
  input logic [19:0] in,
  output logic [7:0] ss7, ss6, ss5, 
  output logic [7:0] ss3, ss2, ss1, ss0,
  output logic red, green
);
  logic clk; 
  logic [15:0] alt, vel, fuel, thrust;  
  logic [15:0] alt_n, vel_n, fuel_n, thrust_n;
  logic land, crash, wen; 
  logic [4:0] keyout;  
  logic keyclk; 
  logic [3:0] disp_ctrl;  

  clock_psc psc(
    .clk(hz100),
    .rst(reset),
    .lim(8'd24),
    .hzX(clk)
  );

  keysync sync(
    .clk(hz100),
    .rst(reset),
    .keyin(in[19:0]),
    .keyout(keyout),
    .keyclk(keyclk)
  );
  
  always_ff @(posedge keyclk or posedge reset) begin
    if (reset) begin
      thrust_n <= THRUST; 
    end else if (~keyout[4]) begin
      thrust_n <= {12'b0, keyout[3:0]};  
    end
  end
  always_comb begin
    disp_ctrl = {keyout == 5'd19, keyout == 5'd18, keyout == 5'd17, keyout == 5'd16};
  end

  ll_alu alu(
    .alt(alt), 
    .vel(vel), 
    .thrust(thrust), 
    .fuel(fuel), 
    .alt_n(alt_n), 
    .vel_n(vel_n), 
    .fuel_n(fuel_n)
  );

  ll_control control(
    .clk(clk),
    .rst(reset),
    .alt(alt),
    .vel(vel),
    .land(land),
    .crash(crash),
    .wen(wen)
  );

  ll_memory memory(
    .clk(clk),
    .rst(reset),
    .wen(wen),
    .alt_n(alt_n),
    .vel_n(vel_n),
    .fuel_n(fuel_n),
    .thrust_n(thrust_n),
    .alt(alt),
    .vel(vel),
    .fuel(fuel),
    .thrust(thrust)
  );

  logic [7:0] ss4;

  ll_display display(
    .clk(keyclk),
    .rst(reset),
    .land(land),
    .crash(crash),
    .disp_ctrl(disp_ctrl),
    .alt(alt),
    .vel(vel),
    .fuel(fuel),
    .thrust(thrust),
    .ss7(ss7),
    .ss6(ss6),
    .ss5(ss5),
    .ss3(ss3),
    .ss2(ss2),
    .ss1(ss1),
    .ss0(ss0),
    .red(red),
    .green(green)
  );
endmodule


module fa (
    input logic a,
    input logic b,
    input logic ci,
    output logic s,
    output logic co
);

  assign s = a ^ b ^ ci;  
  assign co = (a & b) | (b & ci) | (a & ci); 
endmodule

module fa4(
    input logic [3:0]a,
    input logic [3:0] b,
    input logic ci,
    output logic [3:0] s,
    output logic co
);

  logic sum_1, sum_2, sum_3, sum_4, carry_1, carry_2, carry_3;
  fa add1(.a(a[0]), .b(b[0]), .ci(ci), .s(sum_1), .co(carry_1));
  fa add2(.a(a[1]), .b(b[1]), .ci(carry_1), .s(sum_2), .co(carry_2));
  fa add3(.a(a[2]), .b(b[2]), .ci(carry_2), .s(sum_3), .co(carry_3));
  fa add4(.a(a[3]), .b(b[3]), .ci(carry_3), .s(sum_4), .co(co));
  assign s = {sum_4,sum_3,sum_2,sum_1};
endmodule

module bcdadd1(
    input logic [3:0]a,
    input logic [3:0] b,
    input logic ci,
    output logic [3:0] s,
    output logic co
);
  logic [3:0] sum_out;
  logic carry, carry_orr, universal;
  fa4 u0(.a(a), .b(b), .ci(ci), .s(sum_out), .co(carry));
  assign carry_orr = carry | (sum_out[3] & sum_out[2]) | (sum_out[3] & sum_out[1]);
  fa4 u1(.a(sum_out), .b({1'b0,carry_orr,carry_orr, 1'b0}), .ci(1'b0), .s(s), .co(universal));
  assign co = carry_orr;
endmodule

module bcdadd4(
    input logic [15:0]a,
    input logic [15:0] b,
    input logic ci,
    output logic [15:0] s,
    output logic co
);

  logic [3:0] sum_1, sum_2, sum_3, sum_4;
  logic carry_1, carry_2, carry_3;
  bcdadd1 u0(.a(a[3:0]), .b(b[3:0]), .ci(ci), .s(sum_1), .co(carry_1));
  bcdadd1 u1(.a(a[7:4]), .b(b[7:4]), .ci(carry_1), .s(sum_2), .co(carry_2));
  bcdadd1 u2(.a(a[11:8]), .b(b[11:8]), .ci(carry_2), .s(sum_3), .co(carry_3));
  bcdadd1 u3(.a(a[15:12]), .b(b[15:12]), .ci(carry_3), .s(sum_4), .co(co));
  assign s = {sum_4,sum_3,sum_2,sum_1};

endmodule

module bcd9comp1 (
    input logic [3:0] in,
    output logic [3:0] out
);

  always_comb begin
    case (in) 
      4'b1001: out = 4'b0000;
      4'b1000: out = 4'b0001;
      4'b0111: out = 4'b0010;
      4'b0110: out = 4'b0011;
      4'b0101: out = 4'b0100;
      4'b0100: out = 4'b0101;
      4'b0011: out = 4'b0110;
      4'b0010: out = 4'b0111;
      4'b0001: out = 4'b1000;
      4'b0000: out = 4'b1001;
      default: out = 4'b0000; 
    endcase
  end

endmodule

module bcdaddsub4(
    input logic [15:0] a,
    input logic [15:0] b,
    input logic op,
    output logic [15:0] s
);

  logic [15:0] ans, ans1;
  logic cin;
  
  bcd9comp1 c0(.in(b[3:0]),   .out(ans[3:0]));
  bcd9comp1 c1(.in(b[7:4]),   .out(ans[7:4]));
  bcd9comp1 c2(.in(b[11:8]),  .out(ans[11:8]));
  bcd9comp1 c3(.in(b[15:12]), .out(ans[15:12]));
  assign ans1 = op ? ans : b;
  assign cin = op;
  bcdadd4 u0(.a(a), .b(ans1), .ci(cin), .s(s), .co());
endmodule

module ll_memory #(
  parameter ALTITUDE = 16'h4500,
  parameter VELOCITY = 16'h0,
  parameter FUEL = 16'h800,
  parameter THRUST = 16'h5
)(
    input logic clk,
    input logic rst,
    input logic wen,
    input logic [15:0] alt_n,
    input logic [15:0] vel_n,
    input logic [15:0] fuel_n,
    input logic [15:0] thrust_n,
    output logic [15:0] alt,
    output logic [15:0] vel,
    output logic [15:0] fuel,
    output logic [15:0] thrust
);
  always_ff @(posedge clk or posedge rst) begin 
    if (rst) begin
      alt <= ALTITUDE;
      vel <= VELOCITY;
      fuel <= FUEL;
      thrust <= THRUST;
    end 
    else if (wen) begin
      alt <= alt_n;
      vel <= vel_n;
      fuel <= fuel_n;
      thrust <= thrust_n;
    end
  end
endmodule

module ll_alu #(
  parameter GRAVITY = 16'h5  
)(
  input logic [15:0] alt, vel, fuel, thrust,
  output logic [15:0] alt_n, vel_n, fuel_n
);
  logic [15:0] vel_with_gravity, fuel_temp, thrust_applied_vel;
  logic [15:0] alt_temp, vel_temp;
  bcdaddsub4 U0(.a(vel), .b(GRAVITY), .op(1'b1), .s(vel_with_gravity));
  bcdaddsub4 U1(.a(vel_with_gravity), .b(thrust), .op(1'b0), .s(thrust_applied_vel));
  bcdaddsub4 U2(.a(alt), .b(vel), .op(1'b0), .s(alt_temp));
  bcdaddsub4 U3(.a(fuel), .b(thrust), .op(1'b1), .s(fuel_temp));
  always_comb begin
      if (alt_temp[15] == 1 || alt_temp == 0) begin
          alt_n = 16'h0; 
          vel_n = 16'h0;
      end else begin
          alt_n = alt_temp;
          if (fuel[15] == 1|| fuel == 0) begin
            vel_n = vel_with_gravity;
          end 
          else begin
            vel_n = thrust_applied_vel;
          end
      end
      if (fuel_temp[15] == 1 || fuel_temp == 0) begin
          fuel_n = 16'h0;
      end else begin
          fuel_n = fuel_temp;
      end
  end
endmodule

module ll_control(
  input logic clk, rst,
  input logic [15:0] alt, vel,
  output logic land, crash, wen
);
 logic land_temp, crash_temp, wen_temp;
 logic [15:0] sum;
 bcdaddsub4 u0(.a(alt), .b(vel), .op(1'b0), .s(sum));
 always_ff @(posedge clk or posedge rst) begin
  if (rst) begin
    land <= 1'b0;
    crash <= 1'b0;
  end
  else begin
    
    land <= land_temp;
    crash <= crash_temp; 
    
    if (land_temp == 0 && crash_temp == 0) begin
      wen <= 1;
    end 
    else begin
      wen <= 0;
    end
  end 
 end
 logic onground;
 logic onground_temp;
 always_comb begin
  if (sum[15] == 1 || sum == 0) begin
    if (vel[15:0] < 16'h9970 && vel[15] == 1) begin
      land_temp = 1'b0;
      crash_temp = 1'b1;
    end
    else begin
      land_temp = 1'b1;
      crash_temp = 1'b0;
    end
  end
  else begin
    land_temp = 1'b0;
    crash_temp = 1'b0;
  end
 end
  
endmodule

module ll_display(
    input logic clk, rst, land, crash,
    input logic [3:0] disp_ctrl,
    input logic [15:0] alt, vel, fuel, thrust,
    output logic [7:0] ss7, ss6, ss5, ss3, ss2, ss1, ss0,
    output logic red, green
);
    localparam [23:0] MSG_ALT   = 24'b01110111_00111000_01111000;
    localparam [23:0] MSG_VEL   = 24'b00111110_01111001_00111000;
    localparam [23:0] MSG_GAS   = 24'b01101111_01110111_01101101;
    localparam [23:0] MSG_THR   = 24'b01111000_01110110_01010000;
    logic [15:0] display_value;
    logic [3:0] bcd[3:0];
    //logic negative;
    logic [3:0] current_mode;  
    logic [27:0] out;
    logic [27:0] out1;
    
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            current_mode <= 4'b1000; 
        end else begin
            if (disp_ctrl != 4'b0) begin
              current_mode <= disp_ctrl;
            end
        end
    end
    logic [15:0] negative_value;
    
    always_comb begin
        ss7 = MSG_ALT[23:16];
        ss6 = MSG_ALT[15:8];
        ss5 = MSG_ALT[7:0];
        display_value = alt;  

        case (current_mode)
            4'b1000: begin
                display_value = alt;
                ss7 = MSG_ALT[23:16];
                ss6 = MSG_ALT[15:8];
                ss5 = MSG_ALT[7:0];
            end
            4'b0100: begin
                display_value = vel;  
                ss7 = MSG_VEL[23:16];
                ss6 = MSG_VEL[15:8];
                ss5 = MSG_VEL[7:0];
            end
            4'b0010: begin  
                display_value = fuel;
                ss7 = MSG_GAS[23:16];
                ss6 = MSG_GAS[15:8];
                ss5 = MSG_GAS[7:0];
            end
            4'b0001: begin  
                display_value = thrust;
                ss7 = MSG_THR[23:16];
                ss6 = MSG_THR[15:8];
                ss5 = MSG_THR[7:0];
            end
            default: begin
                display_value = 0;
                ss7 = 0;
                ss6 = 0;
                ss5 = 0; 
            end
        endcase
    end
    assign green = land;
    assign red = crash;
    ssdec dec0(.in(display_value[3:0]), .enable(1), .out(out[6:0]));
    ssdec dec1(.in(display_value[7:4]), .enable(display_value >= 16'ha), .out(out[13:7]));
    ssdec dec2(.in(display_value[11:8]), .enable(display_value >= 16'h64), .out(out[20:14]));
    ssdec dec3(.in(display_value[15:12]), .enable(|display_value[15:12]), .out(out[27:21]));
    bcdaddsub4 a(.a(16'h0), .b(display_value), .op(1'b1), .s(negative_value));
    ssdec dec4(.in(negative_value[3:0]), .enable(1), .out(out1[6:0]));
    ssdec dec5(.in(negative_value[7:4]), .enable(negative_value >= 16'ha), .out(out1[13:7]));
    ssdec dec6(.in(negative_value[11:8]), .enable(negative_value >= 16'h64), .out(out1[20:14]));
    assign ss0[6:0] = !display_value[15] ? out[6:0] : out1[6:0];
    assign ss1[6:0] = !display_value[15] ? out[13:7] : out1[13:7];
    assign ss2[6:0] = !display_value[15] ? out[20:14] : out1[20:14];
    assign ss3[6:0] = !display_value[15] ? out[27:21] : 7'b1000000;
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

module ssdec(
  input logic [3:0] in,
  input logic enable,
  output logic [6:0] out
  
);
  logic [6:0] SEG7 [15:0];
      assign SEG7[4'h0] = 7'b0111111;
      assign SEG7[4'h1] = 7'b0000110;
      assign SEG7[4'h2] = 7'b1011011;
      assign SEG7[4'h3] = 7'b1001111;
      assign SEG7[4'h4] = 7'b1100110;
      assign SEG7[4'h5] = 7'b1101101;
      assign SEG7[4'h6] = 7'b1111101;
      assign SEG7[4'h7] = 7'b0000111;
      assign SEG7[4'h8] = 7'b1111111;
      assign SEG7[4'h9] = 7'b1100111;
      assign SEG7[4'ha] = 7'b1110111;
      assign SEG7[4'hb] = 7'b1111100;
      assign SEG7[4'hc] = 7'b0111001;
      assign SEG7[4'hd] = 7'b1011110;
      assign SEG7[4'he] = 7'b1111001;
      assign SEG7[4'hf] = 7'b1110001;
      assign out = (enable == 1) ? SEG7[in] : 0; 
endmodule