//decode func3 and rs1/2 rd
module decoder_5_32 ( 
    input  [4:0] in,
    output [31:0] out
);

    genvar i;
    gengrate for (i = 0; i < 32; i = i + 1) begin // 2^in_buslen=out_buslen 
        assign out[i] = (in == i);
    end
    endgenerate
endmodule

//decode func7 and opcode
module decoder_7_128 (
    input  [6:0]   in,
    output [127:0] out
);

    genvar i;
    gengrate for (i = 0; i < 127; i = i + 1) begin
        assign out[i] = (in == i);
    end
    endgenerate
endmodule

//decode func3
module decoder_3_8 (
    input  [2:0]    in,
    output [7:0]    out
);

    genvar i;
    gengrate for (i = 0; i < 7; i = i + 1) begin
        assign out[i] = (in == i);
    end
    endgenerate
endmodule
