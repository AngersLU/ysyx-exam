// //2022/5/12


// //five stage assembly line
// module ysyx_2022040010_fsl (
//     input wire clk,
//     input wire rst,

//     input wire[31:0] inst_data_i, //pc->data

//     output wire[63:0] inst_addr_o,//dnpc addr
//     output wire       inst_ce_o

// );


//     // TYPE = R
//     // assign opcode = inst[6 : 0];
//     // assign rd     = inst[11: 7];
//     // assign func3  = inst[14:12];
//     // assign rs1    = inst[19:15];
//     // assign rs2    = inst[24:20];
//     // assign func7  = inst[31:25];

//     // TYPE = S
//     // assign opcode = inst[6 : 0];
//     // assign imm    = { inst[31:25], inst[11: 7] };
//     // assign func3  = inst[14:12];
//     // assign rs1    = inst[19:15];
//     // assign rs2    = inst[24:20];

//     // TYPE = B
//     // assign opcode = inst[6 : 0];
//     // assign imm    = { inst[31:31], inst[7 : 7], inst[30:25], inst[11: 8], 0};
//     // assign func3  = inst[14:12];
//     // assign rs1    = inst[19:15];
//     // assign rs2    = inst[24:20];

//     // TYPE = U
//     // assign opcode = inst[6 : 0];
//     // assign rd     = inst[11: 7];
//     // assign imm    = inst[31:12];

//     // TYPE = J
//     // assign opcode = inst[6 : 0];
//     // assign rd     = inst[11: 7];
//     // assign imm    = { inst[31:31], inst[19:12], inst[20:20], inst[30:21], 0 };

//     wire[`InstAddrBus] pc;      //progect counter instaddrbus 63:0
//     wire[`InstAddrBus] id_pc_i; //id state
//     wire[`InstBus]     id_inst_i;//instbus 31:0\

//     wire[`RegAddrBus]   mem_w_rd_addr_i;
//     wire                mem_w_reg_e_i;
//     wire[`RegBus]       mem_w_data_i;

//     //regfile & id variable
//     wire[`RegBus] reg1_data;
//     wire[`RegBus] reg2_data;
//     wire reg1_read_e;
//     wire reg2_read_e;
//     wire[`RegAddrBus] reg1_addr;
//     wire[`RegAddrBus] reg2_addr;

//     //ID->ID_EX
//     wire[`AluOpBus]     id_aluop_o;
//     wire[`AluSelBus]    id_alusel_o;
//     wire[`RegBus]       id_reg1_o;
//     wire[`RegBus]       id_reg2_o;
//     wire[`RegAddrBus]   id_w_rd_addr_o;
//     wire                id_w_reg_e_o;



//     // wire                wb_wreg_i;
//     // wire[`RegAddrBus]   wb_wd_i;
//     // wire[`RegBus]       wb_wdata_i;

//     //ID_EX & EX
//     wire[`AluOpBus]     ex_aluop_i;
//     wire[`AluSelBus]    ex_alusel_i;
//     wire[`RegBus]       ex_reg1_i;
//     wire[`RegBus]       ex_reg2_i;
//     wire[`RegAddrBus]   ex_w_rd_addr_i;
//     wire                ex_w_reg_e_i;

//     //EX out to EX_MEM
//     wire[`RegAddrBus]   ex_w_rd_addr_o;
//     wire                ex_w_reg_e_o;
//     wire[`RegBus]       ex_w_data_o;


//     wire[`RegAddrBus]   mem_w_rd_addr_o;
//     wire                mem_w_reg_e_o;
//     wire[`RegBus]       mem_w_data_o;

//     wire[`RegAddrBus]   wb_w_rd_addr;
//     wire                wb_w_reg_e;
//     wire[`RegBus]       wb_w_data;

//     //mem_wb//mem_wb out and write back(regfile1)
//     wire[`RegAddrBus]   wb_w_rd_addr_i;
//     wire                wb_w_reg_e_i;
//     wire[`RegBus]       wb_w_data_i;


//     //pc_reg
//     ysyx_2022040010_pc_reg ysyx_2022040010_pc_reg0(.clk(clk),
//                    .rst(rst),
//                    .pc(pc),
//                    .ce(inst_ce_o) );

//     assign inst_addr_o = pc;

