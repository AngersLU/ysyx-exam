
`include "defines.v"
`timescale 1ns / 1ps
module ysyx_2022040010_decoder_6_64 (
    input wire [5:0]    in,
    output wire [63:0]    out
);

    genvar i;
    generate 
        for (i = 0; i < 64; i = i + 1) 
            begin: decoder6
                assign out[i] = (in == i);
            end
    endgenerate
endmodule
