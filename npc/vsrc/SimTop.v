
`include "defines.v"
`timescale 1ns / 1ps
`define AXI_TOP_INTERFACE(name) io_memAXI_0_``name

module SimTop(
    input                               clock,
    input                               reset,

    input  [63:0]                       io_logCtrl_log_begin,
    input  [63:0]                       io_logCtrl_log_end,
    input  [63:0]                       io_logCtrl_log_level,
    input                               io_perfInfo_clean,
    input                               io_perfInfo_dump,

    output                              io_uart_out_valid,
    output [7:0]                        io_uart_out_ch,
    output                              io_uart_in_valid,
    input  [7:0]                        io_uart_in_ch,

    input                               `AXI_TOP_INTERFACE(aw_ready),
    output                              `AXI_TOP_INTERFACE(aw_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(aw_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(aw_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(aw_bits_burst),
    output                              `AXI_TOP_INTERFACE(aw_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_qos),
    
    input                               `AXI_TOP_INTERFACE(w_ready),
    output                              `AXI_TOP_INTERFACE(w_valid),
    output [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(w_bits_data)         [3:0],
    output [`AXI_DATA_WIDTH/8-1:0]      `AXI_TOP_INTERFACE(w_bits_strb),
    output                              `AXI_TOP_INTERFACE(w_bits_last),
    
    output                              `AXI_TOP_INTERFACE(b_ready),
    input                               `AXI_TOP_INTERFACE(b_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(b_bits_resp),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(b_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(b_bits_user),

    input                               `AXI_TOP_INTERFACE(ar_ready),
    output                              `AXI_TOP_INTERFACE(ar_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(ar_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(ar_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(ar_bits_burst),
    output                              `AXI_TOP_INTERFACE(ar_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_qos),
    
    output                              `AXI_TOP_INTERFACE(r_ready),
    input                               `AXI_TOP_INTERFACE(r_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(r_bits_resp),
    input  [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_data)          [3:0],
    input                               `AXI_TOP_INTERFACE(r_bits_last),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(r_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_user)
);


    wire aw_ready;
    wire aw_valid;
    wire [`AXI_ADDR_WIDTH-1:0] aw_addr;
    wire [2:0] aw_prot;
    wire [`AXI_ID_WIDTH-1:0] aw_id;
    wire [`AXI_USER_WIDTH-1:0] aw_user;
    wire [7:0] aw_len;
    wire [2:0] aw_size;
    wire [1:0] aw_burst;
    wire aw_lock;
    wire [3:0] aw_cache;
    wire [3:0] aw_qos;
    wire [3:0] aw_region;

    wire w_ready;
    wire w_valid;
    wire [`AXI_DATA_WIDTH-1:0] w_data;
    wire [`AXI_DATA_WIDTH/8-1:0] w_strb;
    wire w_last;
    wire [`AXI_USER_WIDTH-1:0] w_user;
    
    wire b_ready;
    wire b_valid;
    wire [1:0] b_resp;
    wire [`AXI_ID_WIDTH-1:0] b_id;
    wire [`AXI_USER_WIDTH-1:0] b_user;

    wire ar_ready;
    wire ar_valid;
    wire [`AXI_ADDR_WIDTH-1:0] ar_addr;
    wire [2:0] ar_prot;
    wire [`AXI_ID_WIDTH-1:0] ar_id;
    wire [`AXI_USER_WIDTH-1:0] ar_user;
    wire [7:0] ar_len;
    wire [2:0] ar_size;
    wire [1:0] ar_burst;
    wire ar_lock;
    wire [3:0] ar_cache;
    wire [3:0] ar_qos;
    wire [3:0] ar_region;
    
    wire r_ready;
    wire r_valid;
    wire [1:0] r_resp;
    wire [`AXI_DATA_WIDTH-1:0] r_data;
    wire r_last;
    wire [`AXI_ID_WIDTH-1:0] r_id;
    wire [`AXI_USER_WIDTH-1:0] r_user;



    assign ar_ready                                 = `AXI_TOP_INTERFACE(ar_ready);
    assign `AXI_TOP_INTERFACE(ar_valid)             = ar_valid;
    assign `AXI_TOP_INTERFACE(ar_bits_addr)         = ar_addr;
    assign `AXI_TOP_INTERFACE(ar_bits_prot)         = ar_prot;
    assign `AXI_TOP_INTERFACE(ar_bits_id)           = ar_id;
    assign `AXI_TOP_INTERFACE(ar_bits_user)         = ar_user;
    assign `AXI_TOP_INTERFACE(ar_bits_len)          = ar_len;
    assign `AXI_TOP_INTERFACE(ar_bits_size)         = ar_size;
    assign `AXI_TOP_INTERFACE(ar_bits_burst)        = ar_burst;
    assign `AXI_TOP_INTERFACE(ar_bits_lock)         = ar_lock;
    assign `AXI_TOP_INTERFACE(ar_bits_cache)        = ar_cache;
    assign `AXI_TOP_INTERFACE(ar_bits_qos)          = ar_qos;
    
    assign `AXI_TOP_INTERFACE(r_ready)              = r_ready;
    assign r_valid                                  = `AXI_TOP_INTERFACE(r_valid);
    assign r_resp                                   = `AXI_TOP_INTERFACE(r_bits_resp);
    assign r_data                                   = `AXI_TOP_INTERFACE(r_bits_data)[0];
    assign r_last                                   = `AXI_TOP_INTERFACE(r_bits_last);
    assign r_id                                     = `AXI_TOP_INTERFACE(r_bits_id);
    assign r_user                                   = `AXI_TOP_INTERFACE(r_bits_user);




    assign aw_ready                                 = `AXI_TOP_INTERFACE(aw_ready);
    assign `AXI_TOP_INTERFACE(aw_valid)             = aw_valid; 
    assign `AXI_TOP_INTERFACE(aw_bits_addr)         = aw_addr;
    assign `AXI_TOP_INTERFACE(aw_bits_prot)         = aw_prot;
    assign `AXI_TOP_INTERFACE(aw_bits_id)           = aw_id;
    assign `AXI_TOP_INTERFACE(aw_bits_user)         = aw_user;
    assign `AXI_TOP_INTERFACE(aw_bits_len)          = aw_len;
    assign `AXI_TOP_INTERFACE(aw_bits_size)         = aw_size;
    assign `AXI_TOP_INTERFACE(aw_bits_burst)        = aw_burst;
    assign `AXI_TOP_INTERFACE(aw_bits_lock)         = aw_lock;
    assign `AXI_TOP_INTERFACE(aw_bits_cache)        = aw_cache;
    assign `AXI_TOP_INTERFACE(aw_bits_qos)          = aw_qos;

    assign w_ready                                  = `AXI_TOP_INTERFACE(w_ready);
    assign `AXI_TOP_INTERFACE(w_valid)              = w_valid;
    assign `AXI_TOP_INTERFACE(w_bits_data)[0]       = w_data;
    assign `AXI_TOP_INTERFACE(w_bits_strb)          = w_strb;
    assign `AXI_TOP_INTERFACE(w_bits_last)          = w_last;
    
    assign `AXI_TOP_INTERFACE(b_ready)              = b_ready;
    assign b_valid                                  = `AXI_TOP_INTERFACE(b_valid);
    assign b_resp                                   = `AXI_TOP_INTERFACE(b_bits_resp);
    assign b_id                                     = `AXI_TOP_INTERFACE(b_bits_id);
    assign b_user                                   = `AXI_TOP_INTERFACE(b_bits_user);

    wire rw_valid;
    wire rw_ready;
    wire rw_req; // 0-read 1-write
    wire [63:0] data_read;
    wire [63:0] data_write;
    wire [ 1:0] rw_resp_o; // useless
    wire [ 3:0] rw_id_i;
    wire [ 3:0] rw_id_o;
    wire [ 7:0] w_mask;
    wire [63:0] rw_addr;

    axi_rw axi_rw_u (
        .clock                          (clock),
        .reset                          (reset),

        .rw_valid_i                     (rw_valid),
        .rw_ready_o                     (rw_ready), // over signal
        .rw_req_i                       (rw_req),
        .data_read_o                    (data_read),
        .data_write_i                   (data_write),
        .rw_addr_i                      (rw_addr),
        .rw_size_i                      (rw_size_o),
        .rw_resp_o                      (rw_resp_o),// whether it ends normally
        .rw_id_i                        (rw_id_i),
        .rw_id_o                        (rw_id_o),
        .w_mask_i                       (w_mask),

        .axi_aw_ready_i                 (aw_ready),
        .axi_aw_valid_o                 (aw_valid),
        .axi_aw_addr_o                  (aw_addr),
        .axi_aw_prot_o                  (aw_prot),
        .axi_aw_id_o                    (aw_id),
        .axi_aw_user_o                  (aw_user),
        .axi_aw_len_o                   (aw_len),
        .axi_aw_size_o                  (aw_size),
        .axi_aw_burst_o                 (aw_burst),
        .axi_aw_lock_o                  (aw_lock),
        .axi_aw_cache_o                 (aw_cache),
        .axi_aw_qos_o                   (aw_qos),
        .axi_aw_region_o                (aw_region),

        .axi_w_ready_i                  (w_ready),
        .axi_w_valid_o                  (w_valid),
        .axi_w_data_o                   (w_data),
        .axi_w_strb_o                   (w_strb),
        .axi_w_last_o                   (w_last),
        .axi_w_user_o                   (w_user),
        
        .axi_b_ready_o                  (b_ready),
        .axi_b_valid_i                  (b_valid),
        .axi_b_resp_i                   (b_resp),
        .axi_b_id_i                     (b_id),
        .axi_b_user_i                   (b_user),

        .axi_ar_ready_i                 (ar_ready),
        .axi_ar_valid_o                 (ar_valid),
        .axi_ar_addr_o                  (ar_addr),
        .axi_ar_prot_o                  (ar_prot),
        .axi_ar_id_o                    (ar_id),
        .axi_ar_user_o                  (ar_user),
        .axi_ar_len_o                   (ar_len),
        .axi_ar_size_o                  (ar_size),
        .axi_ar_burst_o                 (ar_burst),
        .axi_ar_lock_o                  (ar_lock),
        .axi_ar_cache_o                 (ar_cache),
        .axi_ar_qos_o                   (ar_qos),
        .axi_ar_region_o                (ar_region),
        
        .axi_r_ready_o                  (r_ready),
        .axi_r_valid_i                  (r_valid),
        .axi_r_resp_i                   (r_resp),
        .axi_r_data_i                   (r_data),
        .axi_r_last_i                   (r_last),
        .axi_r_id_i                     (r_id),
        .axi_r_user_i                   (r_user)
    );


    wire        icache_re;
    wire [63:0] icache_addr;
    wire [63:0] icache_newdata;
    wire        icache_refresh;
    wire        dcache_re;
    wire        dcache_we;
    wire [7: 0] dcache_mask;
    wire [31:0] dcache_addr;
    wire [63:0] dcache_olddata;
    wire [63:0] dcache_newdata;
    wire        dcache_refresh;
    wire        uncache_re;
    wire        uncache_we;
    wire [ 7:0] uncache_mask;
    wire [31:0] uncache_addr;
    wire [63:0] uncache_wdata;
    wire [63:0] uncache_rdata;
    wire        uncache_refresh;
    wire [ 1:0] rw_size_i;
    wire [ 1:0] rw_size_o;

    arbit arbit_u (
        .clk                (clock              ),
        .rst                (reset              ),
        //icache interface
        .icache_re_i        (icache_re          ),   //icache_miss&isram_e
        .icache_addr_i      (icache_addr        ),
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
        .uncache_wdata_i    (uncache_wdata      ), //axi_wdata
        .uncache_rdata_o    (uncache_rdata      ),   //send to uncache
        .uncache_refresh_o  (uncache_refresh    ),   //send to uncache
        //rw interface
        .rw_size_i          (rw_size_i          ),

        .rw_valid_o         (rw_valid           ),
        .rw_ready_i         (rw_ready           ),
        .rw_req_o           (rw_req             ),
        .data_read_i        (data_read          ),
        .data_write_o       (data_write         ),
        .rw_addr_o          (rw_addr            ),
        .rw_size_o          (rw_size_o          ),
        .rw_id_o            (rw_id_i            ),
        .rw_id_i            (rw_id_o            ),
        .w_mask_o           (w_mask             )
    ); 

    cpu cpu_u (
        .clk                (clock              ),
        .rst                (reset              ),
        //icache interface
        .icache_re_o        (icache_re          ),   //icache_miss&isram_e
        .icache_addr_o      (icache_addr        ),
        .icache_data_i      (icache_newdata     ),   //send to icache
        .icache_refresh_i   (icache_refresh     ),   //send to icache
        //dcache interface
        .dcache_re_o        (dcache_re          ), //dcache_miss&dsram_e&~dsram_we  dirty
        .dcache_we_o        (dcache_we          ), //dcache_miss&dsram_e&7dsram_we
        .dcache_mask_o      (dcache_mask        ), //dsram_sel
        .dcache_addr_o      (dcache_addr        ), //dsram_addr
        .dcache_olddata_o   (dcache_olddata     ), //send to axi4
        .dcache_newdata_i   (dcache_newdata     ),   //send to dcache
        .dcache_refresh_i   (dcache_refresh     ),   //send to dcache
        //uncache interface
        .uncache_re_o       (uncache_re         ), //uncache_miss&axi_e&~axi_we
        .uncache_we_o       (uncache_we         ), //uncache_miss&axi_e_axi_we
        .uncache_mask_o     (uncache_mask       ), //axi_wsel
        .uncache_addr_o     (uncache_addr       ), //axi_addr
        .uncache_wdata_o    (uncache_wdata      ), //axi_wdata
        .uncache_rdata_i    (uncache_rdata      ),   //send to uncache
        .uncache_refresh_i  (uncache_refresh    ),   //send to uncache
        
        .size_o             (rw_size_i          )
    );


endmodule