//     //IF_ID
//     ysyx_2022040010_if_id ysyx_2022040010_if_id0(.clk(clk),
//                  .rst(rst),
//                  .if_pc(pc),
//                  .if_inst(inst_data_i),
//                  .id_pc(id_pc_i),
//                  .id_inst(id_inst_i) );


//     //ID TODO:need to modify
//     ysyx_2022040010_id ysyx_2022040010_id0(.rst(rst),
//            .pc_i(id_pc_i),
//            .inst_i(id_inst_i),

//            //ex->id the result of an instruction in execution
//            .ex_w_e_i(ex_w_reg_e_o),
//            .ex_w_addr_i(ex_w_rd_addr_o),
//            .ex_w_data_i(ex_w_data_o),

//            //mem->id the result of an instruction in memory access
//            .mem_w_e_i(mem_w_reg_e_o),
//            .mem_w_addr_i(mem_w_rd_addr_o),
//            .mem_w_data_i(mem_w_data_o),

//            //from regfile input
//            .reg1_data_i(reg1_data),
//            .reg2_data_i(reg2_data),

//            //information sent to regfile
//            .reg1_read_e_o(reg1_read_e),
//            .reg2_read_e_o(reg2_read_e),
//            .reg1_addr_o(reg1_addr),
//            .reg2_addr_o(reg2_addr),

//            //information sent to ID_EX module
//            .aluop_o(id_aluop_o),
//            .alusel_o(id_alusel_o),
//            .reg1_o(id_reg1_o),
//            .reg2_o(id_reg2_o),
//            .w_rd_addr_o(id_w_rd_addr_o),
//            .w_reg_e_o(id_w_reg_e_o) );




//     ysyx_2022040010_regfile ysyx_2022040010_regfile1(.clk(clk),
//                      .rst(rst),
//                      .we(wb_w_reg_e_i),
//                      .waddr(wb_w_rd_addr_i),
//                      .wdata(wb_w_data_i),

//                      .re1(reg1_read_e),
//                      .raddr1(reg1_addr),
//                      .rdata1(reg1_data),

//                      .re2(reg2_read_e),
//                      .raddr2(reg2_addr),
//                      .rdata2(reg2_data) );


//     //ID_EX
//     ysyx_2022040010_id_ex ysyx_2022040010_id_ex0(.clk(clk),
//                  .rst(rst),
//                  //information from ID
//                  .id_aluop(id_aluop_o),
//                  .id_alusel(id_alusel_o),
//                  .id_reg1(id_reg1_o),
//                  .id_reg2(id_reg2_o),
//                  .id_w_rd_addr(id_w_rd_addr_o),
//                  .id_w_reg_e(id_w_reg_e_o),

//                  //info sent to EX
//                  .ex_aluop(ex_aluop_i),
//                  .ex_alusel(ex_alusel_i),
//                  .ex_reg1(ex_reg1_i),
//                  .ex_reg2(ex_reg2_i),
//                  .ex_w_rd_addr(ex_w_rd_addr_i),
//                  .ex_w_reg_e(ex_w_reg_e_i) );

//     //EX
//     ysyx_2022040010_ex ysyx_2022040010_ex0(.rst(rst),

//             //info sent from id_ex
//            .aluop_i(ex_aluop_i),
//            .alusel_i(ex_alusel_i),
//            .reg1_i(ex_reg1_i),
//            .reg2_i(ex_reg2_i),
//            .w_rd_addr_i(ex_w_rd_addr_i),
//            .w_reg_e_i(ex_w_reg_e_i),

//            //info sent to ex_mem
//            .w_rd_addr_o(ex_w_rd_addr_o),
//            .w_reg_e_o(ex_w_reg_e_o),
//            .w_data_o(ex_w_data_o)    );


//     //ex_mem
//     ysyx_2022040010_ex_mem ysyx_2022040010_ex_mem0( .clk(clk),
//                     .rst(rst),

//                     //info form ex0
//                     .ex_w_rd_addr(ex_w_rd_addr_o),
//                     .ex_w_reg_e(ex_w_reg_e_o),
//                     .ex_w_data(ex_w_data_o),

//                     //info send to mem
//                     .mem_w_rd_addr(mem_w_rd_addr_i),
//                     .mem_w_reg_e(mem_w_reg_e_i),
//                     .mem_w_data(mem_w_data_i) );



//     //mem
//     ysyx_2022040010_mem ysyx_2022040010_mem0(   .rst(rst),

