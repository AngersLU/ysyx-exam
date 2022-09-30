
`include "defines.v"
`timescale 1ns / 1ps



module fb (
  input wire a,b,cin,
  output wire s,c
);
  wire s1,t1,t2,t3;
  assign s1 = a^b;
  assign s = s1^cin;
  assign t3 = a&b;
  assign t2 = a&cin;
  assign t1 = b&cin;
  assign c = t1|t2|t3;
endmodule


