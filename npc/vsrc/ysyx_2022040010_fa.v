
`include "defines.v"

`timescale 1ns / 1ps
module ysyx_2022040010_fa (
    input wire a,b,cin,
    output wire s,c
);

    assign s = ~a&~b&cin | ~a&b&~cin | a&~b&~cin | a&b&cin ;
    assign c =  a&b | a&cin | b&cin;

endmodule
