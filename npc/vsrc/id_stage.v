
`include "defines.v"
`timescale 1ns/1ns
module ysyx_2022040010_id (
    input wire clk,
    input wire rst,
    
    // input wire [`StallBus] stall,

    input wire [`IF_TO_ID_BUS] if_to_id_bus,

    input wire [31:0] isram_rdata,

// BypassBus replace
    input wire [`BP_TO_RF_BUS]  ex_to_rf_bus,
    input wire [`BP_TO_RF_BUS] mem_to_rf_bus,
    input wire [`BP_TO_RF_BUS]  wb_to_rf_bus,
//

    output wire [`ID_TO_EX_BUS]  id_to_ex_bus
);

    reg [`IF_TO_ID_WD-1:0] if_to_id_bus_r;

    wire ce;

    wire ex_rf_we, mem_rf_we, wb_rf_we;
    wire [4:0] ex_rf_waddr, mem_rf_waddr, wb_rf_waddr;
    wire [63:0] ex_rf_wdata, mem_rf_wdata, wb_rf_wdata;

    reg flag;
    reg [31:0] buf_inst;

    // always @(posedge clk) begin
    //     if (rst) begin
    //         if_to_id_bus_r <= `IF_TO_ID_WD'b0;
    //         flag <=1'b0;
    //         buf_inst <= 32'b0;
    //     end
    //     else if (stall[1]==`Stop && stall[2]==`NoStop) begin
    //         if_to_id_bus_r <= `IF_TO_ID_WD'b0;
    //         flag <= 1'b0;
    //     end
    //     else if (stall[1]==`NoStop) begin   //TODO:not understand
    //         if_to_id_bus_r <= if_to_id_bus;
    //         flag <= 1'b0;
    //     end
    //     else if (stall[1]==`Stop && stall[2]==`Stop && ~flag) begin
    //         flag <= 1'b1;
    //         buf_inst <= isram_rdata;
    //     end
    // end


    always @( posedge clk) begin
        if ( rst ) begin
            if_to_id_bus_r <= `IF_TO_ID_WD'b0;
            flag <=1'b0;
            buf_inst <= 32'b0;
        end
        else begin
            if_to_id_bus_r <= if_to_id_bus;
            flag <= 1'b0;
            buf_inst <= 32'b0;
        end
    end 


    //buf_inst bounce point of brunch instruction ?
    assign inst_i = ce ? flag ? buf_inst : isram_rdata : 32'b0;


//　TODO:replace of bypass
    assign {
        ex_rf_we,
        ex_rf_waddr,
        ex_rf_wdata
    } = ex_to_rf_bus;

    assign {
        mem_rf_we,
        mem_rf_waddr,
        mem_rf_wdata
    } = mem_to_rf_bus;

    assign {
        wb_rf_we,
        wb_rf_waddr,
        wb_rf_wdata
    } = wb_to_rf_bus;

//


    wire [6:0]  opcode = inst_i[6:0];

    wire [ 2: 0] func3;
    wire [ 6: 0] func7;
    wire [ 4: 0] rs1, rs2, rd;
    wire [63: 0] rs1_data, rs2_data;


//decoder output variable
    wire    [127:0] op_d, func7_d;
    wire    [31:0]  rs1_d, rs2_d, rd_d;
    wire    [7:0]   func3_d;





//R
    assign opcode   = inst_i[6:0];
    assign rs1      = inst_i[19:15]; 
    assign rs2      = inst_i[24:20];
    assign rd       = inst_i[11:7];
    assign func3    = inst_i[14:12];
    assign func7    = inst_i[31:25];

    ysyx_2022040010_regfile regfile_id(
        .clk    (clk    ),
        .rst    (rst    ),

        .re1    (       ),
        .raddr1 (rs1    ),
        .rdata1 (rs1_data),

        .re2    (       ),
        .raddr2 (rs2    ),
        .rdata2 (rs2_data),

        .we     (wb_rf_we),
        .waddr  (wb_rf_waddr),
        .wdata  (wb_rf_wdata)
    );
    


// TODO: rdata1 & rdata2 will be replaced by sel_rs1_forward & rs_forward_data
    assign rf_rdata1 =  (ex_rf_we  & (ex_rf_waddr  == rs1)) ? ex_rf_wdata    :
                        (mem_rf_we & (mem_rf_waddr == rs1)) ? mem_rf_wdata   :
                        (wb_rf_we  & (wb_rf_waddr  == rs1)) ? wb_rf_wdata    :
                                                              rs1_data;
    assign rf_rdata2 =  (ex_rf_we  & (ex_rf_waddr  == rs2)) ? ex_rf_wdata    :
                        (mem_rf_we & (mem_rf_waddr == rs2)) ? mem_rf_wdata   :
                        (wb_rf_we  & (wb_rf_waddr  == rs2)) ? wb_rf_wdata    :
                                                              rs2_data;
    assign rf_waddr =   rd;


//decoder
    decoder_7_128   decoder_7_128_u0(   .in(opcode),    .out(op_d)      );
    decoder_7_128   decoder_7_128_u1(   .in(func7),     .out(func7_d)   );

    decoder_5_32    decoder_5_32_u0(    .in(rs1),       .out(rs1_d)     );
    decoder_5_32    decoder_5_32_u1(    .in(rs2),       .out(rs2_d)     );
    decoder_5_32    decoder_5_32_u2(    .in(rd),        .out(rd_d)      );

    decoder_3_8     decoder_3_8_u0(     .in(func3),     .out(func3_d)   );

//ALU
    wire inst_lui,      inst_auipc;
    wire inst_addi,     inst_add;
    wire inst_addiw,    inst_addw;
    wire inst_sub,      inst_subw;
    wire inst_slti,     inst_sltiu;
    wire inst_slt,      inst_sltu;
    wire inst_slli,     inst_srli,  inst_srai; //special R
    wire inst_slliw,    inst_srliw, inst_sraiw;     
    wire inst_sll,      inst_srl,   inst_sra;
    wire inst_sllw,     inst_srlw,  inst_sraw;
    wire inst_xori,     inst_ori,   inst_andi;
    wire inst_xor,      inst_or,    inst_and; 
//ALU-special 
    // wire inst_fence,    inst_fencei;  ---related to cache
    wire inst_ecall;    // related to special registers
    wire inst_ebreak; 

//LSU --can be merged with ALU
    wire inst_lb,   inst_lh,    inst_lw,    inst_ld;    
    wire inst_lbu,  inst_lhu,   inst_lwu;
    wire inst_sb,   inst_sh,    inst_sw,    inst_sd;

//BRU --branch
    wire inst_jal,  inst_jalr;
    wire inst_beq,  inst_bne, inst_blt, inst_bge, inst_bltu, inst_bgeu;


//CSR --special register
    wire inst_csrrw, inst_csrrs, inst_csrrc,     inst_csrrwi,    inst_csrrsi,    inst_csrrci;
//MUL   *
    wire inst_mul,   inst_mulh,  inst_mulhsu,    inst_mulhu;
    wire inst_mulw;
//DIV   /  %
    wire inst_div,   inst_divu,    inst_divw,  inst_divuw;
    wire inst_remw,  inst_remuw,   inst_rem,   inst_remu;
    
//alu_op 11:0 12
    wire op_add,    op_sub,     op_slt,  op_sltu;
    wire op_and,    op_or,      op_xor;            //op_nor
    wire op_sll,    op_srl,     op_sra;
    wire op_nop;
    wire op_sp;

//ALU
    assign inst_lui     =   op_d[7'b0110_111];
    assign inst_auipc   =   op_d[7'b0010_111];
    assign inst_addi    =   op_d[7'b0010_011] & func3_d[3'b000];
    assign inst_addiw   =   op_d[7'b0011_011] & func3_d[3'b000];
    assign inst_add     =   op_d[7'b0110_011] & func3_d[3'b000] & func7_d[7'b0000_000];
    assign inst_addw    =   op_d[7'b0111_011] & func3_d[3'b000] & func7_d[7'b0000_000];
    assign inst_sub     =   op_d[7'b0110_011] & func3_d[3'b000] & func7_d[7'b0100_000];
    assign inst_subw    =   op_d[7'b0111_011] & func3_d[3'b000] & func7_d[7'b0100_000];
    assign inst_slti    =   op_d[7'b0010_011] & func3_d[3'b010];
    assign inst_sltiu   =   op_d[7'b0010_011] & func3_d[3'b011];
//special-I 
//imm[5:0] = shamt
    assign inst_slli    =   op_d[7'b0010_011] & func3_d[3'b001] & ~inst_i[30];
    assign inst_srli    =   op_d[7'b0010_011] & func3_d[3'b101] & ~inst_i[30];
    assign inst_srai    =   op_d[7'b0010_011] & func3_d[3'b101] &  inst_i[30];
//imm[4:0] = shamt
    assign inst_slliw   =   op_d[7'b0011_011] & func3_d[3'b001] & ~inst_i[30];
    assign inst_srliw   =   op_d[7'b0011_011] & func3_d[3'b101] & ~inst_i[30];
    assign inst_sraiw   =   op_d[7'b0011_011] & func3_d[3'b101] &  inst_i[30];

    assign inst_sll     =   op_d[7'b0110_011] & func3_d[3'b001] & func7_d[7'b0000_000];
    assign inst_sllw    =   op_d[7'b0111_011] & func3_d[3'b001] & func7_d[7'b0000_000];
    assign inst_slt     =   op_d[7'b0110_011] & func3_d[3'b010] & func7_d[7'b0000_000];
    assign inst_sltu    =   op_d[7'b0110_011] & func3_d[3'b011] & func7_d[7'b0000_000];
    assign inst_srl     =   op_d[7'b0110_011] & func3_d[3'b101] & func7_d[7'b0000_000];
    assign inst_srlw    =   op_d[7'b0111_011] & func3_d[3'b101] & func7_d[7'b0000_000];
    assign inst_sra     =   op_d[7'b0110_011] & func3_d[3'b101] & func7_d[7'b0100_000];
    assign inst_sraw    =   op_d[7'b0111_011] & func3_d[3'b101] & func7_d[7'b0100_000];
    assign inst_xori    =   op_d[7'b0010_011] & func3_d[3'b100];
    assign inst_ori     =   op_d[7'b0010_011] & func3_d[3'b110];
    assign inst_andi    =   op_d[7'b0010_011] & func3_d[3'b111]; 
    assign inst_xor     =   op_d[7'b0110_011] & func3_d[3'b100] & func7_d[7'b0000_000];
    assign inst_or      =   op_d[7'b0110_011] & func3_d[3'b110] & func7_d[7'b0000_000];
    assign inst_and     =   op_d[7'b011_0011] & func3_d[3'b111] & func7_d[7'b0000_000];
//ALU-special   No operation processing and structure processing
    assign inst_ecall   =   op_d[7'b1110_011] & func3_d[3'b000] & ~inst_i[20];
    assign inst_ebreak  =   op_d[7'b1110_011] & func3_d[3'b000] &  inst_i[20];
//LSU
    assign inst_lb      =   op_d[7'b0000_011] & func3_d[3'b000];
    assign inst_lh      =   op_d[7'b0000_011] & func3_d[3'b001];
    assign inst_lw      =   op_d[7'b0000_011] & func3_d[3'b010];
    assign inst_lwu     =   op_d[7'b0000_011] & func3_d[3'b110];
    assign inst_lbu     =   op_d[7'b0000_011] & func3_d[3'b100];
    assign inst_lhu     =   op_d[7'b0000_011] & func3_d[3'b101];
    assign inst_ld      =   op_d[7'b0000_011] & func3_d[3'b011];
    assign inst_sb      =   op_d[7'b0100_011] & func3_d[3'b000];
    assign inst_sh      =   op_d[7'b0100_011] & func3_d[3'b001];
    assign inst_sw      =   op_d[7'b0100_011] & func3_d[3'b010];
    assign inst_sd      =   op_d[7'b0100_011] & func3_d[3'b011];
//BRU
    assign inst_jal     =   op_d[7'b1101_111];
    assign inst_jalr    =   op_d[7'b1100_111] & func3_d[3'b000];
    assign inst_beq     =   op_d[7'b1100_011] & func3_d[3'b000];
    assign inst_bne     =   op_d[7'b1100_011] & func3_d[3'b001];
    assign inst_blt     =   op_d[7'b1100_011] & func3_d[3'b100];
    assign inst_bge     =   op_d[7'b1100_011] & func3_d[3'b101];
    assign inst_bltu    =   op_d[7'b1100_011] & func3_d[3'b110];
    assign inst_bgeu    =   op_d[7'b1100_011] & func3_d[3'b111];
//CSR
    assign inst_csrrw   =   op_d[7'b1110_011] & func3_d[3'b001];
    assign inst_csrrs   =   op_d[7'b1110_011] & func3_d[3'b010];
    assign inst_csrrc   =   op_d[7'b1110_011] & func3_d[3'b011];
    assign inst_csrrwi  =   op_d[7'b1110_011] & func3_d[3'b101];
    assign inst_csrrsi  =   op_d[7'b1110_011] & func3_d[3'b110];
    assign inst_csrrci  =   op_d[7'b1110_011] & func3_d[3'b111];
//MUL
    assign inst_mul     =   op_d[7'b0110_011] & func3_d[3'b000] & func7_d[7'b0000_001];
    assign inst_mulh    =   op_d[7'b0110_011] & func3_d[3'b001] & func7_d[7'b0000_001];
    assign inst_mulhsu  =   op_d[7'b0110_011] & func3_d[3'b010] & func7_d[7'b0000_001];
    assign inst_mulhu   =   op_d[7'b0110_011] & func3_d[3'b011] & func7_d[7'b0000_001];
    assign inst_mulw    =   op_d[7'b0111_011] & func3_d[3'b000] & func7_d[7'b0000_001];
//DIV
    assign inst_div     =   op_d[7'b0110_011] & func3_d[3'b100] & func7_d[7'b0000_001];
    assign inst_divu    =   op_d[7'b0110_011] & func3_d[3'b101] & func7_d[7'b0000_001];
    assign inst_divw    =   op_d[7'b0111_011] & func3_d[3'b100] & func7_d[7'b0000_001];
    assign inst_divuw   =   op_d[7'b0111_011] & func3_d[3'b101] & func7_d[7'b0000_001];
//%
    assign inst_rem     =   op_d[7'b0110_011] & func3_d[3'b110] & func7_d[7'b0000_001];
    assign inst_remu    =   op_d[7'b0110_011] & func3_d[3'b111] & func7_d[7'b0000_001];
    assign inst_remw    =   op_d[7'b0111_011] & func3_d[3'b110] & func7_d[7'b0000_001];
    assign inst_remuw   =   op_d[7'b0111_011] & func3_d[3'b111] & func7_d[7'b0000_001];



    // rs1 to src1
    assign sel_alu_src1[0]  = inst_addi  |  inst_addiw   |   inst_add    |   inst_addw   
                            | inst_sub   |  inst_subw    |   inst_slti   |   inst_sltiu
                            | inst_slli  |  inst_srli    |   inst_srai   |   inst_slliw
                            | inst_srliw |  inst_sraiw   |   inst_sll    |   inst_sllw
                            | inst_slt   |  inst_sltu    |   inst_srl    |   inst_srlw
                            | inst_sra   |  inst_sraw    |   inst_xori   |   inst_ori
                            | inst_andi  |  inst_xor     |   inst_or     |   inst_and
                            | inst_lb    |  inst_lh      |   inst_lw     |   inst_lwu
                            | inst_lbu   |  inst_lhu     |   inst_ld     |   inst_sb
                            | inst_sh    |  inst_sw      |   inst_sd; 
    
    // pc to src1
    assign sel_alu_src1[1]  = inst_auipc;
    
    //nop
    assign sel_alu_src1[2]  = inst_lui;
    

    //rs2 to src2
    assign sel_alu_src2[0]  = inst_add   |   inst_addw   |  inst_sub    |   inst_subw  
                            | inst_sll   |   inst_sllw   |  inst_slt    |   inst_sltu
                            | inst_srl   |   inst_srlw   |  inst_sra    |   inst_sraw
                            | inst_xor   |   inst_or     |  inst_and;
    
    /// imm_sign_extend to src2 I-type
    assign sel_alu_src2[1]  = inst_addi  |   inst_addiw  |  inst_slti   |   inst_sltiu
                            | inst_xori  |   inst_ori    |  inst_andi   |   inst_lb
                            | inst_lh    |   inst_lw     |  inst_ld     |   inst_lbu   |   inst_lhu    |  inst_lwu;

    //spcial handle
    assign sel_alu_src2[2]  = inst_lui   |   inst_auipc;

    //shamt to src2
    assign sel_alu_src2[3]  = inst_slli  |   inst_srli   |   inst_srai   
                            | inst_slliw |   inst_srliw  |   inst_sraiw;   
         

//ALU-special
    assign op_sp    =   inst_ecall  | inst_ebreak;

    assign sp_bus   =   {inst_ecall,    inst_ebreak}; 
//special end

    assign op_add   =   inst_add    |   inst_addw   |   inst_addi   |   inst_addiw  
                    |   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                    |   inst_lbu    |   inst_lhu    |   inst_lwu    |   inst_sb
                    |   inst_sh     |   inst_sw     |   inst_sd     |   inst_auipc;
    assign op_sub   =   inst_sub    |   inst_subw;  

    assign op_slt   =   inst_slt    |   inst_slti;
    assign op_sltu  =   inst_sltu   |   inst_sltiu;
    assign op_sll   =   inst_sll    |   inst_slli   |   inst_slliw  |   inst_sllw;
    assign op_srl   =   inst_srl    |   inst_srli   |   inst_srliw  |   inst_srlw;
    assign op_sra   =   inst_sra    |   inst_srai   |   inst_sraiw  |   inst_sraw;
    assign op_and   =   inst_and    |   inst_andi   |   inst_csrrc  |   inst_csrrci;
    assign op_or    =   inst_or     |   inst_ori    |   inst_csrrs  |   inst_csrrsi;
    assign op_xor   =   inst_xor    |   inst_xori;
    assign op_nop   =   inst_lui    |   inst_csrrw  |   inst_csrrwi;


    assign alu_op   =   {   op_add,     op_sub,     op_slt,         op_sltu ,
                            op_and,     op_or,      op_xor,
                            op_sll,     op_srl,     op_sra,
                            op_nop,     op_sp   };

    assign mul_op   =   {   inst_mul,   inst_mulh,  inst_mulhsu,    inst_mulhu, inst_mulw };
    
    assign div_op   =   {   inst_div,   inst_divu,  inst_divw,      inst_divuw   };

    assign rem_op   =   {   inst_rem,   inst_remu,  inst_remw,      inst_remuw  };

    assign mem_op   =   {   inst_lb,    inst_lh,    inst_lw,        inst_ld,
                            inst_lbu,   inst_lhu,   inst_lwu,
                            inst_sb,    inst_sh,    inst_sw,        inst_sd };
    //specail_regs_u
    assign sru_op   =   {   inst_csrrw, inst_csrrs, inst_csrrc,     
                            inst_csrrwi,inst_csrrsi,inst_csrrci };



    //data ram load and store enable
    assign dram_e   =   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                    |   inst_lbu    |   inst_lhu    |   inst_lwu
                    |   inst_sb     |   inst_sh     |   inst_sw     |   inst_sd;
    //data ram write enable
    assign dram_we  =   inst_sb     |   inst_sh     |   inst_sw     |   inst_sd;

    // 0 regfiel res from alu_res ; 1 form ld_res 
    
    assign sel_rf_res   =   inst_lb     |   inst_lh     |   inst_lw     |   inst_ld
                        |   inst_lbu    |   inst_lhu    |   inst_lwu;

    // assign stallreq_reg_load = inst_lb  |   inst_lh     |   inst_lw     |   inst_ld
    //                         |  inst_lbu |   inst_lhu    |   inst_lwu;

    //regfile store enable
    assign rf_we    =   inst_lui    |   inst_auipc  |   inst_jal    |   inst_jalr
                    |   inst_beq    |   inst_lb     |   inst_lh     |   inst_lw
                    |   inst_lbu    |   inst_lhu    |   inst_addi   |   inst_slti
                    |   inst_sltiu  |   inst_xori   |   inst_ori    |   inst_andi
                    |   inst_slli   |   inst_srli   |   inst_srai   |   inst_add
                    |   inst_sub    |   inst_sll    |   inst_slt    |   inst_sltu
                    |   inst_xor    |   inst_srl    |   inst_sra    |   inst_or
                    |   inst_and    |   inst_lwu    |   inst_ld     
                    |   inst_srli   |   inst_srai   |   inst_addiw  |   inst_slliw
                    |   inst_srliw  |   inst_sraiw  |   inst_addw   |   inst_subw
                    |   inst_sllw   |   inst_srlw   |   inst_sraw   |   inst_csrrw
                    |   inst_csrrs  |   inst_csrrc  |   inst_csrrwi |   inst_csrrsi
                    |   inst_csrrci |   inst_mul    |   inst_mulh   |   inst_mulhsu
                    |   inst_mulhu  |   inst_div    |   inst_divu   |   inst_rem
                    |   inst_remu   |   inst_mulw   |   inst_divw   |   inst_divuw 
                    |   inst_remw   |   inst_remuw;

    // // store in [rd]
    // assign sel_rf_dst[0]    =   inst_lui    |   inst_auipc  |   inst_addi
    //                         |   inst_addiw  |   inst_add    |   inst_addw
    //                         |   inst_sub    |   inst_subw   |   inst_slti
    //                         |   inst_sltiu  |   inst_slli   |   inst_srli
    //                         |   inst_srai   |   inst_slliw  |   inst_srliw
    //                         |   inst_sraiw  |   inst_sll    |   inst_sllw
    //                         |   inst_sllw   |   inst_slt    |   inst_sltu
    //                         |   inst_srl    |   inst_srlw   |   inst_sra
    //                         |   inst_sraw   |   inst_xori   |   inst_ori
    //                         |   inst_andi   |   inst_xor    |   inst_or
    //                         |   inst_and    |   inst_lb     |   inst_lh
    //                         |   inst_lw     |   inst_lwu    |   inst_lbu
    //                         |   inst_lhu    |   inst_ld     |   inst_csrrw
    //                         |   inst_csrrs  |   inst_csrrc  |   inst_csrrwi
    //                         |   inst_csrrsi |   inst_csrrci |   inst_mul
    //                         |   inst_mulh   |   inst_mulhsu |   inst_mulhu
    //                         |   inst_mulw   |   inst_div    |   inst_divu
    //                         |   inst_divw   |   inst_divuw  |   inst_rem
    //                         |   inst_remu   |   inst_remw   |   inst_remuw;
                    
    // // store in mem
    // assign sel_rf_dst[1]    =   inst_sb     |   inst_sh     |   inst_sw
    //                         |   inst_sd;
    
    // // store in pc
    // assign sel_rf_dst[2]    =   inst_jal    |   inst_jalr   |   inst_jalr
    //                         |   inst_beq    |   inst_bne    |   inst_blt
    //                         |   inst_bge    |   inst_bltu   |   inst_bgeu;



    wire [ 7: 0] bru_op;
    assign bru_op   =   {   inst_jal,   inst_jalr,  inst_beq,   inst_bne,   inst_blt,
                            inst_bge,   inst_bltu,  inst_bgeu   }; 

    
    assign  lsu_8   =   inst_lb     |   inst_lbu    |   inst_sb;
    assign  lsu_16  =   inst_lh     |   inst_lhu    |   inst_sh;    
    assign  lsu_32  =   inst_lw     |   inst_lwu    |   inst_sw;
    assign  mul_32  =   inst_mulw;
    assign  div_32  =   inst_divw   |   inst_divuw  |   inst_remw   |   inst_remuw;
    assign  alu_32  =   inst_addiw  |   inst_addw   |   inst_subw   |   inst_slliw
                    |   inst_srliw  |   inst_sraiw  |   inst_sllw   |   inst_srlw
                    |   inst_sraw;
    assign  lsu_64   =   inst_sd     |   inst_ld;


    wire [`SP_BUS]      sp_bus;
    wire lsu_8, lsu_16, lsu_32, lsu_64, mul_32, div_32, alu_32;
    wire [10:0]         mem_op;       //classify instruction into mem
    wire [ 4:0]         mul_op;       //classify instruction into mul
    wire [ 3:0]         rem_op;
    wire [ 3:0]         div_op;       //classify instruction into div
    wire [ 5:0]         sru_op;   
    wire [63:0]         id_pc;
    wire [31:0]         inst_i;
    wire [`AluOpBus]    alu_op;       //classify instruction into alu
    wire [`AluSel1Bus]  sel_alu_src1; //alu src1 classification
    wire [`AluSel2Bus]  sel_alu_src2; //alu src2 classification  
    wire dram_e; 
    wire dram_we;
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire sel_rf_res;
    wire [63: 0] rf_rdata1;
    wire [63: 0] rf_rdata2;
    
    assign id_to_ex_bus = {
        sp_bus,         //291
        lsu_8,          //289
        lsu_16,         //288
        lsu_32,         //287
        lsu_64,         //286
        mul_32,         //285
        div_32,         //284
        alu_32,         //283
        mem_op,         //282
        mul_op,         //271
        rem_op,         //266
        div_op,         //262
        sru_op,         //258
        id_pc,          //252
        inst_i,         //188
        alu_op,         //156
        sel_alu_src1,   //144
        sel_alu_src2,   //141
        dram_e,         //137
        dram_we,        //136
        rf_we,          //135
        rf_waddr,       //134
        sel_rf_res,     //129
        rf_rdata1,      //128
        rf_rdata2       //64
    };


endmodule


//EX -ALU BRU CSR MUL DIV









