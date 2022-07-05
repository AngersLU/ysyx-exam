//exe

// module exeu (
//     input ,
//     output
// );


// endmodule

// `include "defines.v"

// module ysyx_2022040010_ex (
//     input wire rst,

//     //information sent form decoding state to execution stage
//     input wire[`AluOpBus]   aluop_i,
//     input wire[`AluSelBus]  alusel_i,
//     input wire[`RegBus]     reg1_i,
//     input wire[`RegBus]     reg2_i,
//     input wire[`RegAddrBus] w_rd_addr_i,
//     input wire              w_reg_e_i,

//     //execution result
//     output reg[`RegAddrBus] w_rd_addr_o,
//     output reg              w_reg_e_o,
//     output reg[`RegBus]     w_data_o
// );

//     reg[`RegBus]    logic_out;
//     //TODO: need modify
//     always @(*) begin
//         if (rst == `RstEnable) begin
//             logic_out <= `ZeroWord;
//         end
//         else begin
//             case (aluop_i) //subtype
//                 `EXE_ADD_OP: begin
//                     logic_out <= reg1_i + reg2_i;   //TODO:need realize add module
//                 end
//                 default: begin
//                     logic_out <= `ZeroWord;
//                 end
//             endcase
//         end //end else
//     end //end always

//     always @(*) begin
//         w_rd_addr_o <= w_rd_addr_i;
//         w_reg_e_o   <= w_reg_e_i;
//         case (alusel_i)
//             `EXE_RES_LOGIC: begin
//                 w_data_o <= logic_out;
//             end
//             default: begin
//                 w_data_o <= `ZeroWord;
//             end
//         endcase
//     end
    
// endmodule

// module ysyx_2022040010_ex_mem (
//     input wire clk,
//     input wire rst,

//     //information from executing state
//     input wire[`RegAddrBus] ex_w_rd_addr,
//     input wire              ex_w_reg_e,
//     input wire[`RegBus]     ex_w_data,

//     //information sent to the mem state
//     output reg[`RegAddrBus] mem_w_rd_addr,
//     output reg              mem_w_reg_e,
//     output reg[`RegBus]     mem_w_data
// );

//     always @(posedge clk) begin
//         if (rst == `RstEnable) begin
//             mem_w_rd_addr <= `ZeroRegAddr;
//             mem_w_reg_e   <= `WriteDisable;
//             mem_w_data    <= `ZeroWord;
//         end
//         else begin
//             mem_w_rd_addr <= ex_w_rd_addr;
//             // $display("%h",mem_w_rd_addr);
//             mem_w_reg_e   <= ex_w_reg_e;
//             mem_w_data    <= ex_w_data;
//             // $display("%h",mem_w_data);
//         end
//     end

// endmodule

