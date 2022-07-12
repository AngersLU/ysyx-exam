
`timescale 1ns/1ns
module ysyx_2022040010_add (
  input wire [63:0]     in_a,
  input wire [63:0]     in_b,
  input wire            in_c,
  output wire [63:0]    out_s,
  output wire           out_c,
  input wire            alu_32
);

    wire [64: 0] ina;
    wire [64: 0] inb;
    wire [64: 0] c;
    wire [64: 0] s; 

    assign ina = alu_32 ? {33'b0, in_a[31: 0]} : {1'b0, in_a[63: 0]};
    assign inb = alu_32 ? {33'b0, in_b[31: 0]} : {1'b0, in_b[63: 0]};

    assign c[0] = in_c;
    wire ov;
    genvar gv_z;
    generate
      for (gv_z = 0; gv_z < 64; gv_z = gv_z + 1 ) begin: faloop
        fa bitx ( .a( ina[gv_z]), .b( inb[gv_z]), .cin( c[gv_z]), .s( s[gv_z]), .c( c[gv_z+1]));
      end
    endgenerate
    fa bit64(.a(ina[64]), .b(inb[64]), .cin(  c[64]), .s(s[64]), .c(ov));

    assign out_s = alu_32 ? { {32{s[31]}}, s[31: 0]} : s[63: 0];
    assign out_c = c[64];



endmodule




