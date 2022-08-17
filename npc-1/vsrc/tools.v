
`include "defines.v"
`timescale 1ns/1ns

//decode func3 and rs1/2 rd
module decoder_5_32 ( 
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

//decode func7 and opcode
module decoder_7_128 (
    input wire [6:0]   in,
    output wire [127:0] out
);

    genvar i;
    generate
        for (i = 0; i < 128; i = i + 1)
        begin: decoder7
            assign out[i] = (in == i);
        end
    endgenerate

endmodule

//decode func3
module decoder_3_8 (
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


module fa (
    input wire a,b,cin,
    output wire s,c
);

    assign s = ~a&~b&cin | ~a&b&~cin | a&~b&~cin | a&b&cin ;
    assign c =  a&b | a&cin | b&cin;

endmodule


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




