

`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_cache_bank (
    input  wire clk,
    input  wire en,
    input  wire we,
    input  wire addr,
    input  wire [63:0] in,
    output reg  [63:0] out
);

    reg [63:0] bank;
    always @(posedge clk) begin
        if (en & ~we & addr) begin
            out <= bank;
        end
        else if (en & we & addr) begin
            bank <= in;
            out  <= in;
        end
    end
    
endmodule