module ysyx_2022040010_ex (
    input wire clk,
    input wire rst,

    input wire [`StallBus-1:0] stall,
    output wire stallreq_for_ex,    //TODO:?

    input wire [`ID_TO_EX_WD-1:0] id_to_ex_bus;

    output wire [`EX_TO_MEM_WD-1:0] ex_to_mem_bus;

    output wire [`EX_TO_RF_WD-1:0] ex_to_rf_bus,

    output [`BR_TO_IF_BUS] br_bus,

    output wire dsram_e,
    output wire [3 : 0] dsram_we,
    output wire [31: 0] dsram_addr,
    output wire [31: 0] dsram_wdata

);

    reg [`ID_TO_EX_WD-1:0] id_to_ex_bus_r;

    always @ (posedge clk) begin
        if (rst) begin
            id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
        end
        else if (stall[2] == `Stop && stall[3] == `NoStop) begin
            id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
        end
        else if (stall[2] == `NoStop) begin
            id_to_ex_bus_r <= id_to_ex_bus;
        end
    end
    
    wire [31: 0]        inst_i;
    wire [63: 0]        ex_pc;
    wire [`AluOpBus]    alu_op;
    wire [`AluSel1Bus]  sel_alu_src1; //alu src1 classification
    wire [`AluSel2Bus]  sel_alu_src2; //alu src2 classification

    wire [`AluOpBus]    alu_op;         //classify instruction into alu
    wire [10: 0]        mem_op;       //classify instruction into mem
    wire [ 4: 0]        mul_op;       //classify instruction into mul
    wire [ 3: 0]        div_op;       //classify instruction into div
    wire [ 3: 0]        rem_op;
    wire [ 5: 0]        sru_op;       //classify instruction into sru-special registers

    wire dram_e;
    wire dram_we;
    wire rf_we;
    wire [ 4: 0] rf_waddr;
    wire sel_rf_res;
    wire [63: 0] rf_rdata1;
    wire [63: 0] rf_rdata2;
    wire lsu_8, lsu_16, lsu_32, lsu_64, mul_32, div_32, alu_32;

    assign  {
        lsu_8,
        lsu_16,
        lsu_32,
        lsu_64,
        mul_32,
        div_32,
        alu_32,
        mem_op,         // 321:311
        mul_op,         // 310:306
        rem_op,
        div_op,         // 305:302
        sru_op,         // 301:256
        // hilo_op,        // 228:221
        // hi, lo,         // 220:157
        ex_pc,          // 255:192
        inst_i,         // 191:160
        alu_op,         // 159:146
        sel_alu_src1,   // 145:143
        sel_alu_src2,   // 142:137 
        dram_e,         // 136
        dram_we,        // 135
        rf_we,          // 134
        rf_waddr,       // 133:129
        sel_rf_res,     // 128
        rf_rdata1,       // 127:64
        rf_rdata2        // 63:0
    } = id_to_ex_bus_r;

    wire [ 5:0] shamt;

    wire [11:0] imm_I;
    wire [11:0] imm_S;
    wire [11:0] imm_B;

    wire [19:0] imm_J;
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
    wire [63: 0] imm_I_sign_extend, imm_S_sign_extend, imm_B_sign_extend,
                 imm_I_zero_extend, imm_S_zero_extend, imm_B_zero_extend;
    wire [63: 0] imm_U_sign_extend, imm_J_sign_extend,
                 imm_U_zero_extend, imm_J_zero_extend;

    wire [63: 0] shamt_zero_extend;

    assign imm_I_sign_extend  = { {52{imm_I[11]}}, imm_I[11:0]};
    assign imm_S_sign_extend  = { {52{imm_S[11]}}, imm_S[11:0]};
    assign imm_B_sign_extend  = { {52{imm_B[11]}}, imm_B[11:0]};

    assign imm_U_sign_extend  = { {44{imm_U[19]}}, imm_U[19:0]};
    assign imm_J_sign_extend  = { {44{imm_J[19]}}, imm_J[19:0]};

    assign imm_I_zero_extend  = { 52'b0, imm_I[11:0]};
    assign imm_S_zero_extend  = { 52'b0, imm_S[11:0]};
    assign imm_B_zero_extend  = { 52'b0, imm_B[11:0]};  

    assign imm_U_zero_extend  = { 44'b0, imm_U[19:0]};
    assign imm_J_zero_extend  = { 44'b0, imm_J[19:0]};

    assign shamt_zero_extend  = { 58'b0, shamt[ 5:0]};

/*  sel_alu_src1[2]  special handle
    assign imm_U_sp_extend = { 32{imm_U[19]}, imm_U[19:0], 12'b0 };
*/
    wire [63:0] alu_src1,   alu_src2;
    wire [63:0] alu_result, ex_result;
    assign alu_src1 =   sel_alu_src1[1] ? ex_pc : 
                        sel_rs1_forward ? rs1_forward_data : rf_rdata1;

    assign alu_src2 =   sel_alu_src2[1] ? imm_I_sign_extend :
                        sel_alu_src2[3] ? imm_I_zero_extend :
                        sel_alu_src2[4] ? shamt_zero_extend :
                        sel_alu_src2[5] ? imm_J_sign_extend :
                        sel_rs2_forward ? rs2_forward_data  : rf_rdata2;
    alu alu_ex( 
        .alu_op         (alu_op),
        .alu_src1       (alu_src1),
        .alu_src2       (alu_src2),
        .alu_result     (alu_result)
    );

// lsu load & store 
    wire inst_lb, inst_lbu, inst_lh, inst_lhu, inst_lw, inst_lwu, inst_ld;
    wire inst_sb, inst_sh,  inst_sw, inst_sd;
    wire [ 3: 0]  sel_lsu_byte;

    assign {
         inst_lb, inst_lbu, inst_lh, inst_lhu, inst_lw, inst_lwu, inst_ld,
         inst_sb, inst_sh,  inst_sw, inst_sd
    } = mem_op;

    assign sel_lsu_byte =   {lsu_64, lsu_32, lsu_16, lsu_8};

    assign dsram_e  =   dram_e;
    assign dsram_we =   {4{dram_we}}&sel_lsu_byte;   //TODO:how to use
    assign dsram_addr   =   ex_result;
    assign dsram_wdata  =   inst_sb ? { {66{rf_rdata2[ 7]}}, rf_rdata2[ 7: 0]} :
                            inst_sh ? { {48{rf_rdata2[15]}}, rf_rdata2[15: 0]} :
                            inst_sw ? { {32{rf_rdata2[31]}}, rf_rdata2[31: 0]} :
                            rf_rdata2;

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
    assign sel_mul_hilo[0] =    inst_mulw;  //mul_result[31: 0]
    assign sel_mul_hilo[1] =    inst_mulh   |   inst_mulhsu     |   inst_mulh;   //mul_result[127:64]
    assign sel_mul_hilo[2] =    inst_mul;   //mul_result[63: 0]
//TODO:now, not classify signed and unsigned
    wire [63: 0] mul_result;
    wire mul_ina_s, mul_inb_s;

    assign mul_ina_s = inst_mul |   inst_mulh   |   inst_mulhsu |   inst_mulw ;
    assign mul_inb_s = inst_mul |   inst_mulh   |   inst_mulw;

    mul mul_ex(
        .clk        (clk            ),
        .ret        (rst            ),
        .mul_32     (mul_32         ),  
        .mul_ina_s  (mul_ina_s      ),
        .ina        (rf_rdata1      ),
        .mul_inb_s  (mul_inb_s      ),
        .inb        (rd_rdata2      ),
        .sel_mul_hilo(sel_mul_hilo  ),

        .result     (mul_result     )
    );





// div part
    wire inst_rem,    inst_remu,  inst_remw,  inst_remuw,
         inst_div,    inst_divu,  inst_divw,  inst_divuw;

    assign {    inst_div,    inst_divu,  inst_divw,  inst_divuw  
    }   =   div_op;

    assign {    inst_rem,    inst_remu,  inst_remw,  inst_remuw
    }   =   rem_op;

    wire div_over;
    reg stallreq_for_div;
    assign stallreq_for_ex = stallreq_for_div;

    reg [63: 0] div_data1;
    reg [63: 0] div_data2;
    reg div_start;
    reg div_signed;
    wire [63: 0] div_result;//TODO: result is 128bits?

    wire [ 1: 0] div_res_sel;
    // 1 sel div result , 0 sel  
    assign div_res_sel = {div_op, rem_op};

//TODO:余数计算目前还没加入div

    div div_ex(
        .rst        (rst        ),
        .clk        (clk        ),
        .div_signed (div_signed ),
        .div_32     (div_32     ), // is it 32-bits operation 
        .div_data1  (div_data1  ),
        .div_data2  (div_data2  ),
        .div_start  (div_start  ),
        .cancle     (1'b0       ),
        .div_res_sel(div_res_sel),

        .div_result (div_result ),
        .div_over   (div_over   )
    );

    wire sel_div_signed;
    assign sel_div_signed   =   inst_rem    |   inst_remw   |   inst_div    
                            |   inst_divw;
    wire sel_div_unsigned;
    assign sel_div_unsigned =   inst_remu   |   inst_remuw  |   inst_divu   
                            |   inst_divuw;   


//TODO:这里面没有divw & divuw
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
                    if ( div_ready == `DivResultNotReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStart;
                        div_signed = 1'b1;
                        stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_ready == `DivResultReady ) begin
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
                    if ( div_ready == `DivResultNotReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStart;
                        div_signed = 1'b0;
                        stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_ready == `DivResultReady ) begin
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
    }   bru_op; 

    wire bru_e;
    wire [`InstAddrBus] bru_addr;
    wire rs1_seq_rs2;
    wire rs1_slt_rs2;
    wire rs1_sge_rs2;
    wire rs1_ueq_rs2;
    wire rs1_ult_rs2;
    wire rs1_uge_rs2;
    wire [`InstAddrBus] pc_plus_4;

    assign pc_plus_4 = id_pc + 64'h4;
//TODO:放上面　＋　bypass_u\
    wire [63: 0] real_data1, real_data2;
    wire sel_rs1_forward, sel_rs2_forward;
    wire [`BR_TO_IF_BUS] br_bus;

    wire bru_e;
    wire [`InstAddrBus] bru_addr;

    assign real_data1 = sel_rs1_forward ? rs1_forward_data : rf_rdata1;
    assign real_data2 = sel_rs2_forward ? rs2_forward_data : rf_rdata2;

    assign rs1_seq_rs2 = ($signed(real_data1) == $signed(real_data2))?1:0; //== signed
    assign rs1_slt_rs2 = ($signed(real_data1)  < $signed(real_data2))?1:0; //<  signed
    assign rs1_sge_rs2 = ($signed(real_data1) >= $signed(real_data2))?1:0; //>= signed

    assign rs1_ult_rs2 = (real_data1  < real_data2)?1:0; //<  unsigned
    assign rs1_uge_rs2 = (real_data1 >= real_data2)?1:0; //>= unsigned

    assign bru_e    = inst_jal
                    | inst_jalr   
                    | inst_beq & rs1_seq_rs2
                    | inst_bne & ~rs1_seq_rs2
                    | inst_blt & rs1_slt_rs2
                    | inst_bge & rs1_sge_rs2
                    | inst_bltu& rs1_ult_rs2
                    | inst_bgeu& rs1_uge_rs2;

    assign bru_addr = inst_beq  ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_bne  ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_blt  ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_bge  ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_bltu ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_bgeu ? (pc_plus_4 + {{52{inst[11]}}, imm_B} )
                    : inst_jal  ? (pc_plus_4 + {{44{inst[19]}}, imm_j} )
                    : inst_jalr ? (pc_plus_4 + {{52{inst[12]}}, imm_I}&(~64'b1) );

    assign br_bus   = { bru_e,
                        bru_addr    };



endmodule


