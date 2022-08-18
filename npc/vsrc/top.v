

`include "defines.v"
`timescale 1ns/1ns

module top (
    input  wire                             clk,
    input  wire                             rst,

    output wire [ 3:0]                      axi_aw_id_o,
    output wire [31:0]                      axi_aw_addr_o, 
    output wire [ 7:0]                      axi_aw_len_o, 
    output wire [ 2:0]                      axi_aw_size_o,  
    output wire [ 1:0]                      axi_aw_burst_o, 
    output wire                             axi_aw_lock_o,
    output wire [ 3:0]                      axi_aw_cache_o,
    output wire [ 2:0]                      axi_aw_prot_o,    
    output wire [ 3:0]                      axi_aw_qos_o,
    output wire [ 3:0]                      axi_aw_region_o,                   
    output wire                             axi_aw_valid_o,
    input  wire                             axi_aw_ready_i, 
    
    output wire [63:0]                      axi_w_data_o,
    output wire [ 7:0]                      axi_w_strb_o,
    output wire                             axi_w_last_o,
    output wire                             axi_w_valid_o,  
    input  wire                             axi_w_ready_i,                

    input  wire [ 3:0]                      axi_b_id_i,
    input  wire [ 1:0]                      axi_b_resp_i,                 
    input  wire                             axi_b_valid_i,
    output wire                             axi_b_ready_o, 

    output wire [ 3:0]                      axi_ar_id_o,
    output wire [31:0]                      axi_ar_addr_o,
    output wire [ 7:0]                      axi_ar_len_o,
    output wire [ 2:0]                      axi_ar_size_o,
    output wire [ 1:0]                      axi_ar_burst_o,
    output wire                             axi_ar_lock_o,  
    output wire [ 3:0]                      axi_ar_cache_o,    
    output wire [ 2:0]                      axi_ar_prot_o,
    output wire [ 3:0]                      axi_ar_qos_o,
    output wire [ 3:0]                      axi_ar_region_o,
    output wire                             axi_ar_valid_o, 
    input  wire                             axi_ar_ready_i,

    input  wire [ 3:0]                      axi_r_id_i,    // from icache&dcache or isram or dsram//
    input  wire [63:0]                      axi_r_data_i,  
    input  wire [ 1:0]                      axi_r_resp_i,  
    input  wire                             axi_r_last_i,   
    input  wire                             axi_r_valid_i,      
    output wire                             axi_r_ready_o,

    output wire [63:0]                      debug_wb_pc,
    output wire [63:0]                      debug_wb_npc,
    output wire                             bubble,
    output wire [63:0]                      debug_ex_pc  
);



    ysyx_2022040010_fsl fslu(        
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
        .axi_r_ready_o      (axi_r_ready_o      ),
        //difftest
        .debug_wb_pc        (debug_wb_pc        ),
        .debug_wb_npc       (debug_wb__npc      ),
        .bubble             (bubble             ),
        .debug_ex_pc        (debug_ex_pc        ),
    );


endmodule

    // import "DPI-C" function void mem_read (
    //     input longint raddr, output longint rdata );
    // import "DPI-C" function void mem_write (
    //     input longint waddr, input longint wdata, input byte wmask); 

    // wire [63: 0] dsram_addr;
    // wire [63: 0] dsram_wdata;
    // wire [ 7: 0] dsram_sel;
    // wire [63: 0] dsram_rdata;
    // wire dsram_e;
    // wire dsram_we;
    // always @(posedge clk) begin
    //     if(dsram_e & dsram_we ) begin
    //         mem_write(dsram_addr, dsram_wdata, dsram_sel);
    //     end
    //     else if(dsram_e & ~dsram_we) begin
    //         mem_read(dsram_addr, dsram_rdata);
    //     end
    // end

    // ysyx_2022040010_fsl fslu (
    //     .clk            (clk         ),
    //     .rst            (rst         ),
    //     .isram_e        (isram_e     ),
    //     .isram_addr     (isram_addr  ),
    //     .isram_rdata    (isram_rdata ),
    //     .dsram_e        (dsram_e     ),
    //     .dsram_we       (dsram_we    ),
    //     .dsram_addr     (dsram_addr  ),
    //     .dsram_wdata    (dsram_wdata ),
	// 	    .dsram_sel		(dsram_sel	 ),
    //     .dsram_rdata    (dsram_rdata ),
    //     .debug_wb_pc    (debug_wb_pc ),
    //     .debug_wb_npc   (debug_wb_npc),
    //     .bubble         (bubble      ),
    //     .debug_ex_pc    (debug_ex_pc )
    // );
