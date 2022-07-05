module alu (
    input wire [63:0] alu_src1,
    input wire [63:0] alu_src2,

    input wire [13:0] alu_op, //TODO:

//    output reg [63:0] mem_addr, //reduce delay expenses
    output reg [63:0] alu_result
);
    
endmodule

// module GenALUSrc1 (
//     input wire [4:0] in0; //regfile rdata1
//     input wire [64:0] in1;    // pc
//     input wire in2; // 

//     input wire [2:0] sel_alu_src1;
//     output reg [x:0] src1_o
// );
    
// endmodule