//                 //info sent from ex_mem
//                 .w_rd_addr_i(mem_w_rd_addr_i),
//                 .w_reg_e_i(mem_w_reg_e_i),
//                 .w_data_i(mem_w_data_i),

//                 //info send to mem_wb
//                 .w_rd_addr_o(mem_w_rd_addr_o),
//                 .w_reg_e_o(mem_w_reg_e_o),
//                 .w_data_o(mem_w_data_o) );



//     //mem_wb
//     ysyx_2022040010_mem_wb ysyx_2022040010_mem_wb0( .clk(clk),
//                     .rst(rst),

//                     //info sent form mem
//                     .mem_w_rd_addr(mem_w_rd_addr_o),
//                     .mem_w_reg_e(mem_w_reg_e_o),
//                     .mem_w_data(mem_w_data_o),

//                     .wb_w_rd_addr(wb_w_rd_addr_i),
//                     .wb_w_reg_e(wb_w_reg_e_i),
//                     .wb_w_data(wb_w_data_i) );

// endmodule


`include "defines.v"
`timescale 1ns/1ns

//five stage assembly line
module ysyx_2022040010_fsl (
    input wire clk,
    input wire rst,
    // input wire [5:0] int,

    output wire isram_e,
    // output wire isram_we,
    output wire [63: 0] isram_addr,
    // output wire [63: 0] isram_wdata,
    input  wire [31: 0] isram_rdata,

    output wire dsram_e,
    output wire dsram_we,
    output wire [63: 0] dsram_addr,
    output wire [63: 0] dsram_wdata,
    input  wire [63: 0] dsram_rdata

);

    wire [`IF_TO_ID_BUS]    if_to_id_bus;
    wire [`ID_TO_EX_BUS]    id_to_ex_bus;
    wire [`EX_TO_MEM_BUS]   ex_to_mem_bus;
    wire [`MEM_TO_WB_BUS]   mem_to_wb_bus;
    //EX_TO_IF 
    wire [`BR_TO_IF_BUS]       br_bus;

    //bypass
    wire [`BP_TO_RF_BUS]    ex_to_rf_bus;
    wire [`BP_TO_RF_BUS]    mem_to_rf_bus;
    wire [`BP_TO_RF_BUS]    wb_to_rf_bus;

    wire [`StallBus] stall;
    // wire stallreq_for_load;
    // wire stallreq_for_bru;
    // wire stallreq_ex;

    ysyx_2022040010_if ifu  ( 
        .clk            (clk            ),
        .rst            (rst            ),
        // .stall  (stall      ),
        .br_bus         (br_bus         ),

        .if_to_id_bus   (if_to_id_bus   ),

        .isram_e        (isram_e        ),
        // .isram_we       (isram_we       ),
        .isram_addr     (isram_addr     )
        // .isram_rdata    (isram_rdata    )
        // .isram_wdata    (isram_wdata    ),
    );

    ysyx_2022040010_id  idu (
        .clk                (clk                ),
        .rst                (rst                ),
        // .stall              (stall              ),
        // .stallreq_for_load  (stallreq_for_load  ),
        // .stallreq_for_bru   (stallreq_for_bru   ),
        .if_to_id_bus       (if_to_id_bus       ),
        .isram_rdata        (isram_rdata        ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .mem_to_rf_bus      (mem_to_rf_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),

        .id_to_ex_bus       (id_to_ex_bus       )
    );

    ysyx_2022040010_ex  exu (
        .clk                (clk                ),
        .rst                (rst                ),
        // .stall              (stall              ),
        // .stallreq_for_ex    (stallreq_for_ex    ),
        .id_to_ex_bus      (id_to_ex_bus       ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .br_bus             (br_bus             ),
        .dsram_e            (dsram_e            ),
        .dsram_we           (dsram_we           ),
        .dsram_addr         (dsram_addr         ),
        .dsram_wdata        (dsram_wdata        )   
    );

    ysyx_2022040010_mem memu    (
        .clk                (clk                ),
        .rst                (rst                ),
        // .stall              (stall              ),
        .dsram_rdata        (dsram_rdata        ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .mem_to_rf_bus      (mem_to_rf_bus      )
    );

    ysyx_2022040010_wb wbu  (
        .clk                (clk                ),
        .rst                (rst                ),
        .mem_to_wb_bus      (mem_to_wb_bus     ),
        .wb_to_rf_bus       (wb_to_rf_bus       )
    );


endmodule