// plan to reduce area and increase delay 
module ysyx_2022040010_shift (
    input wire[63:0] shift_src, //src1
    input wire[63:0] shift_amount, //src2
    input wire[2:0] shift_op, //shift operation type : logic left/right  arithmetic right
    
    output reg[63:0] shift_result
);
    wire [63:0] shift_res;  //
    wire op_srl;            // right or left
    wire [63:0]sra_mask;
    wire [63:0] srl_res; //shift right logic
    wire [63:0] sra_res; //shift right arithmetic
    wire [63:0] sll_res; //shift left logic

    assign op_srl = shift[2] ? 1 : 0; // judge whether to shift right
    assign shift_src = shift_op ? {   //if shift right , reverse the order
                                        src[0], src[1], src[2], src[3], src[4], src[5], src[6],src[7],
                                        src[8], src[9], src[10], src[11], src[12], src[13], src[14],src[15],
                                        src[16], src[17], src[18], src[19], src[20], src[21], src[22],src[23],
                                        src[24], src[25], src[26], src[27], src[28], src[29], src[30],src[31],
                                        src[32], src[33], src[34], src[35], src[36], src[37], src[38],src[39],
                                        src[40], src[41], src[42], src[43], src[44], src[45], src[46],src[47],
                                        src[48], src[49], src[50], src[51], src[52], src[53], src[54],src[55],
                                        src[56], src[57], src[58], src[59], src[60], src[61], src[62],src[63]
                                    }: src[63:0];
    assign shift_res = shift_src[63:0] >> shift_amount[63:0];
    assign sra_mask = ~(64'hffffffffffff >> shift_amount[63:0]);
    assign srl_res  = shift_res;  //shift right logic
    assign sra_res  = ( {64{shift_src[63]}} & sra_mask ) | shift_res; //shift right arithmetic
    assign sll_res = {  shift_res[0], shift_res[1],shift_res[2],shift_res[3],shift_res[4],shift_res[5],shift_res[6],shift_res[7],
                        shift_res[8], shift_res[9],shift_res[10],shift_res[11],shift_res[12],shift_res[13],shift_res[14],shift_res[15], 
                        shift_res[16], shift_res[17],shift_res[18],shift_res[19],shift_res[20],shift_res[21],shift_res[22],shift_res[23],
                        shift_res[24], shift_res[25],shift_res[26],shift_res[27],shift_res[28],shift_res[29],shift_res[30],shift_res[31],
                        shift_res[32], shift_res[33],shift_res[34],shift_res[35],shift_res[36],shift_res[37],shift_res[38],shift_res[39],
                        shift_res[40], shift_res[41],shift_res[42],shift_res[43],shift_res[44],shift_res[45],shift_res[46],shift_res[47],
                        shift_res[48], shift_res[49],shift_res[50],shift_res[51],shift_res[52],shift_res[53],shift_res[54],shift_res[55],
                        shift_res[56], shift_res[57],shift_res[58],shift_res[59],shift_res[60],shift_res[61],shift_res[62],shift_res[63]
                        }; //shift left logic 

    assign shift_result = shift_op[2] ? sll_res : 
                                        (shift_op[1] ? srl_res :
                                                        (shift[0] ? sra_res : 64'b0) );
                                                        //TODO: I don't know if this assign is correct 
endmodule