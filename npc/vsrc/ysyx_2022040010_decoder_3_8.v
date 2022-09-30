
`include "defines.v"
`timescale 1ns / 1ps

//decode func3
module ysyx_2022040010_decoder_3_8 (
    input wire [2:0]    in,
    output wire [7:0]    out
);

    genvar i;
    generate 
        for (i = 0; i < 8; i = i + 1) 
            begin: decoder3
                assign out[i] = (in == i);
            end
    endgenerate
endmodule

