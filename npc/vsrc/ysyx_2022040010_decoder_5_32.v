//decode func3 and rs1/2 rd

`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_decoder_5_32 ( 
    input wire [4:0] in,
    output wire [31:0] out
);

    genvar i;
    generate
        for (i = 0; i < 32; i = i + 1) 
            begin: decoder5
                assign out[i] = (in == i);
            end
    endgenerate
endmodule


