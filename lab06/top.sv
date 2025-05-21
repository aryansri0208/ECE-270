`default_nettype none
// Empty top module

module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // Ports from/to UART
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  // Your code goes here...
  logic [3:0] out;
  logic on;

  prienc16to4 u1(.in(pb[15:0]), .out(out), .strobe(on));
  ssdec sd(.in(out), .enable(on), .out(ss0[6:0]));
  
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

module prienc16to4(
  input logic [15:0] in,
  output logic [3:0] out,
  output logic strobe
);
  assign {out, strobe} = in[15] == 1 ? 5'b11111 /* innput 7 is high */ :
      in[14] == 1 ? 5'b11101 /* innput 6 is high */ :
      in[13] == 1 ? 5'b11011 /* innput 5 is high */ :
      in[12] == 1 ? 5'b11001 /* innput 4 is high */ :
      in[11] == 1 ? 5'b10111 /* innput 3 is high */ :
      in[10] == 1 ? 5'b10101 /* innput 2 is high */ :
      in[9] == 1 ? 5'b10011 /* innput 1 is high */ :
      in[8] == 1 ? 5'b10001 /* innput 0 is high */ :
      in[7] == 1 ? 5'b01111 :
      in[6] == 1 ? 5'b01101 /* innput 6 is high */ :
      in[5] == 1 ? 5'b01011 /* innput 5 is high */ :
      in[4] == 1 ? 5'b01001 /* innput 4 is high */ :
      in[3] == 1 ? 5'b00111 /* innput 3 is high */ :
      in[2] == 1 ? 5'b00101 /* innput 2 is high */ :
      in[1] == 1 ? 5'b00011 /* innput 1 is high */ :
      in[0] == 1 ? 5'b00001 /* innput 0 is high */ :
                  5'b00000;
endmodule
