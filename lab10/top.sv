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

  // Your code goes here...
  
endmodule

// Add more modules down here...
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

  
    
    