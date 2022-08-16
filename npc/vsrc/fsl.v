
`include "defines.v"
`timescale 1ns/1ns

//five stage assembly line
// module ysyx_2022040010_fsl (
//     input wire clk,
//     input wire rst,
//     // input wire [5:0] int,

//     output wire isram_e,
//     output wire [63: 0] isram_addr,
//     input  wire [31: 0] isram_rdata,

//     output wire dsram_e,
//     output wire dsram_we,
//     output wire [63: 0] dsram_addr,
//     output wire [63: 0] dsram_wdata,
//     output wire [ 7: 0] dsram_sel,
//     input  wire [63: 0] dsram_rdata,

//     output wire [63: 0] debug_wb_pc,
//     output wire [63: 0] debug_wb_npc,
//     output wire bubble,
//     output wire [63: 0] debug_ex_pc

// );

module ysyx_2022040010_fsl (
    // Advanced extensible Interface
    output reg  [AXI_ID_WIDTH-1:0]          axi_aw_id_o,
    output reg  [AXI_ADDR_WIDTH-1:0]        axi_aw_addr_o, 
    output reg  [7:0]                       axi_aw_len_o, 
    output reg  [2:0]                       axi_aw_size_o,  
    output reg  [1:0]                       axi_aw_burst_o, 
    output reg                              axi_aw_lock_o,
    output reg  [3:0]                       axi_aw_cache_o,
    output reg  [2:0]                       axi_aw_prot_o,    
    output reg  [3:0]                       axi_aw_qos_o,
    output reg  [3:0]                       axi_aw_region_o,                   
    output reg                              axi_aw_valid_o,
    input  wire                             axi_aw_ready_i, 
    
    output reg  [AXI_DATA_WIDTH-1:0]        axi_w_data_o,
    output reg  [AXI_DATA_WIDTH/8-1:0]      axi_w_strb_o,
    output reg                              axi_w_last_o,
    output reg                              axi_w_valid_o,  
    input  wire                             axi_w_ready_i,                

    input  wire [AXI_ID_WIDTH-1:0]          axi_b_id_i,
    input  wire [1:0]                       axi_b_resp_i,                 
    input  wire                             axi_b_valid_i,
    output reg                              axi_b_ready_o, 

    output reg  [AXI_ID_WIDTH-1:0]          axi_ar_id_o,
    output reg  [AXI_ADDR_WIDTH-1:0]        axi_ar_addr_o,
    output reg  [7:0]                       axi_ar_len_o,
    output reg  [2:0]                       axi_ar_size_o,
    output reg  [1:0]                       axi_ar_burst_o,
    output reg                              axi_ar_lock_o,  
    output reg  [3:0]                       axi_ar_cache_o,    
    output reg  [2:0]                       axi_ar_prot_o,
    output reg  [3:0]                       axi_ar_qos_o,
    output reg  [3:0]                       axi_ar_region_o,
    output reg                              axi_ar_valid_o, 
    input  wire                             axi_ar_ready_i,

    input  wire [AXI_ID_WIDTH-1:0]          axi_r_id_i,    // from icache&dcache or isram or dsram//
    input  wire [AXI_DATA_WIDTH-1:0]        axi_r_data_i,  
    input  wire [1:0]                       axi_r_resp_i,  
    input  wire                             axi_r_last_i,   
    input  wire                             axi_r_valid_i,      
    output reg                              axi_r_ready_o,

    output wire [63: 0]                     debug_wb_pc,
    output wire [63: 0]                     debug_wb_npc,
    output wire                             bubble,
    output wire [63: 0]                     debug_ex_pc                    

);
    
