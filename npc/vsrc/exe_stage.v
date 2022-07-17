
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_ex (
    input wire clk,
    input wire rst,

    // input wire [`StallBus-1:0] stall,
    // output wire stallreq_for_ex,    //TODO:?

    input wire [`ID_TO_EX_BUS] id_to_ex_bus,

    output wire [`EX_TO_MEM_BUS] ex_to_mem_bus,

    output wire [`BP_TO_RF_BUS] ex_to_rf_bus,

    output wire [`BR_TO_IF_BUS] br_bus,

    // line 272
    output wire dsram_e,
    output wire dsram_we,
    output wire [63: 0] dsram_addr,
    output wire [63: 0] dsram_wdata

);

    reg [`ID_TO_EX_BUS] id_to_ex_bus_r;

    // always @ (posedge clk) begin
    //     if (rst) begin
    //         id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
    //     end
    //     else if (stall[2] == `Stop && stall[3] == `NoStop) begin
    //         id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
    //     end
    //     else if (stall[2] == `NoStop) begin
    //         id_to_ex_bus_r <= id_to_ex_bus;
    //     end
    // end

    always @( posedge clk) begin
        if( rst ) begin
            id_to_ex_bus_r <= `ID_TO_EX_WD'b0;
        end
        else begin
            id_to_ex_bus_r <= id_to_ex_bus;
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

    assign  {
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
    assign imm_I_jalr_extend = { {imm_I_sign_extend}&{~64'b1}};

    wire [63:0] alu_src1,   alu_src2;
    wire [63:0] alu_result, ex_result;

    wire alu_over;

    assign alu_src1 =   sel_alu_src1[1] ? ex_pc : 
                        sel_alu_src1[2] ? 64'b0 :
                        sel_rs1_forward ? rs1_forward_data : rf_rdata1;

    assign alu_src2 =   sel_alu_src2[1] ? imm_I_sign_extend :
                        sel_alu_src2[2] ? imm_U_sp_extend   :
                        sel_alu_src2[3] ? shamt_zero_extend :
                        sel_rs2_forward ? rs2_forward_data  : rf_rdata2;

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
    wire [ 3: 0]  sel_lsu_byte;
    wire [ 6: 0]  load_op;

    assign {
         inst_sb, inst_sh,  inst_sw, inst_sd
    } = mem_op[ 3: 0];

    assign load_op = mem_op[10: 4];

    assign sel_lsu_byte =   {lsu_64, lsu_32, lsu_16, lsu_8};
//mem_op == 1 & dsram_we == 0 dsram_addr != 64'b0 -> load operation

//TODO:output
    assign dsram_e  =   dram_e;
    //TODO: write_enable & lsu_byte
    // software selects the bit width for storage
    // dsram_we == 4'b0001  dsram_wdata[ 7: 0] 
    // dsram_we == 4'b0010  dsram_wdata[16: 0]
    // dsram_we == 4'b0100  dsram_wdata[31: 0]
    // dsram_we == 4'b1000  dsram_wdata[64: 0]
    // assign dsram_we =   {4{dram_we}}&sel_lsu_byte;  
    assign dsram_addr   =   ex_result;
//TODO: modify
    assign dsram_wdata  =   inst_sb ? { {56{1'b0}}, rf_rdata2[ 7: 0]} :
                            inst_sh ? { {48{1'b0}}, rf_rdata2[15: 0]} :
                            inst_sw ? { {32{1'b0}}, rf_rdata2[31: 0]} :
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
        .ina            (real_data1      ),
        .mul_inb_s      (mul_inb_s      ),
        .inb            (real_data2      ),
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
    // reg stallreq_for_div;
    // assign stallreq_for_ex = stallreq_for_div;

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
            // stallreq_for_div = `NoStop;
            div_data1 = `ZeroWord;
            div_data2 = `ZeroWord;
            div_start = `DivStop;
            div_signed = 1'b0;
        end
        else begin
            // stallreq_for_div = `NoStop;
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
                        // stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_over == `DivResultReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStop;
                        div_signed = 1'b1;
                        // stallreq_for_div = `NoStop;
                    end
                    else begin
                        div_data1 = `ZeroWord;
                        div_data2 = `ZeroWord;
                        div_start = `DivStop;
                        div_signed = 1'b0;
                        // stallreq_for_div = `NoStop;
                    end
                end
                2'b01: begin
                    if ( div_over == `DivResultNotReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStart;
                        div_signed = 1'b0;
                        // stallreq_for_div = `Stop;  // stop stallreq
                    end
                    else if ( div_over == `DivResultReady ) begin
                        div_data1 = rf_rdata1;
                        div_data2 = rf_rdata2;
                        div_start = `DivStop;
                        div_signed = 1'b0;
                        // stallreq_for_div = `NoStop;
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
    wire [`InstAddrBus] pc_plus_4;

    assign pc_plus_4 = ex_pc + 64'h4;
//TODO:放上面　＋　bypass_u\
    wire [63: 0] real_data1, real_data2;
    wire sel_rs1_forward, sel_rs2_forward;
    wire [63: 0] rs1_forward_data, rs2_forward_data;

    wire bru_e;
    wire [`InstAddrBus] bru_addr;


//TODO:exu很多input　opdata还不是real_data
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

    assign bru_addr = inst_beq  ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_bne  ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_blt  ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_bge  ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_bltu ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_bgeu ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_jal  ? {pc_plus_4 + imm_B_sign_extend  }
                    : inst_jalr ? {pc_plus_4 + imm_I_jalr_extend  } : 64'b0;

    assign br_bus   = { bru_e,
                        bru_addr    };

//sp_handle
    import "DPI-C" function void ebreak;

    always @ (*) begin
        if(alu_op[0] == 1 & sp_bus[0] == 1) begin
            // ebreak();
        end
        else if ( alu_op[0] == 1 & sp_bus[1] == 1) begin
            // ecall();//TODO: no finished yet
        end
    end




//out
    assign ex_result =  alu_over ? alu_result :
                        mul_over ? mul_result :
                        div_over ? div_result :
                        64'b0;                //this instruction is a branch 

// store instruction over    143: 0
    assign ex_to_mem_bus = {
        load_op,    //143:137 148
        ex_pc,      //136:73  141
        dram_e,     //    72  77
        dram_we,    //    71  76
        sel_lsu_byte,//70:67  75
        //0 form alu_res, 1 from ld_res
        sel_rf_res, //    66  71
        rf_we,      //    65  70
        rf_waddr,   // 68:64  69
        ex_result   // 63: 0  64
    };
    // bypass ex_to_id
    assign ex_to_rf_bus = {
        rf_we,       //    69
        rf_waddr,   // 68:64
        ex_result   // 63: 0
    };



endmodule


