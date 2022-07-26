
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_ex (
    input wire clk,
    input wire rst,

    input wire [`StallBus] stall,
    output wire stallreq_for_ex,  
    output wire stallreq_for_bru,  

    input wire [`ID_TO_EX_BUS] id_to_ex_bus,

    output wire [`EX_TO_MEM_BUS] ex_to_mem_bus,

    output wire [`BP_TO_RF_BUS] ex_to_rf_bus,

    output wire [ 6: 0] ex_to_id_for_stallload,  //dram_we + dram_e + rd

    output wire [`BR_TO_IF_BUS] br_bus,

    // line 272
    output wire dsram_e,
    output wire dsram_we,
    output wire [63: 0] dsram_addr,
    output wire [63: 0] dsram_wdata,
    output wire [ 7: 0] dsram_sel,
    
    input wire  [63: 0] dsram_rdata,
    output wire [63: 0] debug_ex_pc

);

    reg [`ID_TO_EX_BUS] id_to_ex_bus_r;

    reg flag;

    always @(posedge clk) begin
        if (rst) begin
            id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
            flag <= 1'b0;
        end
        else if (stall[1] == 1'b1 && flag == 1'b0) begin
            flag <= 1'b1;
        end
        else if (stall[2] == 1'b1 | stall[0]) begin
            id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
            flag <= 1'b0;
        end
        else if (stall[5] == 1'b0) begin
            id_to_ex_bus_r <= id_to_ex_bus;
            flag <= 1'b0; 
        end
        else begin
            id_to_ex_bus_r <= id_to_ex_bus;
            flag <= 1'b0;
        end
    end


    wire [`SP_BUS] sp_bus;
    wire lsu_8, lsu_16, lsu_32, lsu_64, mul_32, div_32, alu_32;
    wire [10: 0]        mem_op;       //classify instruction into mem
    wire [ 4: 0]        mul_op;       //classify instruction into mul
    wire [ 3: 0]        div_op;       //classify instruction into div
    wire [ 3: 0]        rem_op;
    wire [ 5: 0]        sru_op;       //classify instruction into sru-special registers
    wire [63: 0]        ex_pc;
    wire [31: 0]        inst_i;    
    wire [`AluOpBus]    alu_op;  
    wire [`AluSel1Bus]  sel_alu_src1; //alu src1 classification
    wire [`AluSel2Bus]  sel_alu_src2; //alu src2 classification
    wire dram_e;
    wire dram_we;     
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire sel_rf_res;
    wire [63: 0] rf_rdata1;
    wire [63: 0] rf_rdata2;
    wire [`ID_TO_EX_BUS] id_to_ex_bus_temp;
    wire [63: 0] next_pc;
    wire [63: 0] real_npc;

    assign id_to_ex_bus_temp = flag ? `ID_TO_EX_WD'b0 : id_to_ex_bus_r;

    assign  {
        bru_op,
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
        next_pc,
        ex_pc,         //252
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
    } = id_to_ex_bus_r;

    assign debug_ex_pc = ex_pc;
    

    wire [ 5:0] shamt;

    wire [11:0] imm_I;
    wire [11:0] imm_S;
    wire [12:0] imm_B;

    wire [20:0] imm_J;
    wire [19:0] imm_U;   
//I
    assign imm_I    = inst_i[31:20];    //no need to decoder
    assign shamt    = imm_I[ 5: 0];
//U
    assign imm_U    = inst_i[31:12];    //no need to decoder

//S 
    assign imm_S    = {inst_i[31:25], inst_i[11:7]};    //no need to decoder

//B
    assign imm_B    = {inst_i[31], inst_i[7], inst_i[30:25], inst_i[11:8], 1'b0};    //no need to decoder

//J
    assign imm_J    = {inst_i[31], inst_i[19:12], inst_i[20], inst_i[30:21], 1'b0};  //no need to decoder 

/*
    12: I | S | B  
    20: U | J
*/
// alu
// TODO:这种extend的方法是否对riscv64可行
    wire [63: 0] imm_I_sign_extend, imm_S_sign_extend, imm_B_sign_extend;
                //  imm_I_zero_extend, imm_S_zero_extend, imm_B_zero_extend;
    wire [63: 0] imm_U_sign_extend, imm_J_sign_extend;
                //  imm_U_zero_extend, imm_J_zero_extend;

    wire [63: 0] shamt_zero_extend;
    wire [63: 0] imm_U_sp_extend;
    wire [63: 0] imm_I_jalr_extend; 

    assign imm_I_sign_extend  = { {52{imm_I[11]}}, imm_I[11:0]};
    assign imm_S_sign_extend  = { {52{imm_S[11]}}, imm_S[11:0]};
    assign imm_B_sign_extend  = { {52{imm_B[11]}}, imm_B[11:0]};

    assign imm_U_sign_extend  = { {44{imm_U[19]}}, imm_U[19:0]};
    assign imm_J_sign_extend  = { {44{imm_J[19]}}, imm_J[19:0]};

    // assign imm_I_zero_extend  = { 52'b0, imm_I[11:0]};
    // assign imm_S_zero_extend  = { 52'b0, imm_S[11:0]};
    // assign imm_B_zero_extend  = { 52'b0, imm_B[11:0]};  

    // assign imm_U_zero_extend  = { 44'b0, imm_U[19:0]};
    // assign imm_J_zero_extend  = { 44'b0, imm_J[19:0]};

    assign shamt_zero_extend  = { 58'b0, shamt[ 5:0]};

//   sel_alu_src1[2]  special handle
    assign imm_U_sp_extend = { {32{imm_U[19]}}, imm_U[19:0], 12'b0 };
    // assign imm_I_jalr_extend = { {imm_I_sign_extend}&{~64'b1}};

    wire [63:0] alu_src1,   alu_src2;
    wire [63:0] alu_result, ex_result;
    wire [63:0] src2_zero_extend;

    wire alu_over;

    assign alu_src1 =   sel_alu_src1[1] ? ex_pc : 
                        sel_alu_src1[2] ? 64'b0 : rf_rdata1;

    assign src2_zero_extend = {59'b0, rf_rdata2[4:0]};

    assign alu_src2 =   sel_alu_src2[1] ? imm_I_sign_extend :
                        sel_alu_src2[2] ? imm_U_sp_extend   :
                        sel_alu_src2[3] ? shamt_zero_extend :
                        sel_alu_src2[4] ? { 61'b0, 3'h4}    :
                        sel_alu_src2[5] ? imm_S_sign_extend :
                        sel_alu_src2[6] ? src2_zero_extend  : rf_rdata2;

    alu alu_ex( 
        .alu_op         (alu_op     ),
        .alu_src1       (alu_src1   ),
        .alu_src2       (alu_src2   ),
        .alu_32         (alu_32     ),
        .alu_result     (alu_result ),
        .alu_over       (alu_over   )
    );

// lsu load & store 
// load instructions need to obtain data in the mem_stage
// inessence, load in exu is an addition operation
    wire inst_sb, inst_sh,  inst_sw, inst_sd;
    wire [ 6: 0]  load_op;
    wire [ 7: 0]  byte_sel;

    assign {
         inst_sb, inst_sh,  inst_sw, inst_sd
    } = mem_op[ 3: 0];

    assign load_op = mem_op[10: 4];


    decoder_3_8 decoder_3_8_u1(
        .in     (ex_result[2:0] ),
        .out    (byte_sel       )
    );

//mem_op == 1 & dsram_we == 0 dsram_addr != 64'b0 -> load operation

    wire [ 7: 0] ex_dsram_sel;
    assign dsram_e  =   dram_e;
    assign dsram_we =   dram_we;
    assign dsram_addr   =   ex_result;

    assign dsram_wdata  =   inst_sb ? {  8{rf_rdata2[ 7: 0]} } :
                            inst_sh ? {  4{rf_rdata2[15: 0]} } :
                            inst_sw ? {  2{rf_rdata2[31: 0]} } :
                            inst_sd ? rf_rdata2 : 64'b0;

    assign ex_dsram_sel    =    lsu_64  ? 8'b1111_1111 :
                                lsu_32  ? { {4{byte_sel[4]}}, {4{byte_sel[0]}}} :
                                lsu_16  ? { {2{byte_sel[6]}}, {2{byte_sel[4]}}, {2{byte_sel[2]}}, {2{byte_sel[0]}} } : 
                                lsu_8   ? byte_sel  : 8'b0;

    assign dsram_sel = ex_dsram_sel;

// mul & div
    // mulw
    // mul (signed)rf_rdata1[31:0] * (signed)rf_rdata2[31:0] = result[31:0]  
    // signed_extend(result[31: 0] = mul_result)   
    // mul_32
    // result 32 signed extend
    wire inst_mul,   inst_mulh,  inst_mulhsu,    inst_mulhu, inst_mulw;
    assign {
        inst_mul,   inst_mulh,  inst_mulhsu,    inst_mulhu, inst_mulw
    }   =   mul_op;



    wire [2:0] sel_mul_hilo;
    wire [63: 0] mul_result;

    //mul_result[31: 0]
    assign sel_mul_hilo[0] =    inst_mulw;  

    //mul_result[127:64]
    assign sel_mul_hilo[1] =    inst_mulh   |   inst_mulhsu     |   inst_mulh; 

    //mul_result[63: 0]
    assign sel_mul_hilo[2] =    inst_mul;   

    wire [63: 0] mul_result;
    wire mul_ina_s, mul_inb_s;

    wire mul_over;

    assign mul_ina_s = inst_mul |   inst_mulh   |   inst_mulhsu |   inst_mulw ;
    assign mul_inb_s = inst_mul |   inst_mulh   |   inst_mulw;

//depend on  {mul_ina_s, mul_inb_s}　11　normal，　10　mulhsu , 00 mulhu
    ysyx_2022040010_mul mul_ex(
        .clk            (clk            ),
        .ret            (rst            ),
        .mul_32         (mul_32         ),  
        .mul_ina_s      (mul_ina_s      ),
        .ina            (rf_rdata1      ),
        .mul_inb_s      (mul_inb_s      ),
        .inb            (rf_rdata2      ),
        .sel_mul_hilo   (sel_mul_hilo   ),

        .mul_result     (mul_result     ),
        .mul_over       (mul_over       )
    );





// div part
    wire inst_rem,    inst_remu,  inst_remw,  inst_remuw,
         inst_div,    inst_divu,  inst_divw,  inst_divuw;
    // /
    assign {    inst_div,    inst_divu,  inst_divw,  inst_divuw  
    }   =   div_op;
    // %
    assign {    inst_rem,    inst_remu,  inst_remw,  inst_remuw
    }   =   rem_op;

    wire div_over;
    reg stallreq_for_div;
    wire stallreq_for_mul ;
    assign stallreq_for_mul = inst_mul  | inst_mulh | inst_mulhsu | 
                            | inst_mulhu| inst_mulw;
    // assign stallreq_for_ex = stallreq_for_div | (stallreq_for_mul & ~mul_over);
    //TODO: mul changed to pipelining
    assign stallreq_for_ex = stallreq_for_div;

    reg [63: 0] div_data1;
    reg [63: 0] div_data2;

    reg div_start;
    reg div_signed;
    wire [63: 0] div_result;//TODO: result is 128bits?

    wire [ 1: 0] div_res_sel;
    // 1 sel div result , 0 sel  rem
    assign div_res_sel = {  {inst_div | inst_divu | inst_divw | inst_divuw }, 
                            {inst_rem | inst_remu | inst_remw | inst_remuw }};  
    wire [63:0] div_data1_32;
    wire [63:0] div_data1_i;
    wire [63:0] div_data2_32;
    wire [63:0] div_data2_i;

    assign div_data1_32 = div_signed ? { {32{div_data1[31]}}, div_data1[31:0]} : { {32{1'b0}}, div_data1[31:0]};
    assign div_data1_i = div_32 ? div_data1_32 : div_data1;
    assign div_data2_32 = div_signed ? { {32{div_data2[31]}}, div_data2[31:0]} : { {32{1'b0}}, div_data2[31:0]};
    assign div_data2_i = div_32 ? div_data2_32 : div_data2;

    ysyx_2022040010_div div_ex(
        .rst            (rst        ),
        .clk            (clk        ),
        .signed_div_i   (div_signed ),
        .div_32         (div_32     ), // is it 32-bits operation 
        .opdata1_i      (div_data1_i),
        .opdata2_i      (div_data2_i),
        .start_i        (div_start  ),
        .annul_i        (1'b0       ),
        .div_res_sel    (div_res_sel),
        .div_res_o      (div_result ),
        .ready_o        (div_over   )
    );

    wire sel_div_signed;
    assign sel_div_signed   =   inst_rem    |   inst_remw   |   inst_div    
                            |   inst_divw;
    wire sel_div_unsigned;
    assign sel_div_unsigned =   inst_remu   |   inst_remuw  |   inst_divu   
                            |   inst_divuw;   

    always @ ( *) begin
        if ( rst) begin
            stallreq_for_div = `NoStop;
            div_data1 = `ZeroWord;
            div_data2 = `ZeroWord;
            div_start = `DivStop;
            div_signed = 1'b0;
        end
        else begin
            stallreq_for_div = `NoStop;
            div_data1 = `ZeroWord;
            div_data2 = `ZeroWord;
            div_start = `DivStop;
            div_signed = 1'b0;
            case ({sel_div_signed, sel_div_unsigned})
                2'b10: begin
                    if ( div_over == `DivResultNotReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStart;
                        div_signed = 1'b1;
                        stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_over == `DivResultReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStop;
                        div_signed = 1'b1;
                        stallreq_for_div = `NoStop;
                    end
                    else begin
                        div_data1 = `ZeroWord;
                        div_data2 = `ZeroWord;
                        div_start = `DivStop;
                        div_signed = 1'b0;
                        stallreq_for_div = `NoStop;
                    end
                end
                2'b01: begin
                    if ( div_over == `DivResultNotReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStart;
                        div_signed = 1'b0;
                        stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_over == `DivResultReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStop;
                        div_signed = 1'b0;
                        stallreq_for_div = `NoStop;
                    end
                    else begin
                        div_data1 = `ZeroWord;
                        div_data2 = `ZeroWord;
                        div_start = `DivStop;
                        div_signed = 1'b0;
                   end
                end
                default: begin
                end
            endcase
        end
    end

// bru
    wire [ 7: 0] bru_op;
    wire    inst_jal, inst_jalr, inst_beq, inst_bne, inst_blt, inst_bge, 
            inst_bltu, inst_bgeu;

    assign  {   inst_jal,   inst_jalr,  inst_beq,   inst_bne,   inst_blt,
                inst_bge,   inst_bltu,  inst_bgeu   
    }   = bru_op; 

    wire bru_e;
    wire [`InstAddrBus] bru_addr;
    wire rs1_seq_rs2;
    wire rs1_slt_rs2;
    wire rs1_sge_rs2;
    wire rs1_ueq_rs2;
    wire rs1_ult_rs2;
    wire rs1_uge_rs2;

    wire bru_e;
    wire [`InstAddrBus] bru_addr;

    assign rs1_seq_rs2 = ($signed(rf_rdata1) == $signed(rf_rdata2))?1:0; //== signed
    assign rs1_slt_rs2 = ($signed(rf_rdata1)  < $signed(rf_rdata2))?1:0; //<  signed
    assign rs1_sge_rs2 = ($signed(rf_rdata1) >= $signed(rf_rdata2))?1:0; //>= signed

    assign rs1_ult_rs2 = (rf_rdata1  < rf_rdata2)?1:0; //<  unsigned
    assign rs1_uge_rs2 = (rf_rdata1 >= rf_rdata2)?1:0; //>= unsigned

    assign bru_e    = inst_jal
                    | inst_jalr   
                    | inst_beq & rs1_seq_rs2
                    | inst_bne & ~rs1_seq_rs2
                    | inst_blt & rs1_slt_rs2
                    | inst_bge & rs1_sge_rs2
                    | inst_bltu& rs1_ult_rs2
                    | inst_bgeu& rs1_uge_rs2;


    assign bru_addr = inst_beq  ? {ex_pc     + imm_B_sign_extend  }
                    : inst_bne  ? {ex_pc     + imm_B_sign_extend  }
                    : inst_blt  ? {ex_pc     + imm_B_sign_extend  }
                    : inst_bge  ? {ex_pc     + imm_B_sign_extend  }
                    : inst_bltu ? {ex_pc     + imm_B_sign_extend  }
                    : inst_bgeu ? {ex_pc     + imm_B_sign_extend  }
                    : inst_jal  ? {ex_pc     + imm_J_sign_extend  }
                    : inst_jalr ? {{rf_rdata1 + imm_I_sign_extend} & ~64'b1  } : 64'b0;

    assign stallreq_for_bru = bru_e;
    assign real_npc = bru_e ? bru_addr : next_pc;

    assign br_bus   = { bru_e,
                        bru_addr    };



//out
    assign ex_result =  alu_over ? alu_result :
                        mul_over ? mul_result :
                        div_over ? div_result :
                        64'b0;                //this instruction is a branch 

// store instruction over    211:0
    assign ex_to_mem_bus = {
        sp_bus,      //ecall / ebreak 2
        alu_op[0],  //op_sp          1
        dsram_rdata, 
        load_op,    //143:137 148
        real_npc,
        ex_pc,      //136:73  141
        dram_e,     //    72  77
        dram_we,    //    71  76
        ex_dsram_sel, //7:0   8
        //0 form alu_res, 1 from ld_res
        sel_rf_res, //    66  71
        rf_we,      //    65  70
        rf_waddr,   // 68:64  69
        ex_result   // 63: 0  64
    };

    wire rf_we_o;
    assign rf_we_o = (rf_waddr == 5'b0) ? 1'b0 : rf_we;

    // bypass ex_to_id
    assign ex_to_rf_bus = {
        rf_we_o,       //    69
        rf_waddr,   // 68:64
        ex_result   // 63: 0
    };

    assign ex_to_id_for_stallload = {rf_waddr, dram_we, dram_e};

endmodule