endmodule

    wire [`IF_TO_ID_BUS]    if_to_id_bus;
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


    ysyx_2022040010_if ifu  ( 
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .br_bus             (br_bus             ),
        .if_to_id_bus       (if_to_id_bus       ),
        .isram_e            (isram_e            ),
        .isram_addr         (isram_addr         )
    );

    ysyx_2022040010_id  idu (
        .clk                (clk                ),
        .rst                (rst                ),
        .stall              (stall              ),
        .stallreq_for_load  (stallreq_for_load  ),
        .ex_to_id_for_stallload(ex_to_id_for_stallload),
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
        .dsram_sel          (dsram_sel          ),
        .debug_ex_pc        (debug_ex_pc        )
    );

    ysyx_2022040010_mem memu(
        .clk                (clk                ),
        .rst                (rst                ),
        .dsram_rdata        (dsram_rdata_v      ),
        .ex_to_mem_bus      (ex_to_mem_bus      ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .mem_to_rf_bus      (mem_to_rf_bus      )
    );

    ysyx_2022040010_wb wbu  (
        .clk                (clk                ),
        .rst                (rst                ),
        .mem_to_wb_bus      (mem_to_wb_bus      ),
        .wb_to_rf_bus       (wb_to_rf_bus       ),
        .debug_wb_pc        (debug_wb_pc        ),
        .debug_wb_npc       (debug_wb_npc       ),
        .bubble             (bubble             )
    );

    ysyx_2022040010_stall stallu (
        .rst                (rst                ),
        .stallreq_for_ex    (stallreq_for_ex    ),
        .stallreq_for_bru   (stallreq_for_bru   ),
        .stallreq_for_load  (stallreq_for_load  ),
        .stall              (stall              ) 
    );

    ysyx_2022040010_mmu mmu (
        .addr_i             (addr_i             ),
        .cache_o            (cache_o            ),  // send to i&d-cache
        .uncache_o          (uncache_o          )   // send to uncache
    );

    ysyx_2022040010_arbit arbitu (
        .clk                (clk                ),
        .rst                (rst                ),
        //icache interface
        .icache_re_i        (icache_re          ),   //icache_miss&isram_e
        .icache_addr_i      (isram_addr         ),
        .icache_data_o      (icache_newdata     ),   //send to icache
        .icache_refresh_o   (icache_refresh     ),   //send to icache
        //dcache interface
        .dcache_re_i        (dcache_re          ), //dcache_miss&dsram_e&~dsram_we  dirty
        .dcache_we_i        (dcache_we          ), //dcache_miss&dsram_e&7dsram_we
        .dcache_mask_i      (dcache_mask        ), //dsram_sel
        .dcache_addr_i      (dcache_addr        ), //dsram_addr
        .dcache_olddata_i   (dcache_olddata     ), //send to axi4
        .dcache_newdata_o   (dcache_newdata     ),   //send to dcache
        .dcache_refresh_o   (dcache_refresh     ),   //send to dcache
        //uncache interface
        .uncache_re_i       (uncache_re         ), //uncache_miss&axi_e&~axi_we
        .uncache_we_i       (uncache_we         ), //uncache_miss&axi_e_axi_we
        .uncache_mask_i     (uncache_mask       ), //axi_wsel
        .uncache_addr_i     (uncache_addr       ), //axi_addr
        .uncache_wirtedata_i(uncache_writedata  ), //axi_wdata
        .uncache_readdata_o (uncache_rdata      ),   //send to uncache
        .uncache_refresh_o  (uncache_refresh    ),   //send to uncache
        //axi read interface
        .ar_e_o             (axi_ar_e           ), //r_e_i
        .ar_id_o            (axi_ar_id          ), //r_id_i
        .ar_addr_o          (axi_ar_addr        ), //r_addr_i
        .r_data_i           (axi_r_data         ), //r_data_o
        .r_id_i             (axi_r_id           ), // icache / dcache / uncache
        .r_refresh_i        (axi_r_refresh      ), //r_last
        //axi write interface
        .aw_e_o             (axi_aw_e           ), //w_e_i
        .aw_addr_o          (axi_aw_addr        ), //w_addr_i
        .w_data_o           (axi_w_data         ), //w_data_i
        .w_mask_i           (axi_w_mask         )  //w_mask_i
    ); 

    ysyx_2022040010_icache_tag icache_tagu (
        .clk                (clk                ),
        .rst                (rst                ),
        .cache              (cache_o            ),
        .sram_e             (isram_e            ),
        .sram_addr          (isram_addr         ),
        .refresh            (icache_refresh     ),
        .miss               (icache_miss        ),
        .hit                (icahce_hit         ),
        .lru                (icache_lru         ),
    );

    ysyx_2022040010_icache_data icache_datau  (
        .clk                (clk                ),
        .rst                (rst                ),
        .hit                (icahce_hit         ),
        .lru                (icache_lru         ),
        .cache              (cache_o            ),
        .sram_e             (isram_e            ),
        .sram_addr          (isram_addr         ),
        .sram_rdata         (isram_rdata        ),
        .refresh            (icache_refresh     ),
        .cacheline_new      (icache_newdata     )
    );

    ysyx_2022040010_dcache_tag dcache_tagu (
        .clk                (clk                ),
        .rst                (rst                ),
        .flush              (), //fence.i   //TODO: add inst
        .stallreq           (stallreq_for_dcache),
        .cache              (cache_o            ),
        .sram_e             (dsram_e            ),
        .sram_we            (dsram_we           ),
        .sram_addr          (dsram_addr         ),
        .refresh            (dcache_refresh     ),
        .miss               (dcache_miss        ), // miss = dcahche_re
        .dirty              (dcache_dirty       ), // dirty = dcache_we
        .write_back         (dcache_write_back  ), // mem_wirte -> mem_read  miss&dirty
        .hit                (dcache_hit         ),
        .lru                (dcache_lru         )
    );

    ysyx_2022040010_dcache_data dcache_datau (
        .clk                (clk                ),
        .rst                (rst                ),
        .write_back         (dcache_write_back  ),
        .hit                (dcache_hit         ),
        .lru                (dcache_lru         ),
        .cache              (dcache_o           ),
        .dirty              (dcache_dirty       ),
        .sram_e             (dsram_e            ),
        .sram_we            (dsram_we           ),
        .sram_addr          (dsram_addr         ),
        .sram_wdata         (dsram_wdata        ),
        .sram_rdata         (dsram_rdata        ),
        //axi interface
        .refresh            (dcache_refresh     ),
        .cacheline_new      (dcache_newdata     ),
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
        .dsram_wdata        (dsram_wdata        ),
        .dsram_wsel         (dsram_sel          ),
        .refresh            (uncache_refresh    ), // disting three caches
        // .axi_e              (axi_e              ),
        // .axi_we             (axi_we             ),
        // .axi_wsel           (axi_wsel           ),
        .miss               (uncache_miss       ),
        .hit                (uncache_hit        )
    );

    ysyx_2022040010_uncache_data uncache_datau (
        .clk                (clk                ),
        .rst                (rst                ),
        .hit                (uncache_hit        ),
        .uncache            (uncache_o          ),
        .refresh            (uncache_refresh    ),
        .axi_rdata          (uncache_rdata      ),
        .device_rdata       (device_rdata       )   
    );

    ysyx_2022040010_axi4 axi4u (
        .clk                (clk                ),
        .rst                (rst                ),
        // arbit read interface
        .ar_e_i             (axi_ar_e           ),
        .ar_id_i            (axi_ar_id          ),
        .ar_addr_i          (axi_ar_addr        ),
        .r_data_o           (axi_r_data         ),
        .r_id_o             (axi_r_id           ),
        .r_refresh_o        (axi_r_refresh      ),
        // arbit write interface
        .aw_e_i             (axi_aw_e           ),
        .aw_addr_i          (axi_aw_addr        ),
        .w_data_i           (axi_w_data         ),
        .w_mask_i           (axi_w_mask         ),
        // axi aw interface
        .axi_aw_id_o        (axi_aw_id_o        ),
        .axi_aw_addr_o      (axi_aw_addr_o      ),
        .axi_aw_len_o       (axi_aw_len_o       ),
        .axi_aw_size_o      (axi_aw_size_o      ),
        .axi_aw_burst_o     (axi_aw_burst_o     ),
        .axi_aw_lock_o      (axi_aw_lock_o      ),
        .axi_aw_cache_o     (axi_aw_cache_o     ),
        .axi_aw_prot_o      (axi_aw_prot_o      ),
        .axi_aw_qos_o       (axi_aw_qos_o       ),
        .axi_aw_region_o    (axi_aw_region_o    ),
        .axi_aw_valid_o     (axi_aw_valid_o     ),
        .axi_aw_ready_i     (axi_aw_ready_i     ),
        // axi w interface
        .axi_w_data_o       (axi_w_data_e       ),
        .axi_w_strb_o       (axi_w_strb_o       ),
        .axi_w_last_o       (axi_w_last_o       ),
        .axi_w_valid_o      (axi_w_valid_o      ),
        .axi_w_ready_i      (axi_w_ready_i      ),
        // axi b interface
        .axi_b_id_i         (axi_b_id_i         ),
        .axi_b_resp_i       (axi_b_resp_i       ),
        .axi_b_valid_i      (axi_b_valid_i      ),
        .axi_b_ready_o      (axi_b_ready_o      ),
        // axi ar interface
        .axi_ar_id_o        (axi_ar_id_o        ),
        .axi_ar_addr_o      (axi_ar_addr_o      ),
        .axi_ar_len_o       (axi_ar_addr_o      ),
        .axi_ar_size_o      (axi_ar_size_o      ),
        .axi_ar_burst_o     (axi_ar_burst_o     ),
        .axi_ar_lock_o      (axi_ar_lock_o      ),
        .axi_ar_cache_o     (axi_ar_cache_o     ),
        .axi_ar_prot_o      (axi_ar_prot_o      ),
        .axi_ar_qos_o       (axi_ar_qos_o       ),
        .axi_ar_region_o    (axi_ar_region_o    ),
        .axi_ar_valid_o     (axi_ar_valid_o     ),
        .axi_ar_ready_i     (axi_ar_ready_i     ),
        // axi r interface
        .axi_r_id_i         (axi_r_id_i         ),
        .axi_r_data_i       (axi_r_data_i       ),
        .axi_r_resp_i       (axi_r_resp_i       ),
        .axi_r_last_i       (axi_r_last_i       ),
        .axi_r_valid_i      (axi_r_valid_i      ),
        .axi_r_ready_o      (axi_r_ready_o      )
    );




endmodule

