
// plan to reduce area and increase delay 
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_shift (
    input wire[63:0] shift_operand, //src1
    input wire[63:0] shift_amount, //src2
    input wire[2:0] shift_op, //shift operation type : logic left/right  arithmetic right
    input wire alu_32,
    output reg[63:0] shift_result
);

    wire [63:0] shift_res;  //
    wire op_srl;            // right or left
    wire [63:0] sra_mask;
    wire [63:0] srl_res; //shift right logic
    wire [63:0] sra_res; //shift right arithmetic
    wire [63:0] sll_res; //shift left logic
    wire [63:0] shift_src_temp;
    wire [63:0] shift_result_temp;
    wire [63:0] shift_src;

    assign shift_src = alu_32 ? {32'b0, shift_operand[31:0]} : shift_operand;
    assign op_srl = shift_op[2] ? 1 : 0; // judge whether to shift left
    assign shift_src_temp= op_srl ? {   //if shift left , reverse the order
                                        shift_src[ 0], shift_src[ 1], shift_src[ 2], shift_src[ 3], shift_src[ 4], shift_src[ 5], shift_src[ 6],shift_src[ 7],
                                        shift_src[ 8], shift_src[ 9], shift_src[10], shift_src[11], shift_src[12], shift_src[13], shift_src[14],shift_src[15],
                                        shift_src[16], shift_src[17], shift_src[18], shift_src[19], shift_src[20], shift_src[21], shift_src[22],shift_src[23],
                                        shift_src[24], shift_src[25], shift_src[26], shift_src[27], shift_src[28], shift_src[29], shift_src[30],shift_src[31],
                                        shift_src[32], shift_src[33], shift_src[34], shift_src[35], shift_src[36], shift_src[37], shift_src[38],shift_src[39],
                                        shift_src[40], shift_src[41], shift_src[42], shift_src[43], shift_src[44], shift_src[45], shift_src[46],shift_src[47],
                                        shift_src[48], shift_src[49], shift_src[50], shift_src[51], shift_src[52], shift_src[53], shift_src[54],shift_src[55],
                                        shift_src[56], shift_src[57], shift_src[58], shift_src[59], shift_src[60], shift_src[61], shift_src[62],shift_src[63]
                                    }: shift_src[63:0];
    assign shift_res = shift_src_temp[63:0] >> shift_amount[63:0];
    assign sra_mask = ~(64'hffffffffffff >> shift_amount[63:0]);
    assign srl_res  = shift_res;  //shift right logic
    assign sra_res  = ( {64{shift_src[63]}} & sra_mask ) | shift_res; //shift right arithmetic
    assign sll_res = {  shift_res[ 0], shift_res[ 1],shift_res[ 2],shift_res[ 3],shift_res[ 4],shift_res[ 5],shift_res[ 6],shift_res[ 7],
                        shift_res[ 8], shift_res[ 9],shift_res[10],shift_res[11],shift_res[12],shift_res[13],shift_res[14],shift_res[15], 
                        shift_res[16], shift_res[17],shift_res[18],shift_res[19],shift_res[20],shift_res[21],shift_res[22],shift_res[23],
                        shift_res[24], shift_res[25],shift_res[26],shift_res[27],shift_res[28],shift_res[29],shift_res[30],shift_res[31],
                        shift_res[32], shift_res[33],shift_res[34],shift_res[35],shift_res[36],shift_res[37],shift_res[38],shift_res[39],
                        shift_res[40], shift_res[41],shift_res[42],shift_res[43],shift_res[44],shift_res[45],shift_res[46],shift_res[47],
                        shift_res[48], shift_res[49],shift_res[50],shift_res[51],shift_res[52],shift_res[53],shift_res[54],shift_res[55],
                        shift_res[56], shift_res[57],shift_res[58],shift_res[59],shift_res[60],shift_res[61],shift_res[62],shift_res[63]
                        }; //shift left logic 

    assign shift_result_temp =  shift_op[2] ? sll_res : 
                                shift_op[1] ? srl_res :
                                shift_op[0] ? sra_res : 64'b0 ;
                                                        //TODO: I don't know if this assign is correct 

    assign shift_result = alu_32 ? { {32{shift_result_temp[31]}}, shift_result_temp[31:0]} : shift_result_temp;

endmodule

