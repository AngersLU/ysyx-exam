
`include "defines.v"
`timescale 1ns / 1ps

module cpu (
    // Advanced extensible Interface
    input  wire                     clk,
    input  wire                     rst,

    output wire                     icache_re_o,
    output wire [63:0]              icache_addr_o,
    input  wire [63:0]              icache_data_i,
    input  wire                     icache_refresh_i,
    
    //dcache interface
    output wire                     dcache_re_o,
    output wire                     dcache_we_o,
    output wire [7:0]               dcache_mask_o,
    output wire [63:0]              dcache_addr_o,
    output wire [63:0]              dcache_olddata_o,
    input  wire [63:0]              dcache_newdata_i,
    input  wire                     dcache_refresh_i,
    
    //uncache interface
    output wire                     uncache_re_o,
    output wire                     uncache_we_o,
    output wire [7:0]               uncache_mask_o,
    output wire [63:0]              uncache_addr_o,
    output wire [63:0]              uncache_wdata_o,
    input  wire [63:0]              uncache_rdata_i,
    input  wire                     uncache_refresh_i,

    output wire [ 1:0]              size_o
);

    wire [`IF_TO_ID_BUS]    if_to_id_bus_i;
    wire [`ID_TO_EX_BUS]    id_to_ex_bus;
    wire [`EX_TO_MEM_BUS]   ex_to_mem_bus;
    wire [`MEM_TO_WB_BUS]   mem_to_wb_bus;
    //EX_TO_IF 
    wire [`BR_TO_IF_BUS]    br_bus;

    //bypass
    wire [`BP_TO_RF_BUS]    ex_to_rf_bus;
    wire [`BP_TO_RF_BUS]    mem_to_rf_bus;
    wire [`BP_TO_RF_BUS]    wb_to_rf_bus;

    wire [`StallBus] stall;
    wire stallreq_for_load;
    wire stallreq_for_bru;
    wire stallreq_for_ex;

    wire [ 6: 0] ex_to_id_for_stallload;

    wire [63: 0] dsram_rdata_v;
    assign dsram_rdata_v = dsram_rdata;

    wire rw_over;
    wire rw_over_dcache;
    wire rw_over_icache;
    wire stallreq_for_cache;
    wire stallreq_for_icache;
    wire stallreq_for_uncache;

    assign stallreq_for_cache = stallreq_for_icache | stallreq_for_dcache | stallreq_for_uncache;
    assign rw_over = rw_over_icache | rw_over_dcache;

    wire [63:0] addr_i;
    wire cache_o, uncache_o;
    assign addr_i = isram_e ? isram_addr
                :   dsram_e ? dsram_addr   // include dcache and uncache
                :   64'b0;

    wire stallreq_for_dcache;// TODO:perfect
    wire dcache_miss;
    wire dcache_dirty;
    wire dcache_write_back;
    wire stallreq_for_dcache;


    
    wire uncache_miss;
    wire uncache_hit;

    wire [63:0] device_rdata;


    wire isram_e;
    wire [63: 0] isram_addr;
    wire [31: 0] isram_rdata_i;

    wire dsram_e;
    wire dsram_we;
    wire [63: 0] dsram_addr;
    wire [63: 0] dsram_wdata;
    wire [ 7: 0] dsram_sel;
    wire [63: 0] dsram_rdata;
    wire [ 1: 0] dsram_size;

    //difftest
    wire [63: 0] debug_wb_pc;
    wire [63: 0] debug_wb_npc;
    wire bubble;
    wire [63: 0] debug_ex_pc;
    wire debug_we;
    wire [4:0]  debug_waddr;
    wire [63:0] debug_wdata;
    wire [31:0] debug_inst;

    //three cache interface
    wire icache_miss;
    wire [63:0] dcache_olddata;

    assign icache_re_o      = icache_miss&isram_e&cache_o;
    assign icache_addr_o    = icache_miss&isram_e&cache_o ? isram_addr : 64'b0;
    
    assign dcache_re_o      = dcache_miss&cache_o;
    assign dcache_we_o      = dcache_dirty&cache_o;
    assign dcache_mask_o    = dsram_sel;
    assign dcache_addr_o    = ((dcache_miss&cache_o) | (dcache_dirty&cache_o)) ? dsram_addr : 64'b0;
    assign dcache_olddata_o = dcache_olddata;
    assign uncache_re_o     = uncache_miss&uncache_o&dsram_e&~dsram_we;
    assign uncache_we_o     = uncache_miss&uncache_o&dsram_e& dsram_we;
    assign uncache_mask_o   = dsram_sel;
    assign uncache_addr_o   = ((uncache_miss&uncache_o&dsram_e&~dsram_we) | (uncache_miss&uncache_o&dsram_e& dsram_we)) ? dsram_addr : 64'b0;
    assign uncache_wdata_o  = dsram_wdata; 
    assign size_o           = dsram_size;

    ysyx_2022040010_if ifu  ( 
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .br_bus             (br_bus             ),
        .if_to_id_bus       (if_to_id_bus_i     ),
        .isram_e            (isram_e            ),
        .isram_addr         (isram_addr         )
    );

    wire [`IF_TO_ID_BUS] if_to_id_bus_o;
    wire [31:0] isram_rdata_o;

    ysyx_2022040010_ftod ftodu  (
        .clk                (clk),
        .rst                (rst),
        .stall              (stall),
        .if_to_id_bus_i     (if_to_id_bus_i),
        .inst_i             (isram_rdata_i),
        .if_to_id_bus_o     (if_to_id_bus_o), // to idu
        .inst_o             (isram_rdata_o)
    );

    ysyx_2022040010_id idu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .stallreq_for_load  (stallreq_for_load  ),
        .ex_to_id_for_stallload(ex_to_id_for_stallload),
        .if_to_id_bus       (if_to_id_bus_o       ),
        .isram_rdata        (isram_rdata_o      ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .mem_to_rf_bus      (mem_to_rf_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),
        .id_to_ex_bus       (id_to_ex_bus       ),
        .regs_o             (regs               )
    );

    ysyx_2022040010_ex exu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .stallreq_for_ex    (stallreq_for_ex    ),
        .stallreq_for_bru   (stallreq_for_bru   ),
        .id_to_ex_bus       (id_to_ex_bus       ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .ex_to_rf_bus       (ex_to_rf_bus       ),
        .ex_to_id_for_stallload(ex_to_id_for_stallload),
        .br_bus             (br_bus             ),
        .dsram_e            (dsram_e            ),
        .dsram_we           (dsram_we           ),
        .dsram_addr         (dsram_addr         ),
        .dsram_wdata        (dsram_wdata        ),
        .dsram_sel          (dsram_sel          ), // mask
        .dsram_size         (dsram_size         ),
        .debug_ex_pc        (debug_ex_pc        )
    );

    ysyx_2022040010_mem memu(
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .dsram_rdata        (dsram_rdata_v      ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .mem_to_rf_bus      (mem_to_rf_bus      )
    );

    ysyx_2022040010_wb wbu  (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),
        .debug_wb_pc        (debug_wb_pc        ),
        .debug_wb_npc       (debug_wb_npc       ),
        .bubble             (bubble             ),
        .debug_we           (debug_we           ),
        .debug_waddr        (debug_waddr        ),
        .debug_wdata        (debug_wdata        ),
        .debug_inst         (debug_inst         )
    );

    ysyx_2022040010_stall stallu (
        .rst                (rst                ),
        .stallreq_for_ex    (stallreq_for_ex    ),
        .stallreq_for_bru   (stallreq_for_bru   ),
        .stallreq_for_load  (stallreq_for_load  ),
        .stallreq_for_cache (stallreq_for_cache ),
        .rw_over            (rw_over            ),
        .stall              (stall              ) 
    );

    ysyx_2022040010_mmu mmu (
        .rst                (rst                ),
        .addr_i             (addr_i             ),
        .cache_o            (cache_o            ),  // send to i&d-cache
        .uncache_o          (uncache_o          )   // send to uncache
    );


    wire [1:0] icahce_hit;
    wire icache_lru;
    
    ysyx_2022040010_icache_tag icache_tagu (
        .clk                (clk                ),
        .rst                (rst                ),
        .flush              (stallreq_for_bru   ), //fence.i
        // .flush              (1'b0),
        .stallreq           (stallreq_for_icache),
        .cache              (cache_o            ),
        .sram_e             (isram_e            ),
        .sram_addr          (isram_addr         ),
        .refresh            (icache_refresh_i   ),
        .miss               (icache_miss        ),
        .hit                (icahce_hit         ),
        .lru                (icache_lru         )
    );

    ysyx_2022040010_icache_data icache_datau  (
        .clk                (clk                ),
        .rst                (rst                ),
        .hit                (icahce_hit         ),
        .lru                (icache_lru         ),
        .cache              (cache_o            ),
        .sram_e             (isram_e            ),
        .sram_addr          (isram_addr         ),
        .sram_rdata_o       (isram_rdata_i      ),
        .icache_r_over_o    (rw_over_icache     ),
        .refresh            (icache_refresh_i   ),
        .cacheline_new      (icache_data_i      )
    );

    wire dcache_refresh;
    wire dcache_hit;
    wire dcache_lru;


    ysyx_2022040010_dcache_tag dcache_tagu (
        .clk                (clk                ),
        .rst                (rst                ),
        .flush              (1'b0               ), // fence.i
        .stallreq           (stallreq_for_dcache),
        .cache              (cache_o            ),
        .sram_e             (dsram_e            ),
        .sram_we            (dsram_we           ),
        .sram_addr          (dsram_addr         ),
        .refresh            (dcache_refresh     ),
        .miss               (dcache_miss        ), // miss = dcahche_re
        .dirty              (dcache_dirty       ), // dirty = dcache_we
        .write_back         (dcache_write_back  ), // mem_write -> mem_read  miss&dirty
        .hit                (dcache_hit         ),
        .lru                (dcache_lru         )
    );

    ysyx_2022040010_dcache_data dcache_datau (
        .clk                (clk                ),
        .rst                (rst                ),
        .write_back         (dcache_write_back  ),
        .hit                (dcache_hit         ),
        .lru                (dcache_lru         ),
        .cache              (cache_o           ),
        .dirty              (dcache_dirty       ),
        .sram_e             (dsram_e            ),
        .sram_we            (dsram_we           ),
        .sram_addr          (dsram_addr         ),
        .sram_wdata         (dsram_wdata        ),
        .sram_rdata         (dsram_rdata        ),
        .dcache_rw_over     (rw_over_dcache     ),
        //axi interface
        .refresh            (dcache_refresh     ),
        .cacheline_new      (dcache_newdata_i   ),
        .cacheline_old      (dcache_olddata     )
    );

    ysyx_2022040010_uncache_tag uncache_tagu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stallreq           (stallreq_for_uncache),
        .uncache            (uncache_o          ),
        .dsram_e            (dsram_e            ),
        .dsram_we           (dsram_we           ),
        .dsram_addr         (dsram_addr         ),
        .refresh            (uncache_refresh_i  ), // disting three caches
        .miss               (uncache_miss       ),
        .hit                (uncache_hit        )
    );

    ysyx_2022040010_uncache_data uncache_datau (
        .clk                (clk                ),
        .rst                (rst                ),
        .hit                (uncache_hit        ),
        .uncache            (uncache_o          ),
        .refresh            (uncache_refresh_i  ),
        .axi_rdata          (uncache_rdata_i    ), // input
        .device_rdata       (device_rdata       )  // output  TODO: uart and mtime   
    );




    // Difftest
    reg cmt_wen;
    reg [7:0] cmt_wdest;
    reg [`RegBus] cmt_wdata;
    reg [`RegBus] cmt_pc;
    reg [31:0] cmt_inst;
    reg cmt_valid;
    reg trap;
    reg [7:0] trap_code;
    reg [63:0] cycleCnt;
    reg [63:0] instrCnt;
    reg [`RegBus] regs_diff [0 : 31];
    wire [63:0] regs [0:31];
 
    wire inst_valid = ~bubble;

    always @(negedge clk) begin
        if (rst) begin
            {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst, cmt_valid, trap, trap_code, cycleCnt, instrCnt} <= 0;
        end
        else if (~trap) begin
            cmt_wen <= debug_we;
            cmt_wdest <= {3'd0, debug_waddr};
            cmt_wdata <= debug_wdata;
            cmt_pc <= debug_wb_pc;
            cmt_inst <= debug_inst;
            cmt_valid <= ~bubble;

            regs_diff <= regs;

            trap <= debug_inst[6:0] == 7'h6b;//110_1011
            trap_code <= regs[10][7:0];
            cycleCnt <= cycleCnt + 1;
            instrCnt <= instrCnt + inst_valid;
        end
    end

    DifftestInstrCommit DifftestInstrCommit(
        .clock              (clk),
        .coreid             (0),
        .index              (0),
        .valid              (cmt_valid),
        .pc                 (cmt_pc),
        .instr              (cmt_inst),
        .skip               (0),
        .isRVC              (0),
        .scFailed           (0),
        .wen                (cmt_wen),
        .wdest              (cmt_wdest),
        .wdata              (cmt_wdata)
    );


    DifftestArchIntRegState DifftestArchIntRegState (
        .clock              (clk),
        .coreid             (0),
        .gpr_0              (regs_diff[0]),
        .gpr_1              (regs_diff[1]),
        .gpr_2              (regs_diff[2]),
        .gpr_3              (regs_diff[3]),
        .gpr_4              (regs_diff[4]),
        .gpr_5              (regs_diff[5]),
        .gpr_6              (regs_diff[6]),
        .gpr_7              (regs_diff[7]),
        .gpr_8              (regs_diff[8]),
        .gpr_9              (regs_diff[9]),
        .gpr_10             (regs_diff[10]),
        .gpr_11             (regs_diff[11]),
        .gpr_12             (regs_diff[12]),
        .gpr_13             (regs_diff[13]),
        .gpr_14             (regs_diff[14]),
        .gpr_15             (regs_diff[15]),
        .gpr_16             (regs_diff[16]),
        .gpr_17             (regs_diff[17]),
        .gpr_18             (regs_diff[18]),
        .gpr_19             (regs_diff[19]),
        .gpr_20             (regs_diff[20]),
        .gpr_21             (regs_diff[21]),
        .gpr_22             (regs_diff[22]),
        .gpr_23             (regs_diff[23]),
        .gpr_24             (regs_diff[24]),
        .gpr_25             (regs_diff[25]),
        .gpr_26             (regs_diff[26]),
        .gpr_27             (regs_diff[27]),
        .gpr_28             (regs_diff[28]),
        .gpr_29             (regs_diff[29]),
        .gpr_30             (regs_diff[30]),
        .gpr_31             (regs_diff[31])
    );

    DifftestTrapEvent DifftestTrapEvent(
        .clock              (clk),
        .coreid             (0),
        .valid              (trap),
        .code               (trap_code),
        .pc                 (cmt_pc),
        .cycleCnt           (cycleCnt),
        .instrCnt           (instrCnt)
    );

    DifftestCSRState DifftestCSRState(
        .clock              (clk),
        .coreid             (0),
        .priviledgeMode     (`RISCV_PRIV_MODE_M),
        .mstatus            (0),
        .sstatus            (0),
        .mepc               (0),
        .sepc               (0),
        .mtval              (0),
        .stval              (0),
        .mtvec              (0),
        .stvec              (0),
        .mcause             (0),
        .scause             (0),
        .satp               (0),
        .mip                (0),
        .mie                (0),
        .mscratch           (0),
        .sscratch           (0),
        .mideleg            (0),
        .medeleg            (0)
    );
    
endmodule

