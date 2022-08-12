
`include "defines.v"
`timescale 1ns/1ns

module axi_rw # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
)(
    input  wire                             clk,
    input  wire                             rst,
    // don't have cache no dirty and no miss
    input  wire                             r_e_i, 
    input  wire                             r_id_i,             //if 0 ex 1
    input  wire [RW_ADDR_WIDTH-1:0]         r_addr_i,           //IF&EXE输入信号
    output reg  [RW_DATA_WIDTH-1:0]         r_data_o,           //IF&EXE输入信号

	input  wire                             w_e_i,              //MEM输入信号
    input  wire [RW_ADDR_WIDTH-1:0]         w_addr_i,           //MEM输入信号
    input  wire [RW_DATA_WIDTH-1:0]         w_data_i,           //MEM输入信号
    input  wire [7:0]                       w_mask_i,           //MEM输入信号
    output wire                             w_over_o;


    // Advanced extensible Interface
    output reg [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output reg [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o, 
    output reg [7:0]                        axi_aw_len_o, 
    output reg [2:0]                        axi_aw_size_o,  
    output reg [1:0]                        axi_aw_burst_o, 
    // output reg                              axi_aw_lock_o,
    // output reg [3:0]                        axi_aw_cache_o,
    // output reg [2:0]                        axi_aw_prot_o,    
    // output reg [3:0]                        axi_aw_qos_o,
    // output reg [3:0]                        axi_aw_region_o,                   
    output reg                              axi_aw_valid_o,
    input  wire                             axi_aw_ready_i, 
    
    output reg [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output reg [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output reg                              axi_w_last_o,
    output reg                              axi_w_valid_o,  
    input  wire                             axi_w_ready_i,                

    input  wire [AXI_ID_WIDTH-1:0]          axi_b_id_i,
    input  wire [1:0]                       axi_b_resp_i,                 
    input  wire                             axi_b_valid_i,
    output reg                              axi_b_ready_o, 

    output reg [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output reg [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    // output reg [7:0]                        axi_ar_len_o,
    // output reg [2:0]                        axi_ar_size_o,
    // output reg [1:0]                        axi_ar_burst_o,
    // output reg                              axi_ar_lock_o,  
    // output reg [3:0]                        axi_ar_cache_o,    
    // output reg [2:0]                        axi_ar_prot_o,
    // output reg [3:0]                        axi_ar_qos_o,
    // output reg [3:0]                        axi_ar_region_o,
    output reg                              axi_ar_valid_o, 
    input  wire                             axi_ar_ready_i,

    input  wire  [AXI_ID_WIDTH-1:0]         axi_r_id_i,    // from icache&dcache or isram or dsram//
    input  wire  [AXI_DATA_WIDTH-1:0]       axi_r_data_i,  
    // input  wire  [1:0]                      axi_r_resp_i,  
    // input  wire                             axi_r_last_i,   
    input  wire                             axi_r_valid_i,      
    output reg                              axi_r_ready_o
);

    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);  // 3->3'b011
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [7:0] axi_len      =  8'b0 ;
    wire [2:0] axi_size     =  AXI_SIZE[2:0];//3'b011->8bytes in transfer  64bit

    // ar
    always @(posedge clk) begin
        if(!rst) begin  // axi4 active low
            axi_ar_len_o    <= axi_len;                    //no burst, just transfer 64bit 8byte once 
            axi_ar_burst_o  <= `AXI_BURST_TYPE_INCR;// axlen 0~255     //`AXI_BURST_TYPE_FIXED  FIFO   0~15
            axi_ar_lock_o   <= 1'b0;                                                                             //初始化信号即可
            axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
            axi_ar_prot_o   <= `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
            axi_ar_qos_o    <= 4'h0;     
            axi_ar_size_o   <= axi_size;                //8 byte                                                                        //初始化信号即可

        end
        else begin
            axi_ar_valid_o      <= r_e_i;
            if (r_e_i) begin
                axi_ar_id_o     <= r_id_i;
                axi_ar_addr_o   <= r_addr_i;
            end
            else begin
                axi_ar_id_o     <= 1'b0;
                axi_ar_addr_o   <= 32'b0;
            end
        end

    end

    // r
    always @(posedge clk) begin
        if (!rst) begin
        end
        else begin
            axi_r_ready_o   <= 1'b1;
            if (axi_r_valid_i) begin
                r_id_o      <= axi_r_id_i;
                r_data_o    <= axi_r_data_i;
                r_over_o    <= axi_r_last_i;
            end
            else begin
                r_over_o    <= 1'b0;
            end
        end
    end

    // aw
    always @(posedge clk) begin
        if (!rst) begin
            axi_aw_id_o     <= 1'b1;
            axi_aw_len_o    <= axi_len;
            axi_aw_size_o   <= axi_size;
            axi_aw_burst_o  <= `AXI_BURST_TYPE_INCR;
            axi_aw_lock_o   <= 1'b0;                                                                             //初始化信号即可
            axi_aw_prot_o   <= `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
            axi_aw_cache_o  <= `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
            axi_aw_qos_o    <= 4'h0;                                                                             //初始化信号即可
            axi_aw_region_o <= 4'h0;                                                                             //初始化信号即可
        end
        else begin
            axi_aw_valid_o  <= w_e_i;
            if (w_e_i) begin
                axi_aw_addr_o   <= w_addr_i;
            end
            else begin
                axi_aw_addr_o   <= 32'b0;
            end
        end
    end

    // w
    always @(posedge clk) begin
        if (!rst) begin
            axi_w_valid_o <= 1'b0;
        end
        else begin
            axi_w_valid_o <= 1'b1;
            if (axi_w_ready_i) begin
                axi_w_data_o    <= w_data_i;
                axi_w_strb_o    <= w_mask_i;
                axi_w_last_o    <= 1'b1;
            end
            else begin
                axi_w_last_o    <= 1'b0; 
            end
        end
    end

    // b
    always @(posedge clk) begin
        if (!rst) begin
            axi_b_ready_o <= 1'b1;
        end
        else begin
            axi_b_valid_i <= 1'b1;
            if (axi_b_ready_o) begin
                w_over_o <= axi_b_resp_i;
            end
            else begin
                w_over_o <= 1'b0;
            end
        end
    end

 

endmodule

   // // w-dirty
    // always @(posedge clk) begin
    //     if (!rst) begin
    //         axi_aw_lock_o   <= 1'b0;                                                                             //初始化信号即可
    //         axi_aw_cache_o  <= `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    //         axi_aw_qos_o    <= 4'h0;                                                                             //初始化信号即可
    //         axi_aw_region_o <= 4'h0;                                                                             //初始化信号即可
    //         axi_aw_prot_o   <= `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
    //         axi_aw_id_o     <= axi_id;                                                                           //初始化信号即可
    //     end
    //     else begin
    //         case (1'b1)
    //             stage_w[0]: begin   // write start   
    //                 // write from ex to mem
    //                 // aw   
    //                 axi_aw_addr_o   <= w_addr_i;
    //                 axi_aw_len_o    <= axi_len;
    //                 axi_aw_size_o   <= axi_size;
    //                 axi_aw_burst_o  <= `AXI_BURST_TYPE_INCR;
    //                 axi_aw_valid_o  <= w_valid_i;
    //                 // w
    //                 axi_w_data_o    <= w_data_i;
    //                 axi_w_strb_o    <= w_mask_i;
    //                 axi_w_last_o    <= 1'b1;
    //                 axi_w_valid_o   <= w_valid_i;
    //                 // b
    //                 axi_b_ready_o   <= 1'b1;
    //                 if (cache_we & axi_aw_ready_i) begin
    //                     // aw
    //                     axi_aw_id_o     <= 1'b1;
    //                     axi_aw_addr_o   <= w_addr_i;
    //                     axi_aw_valid_o  <= 1'b1;

    //                     axi_aw_len_o    <= axi_len;
    //                     axi_aw_size_o   <= axi_size;
    //                     axi_aw_burst_o  <= `AXI_BURST_TYPE_INCR;

    //                     stage_w         <= stage_w << 1;
    //                 end
    //             end
    //             stage_w[1]: begin
    //                 // w data channel
    //                 axi_w_valid_o       <= 1'b1;
    //                 if (axi_w_ready_i) begin
    //                     axi_w_data_o    <= w_data_i;
    //                     axi_w_strb_o    <= w_mask_i;
    //                     axi_w_last_o    <= 1'b1;
    //                     stage_w         <= stage_w << 1;
    //                 end
    //             end
    //             stage_w[2]: begin
    //                 axi_b_ready_o       <= 1'b11;
    //                 if (axi_b_valid_i) begin
    //                     w_b_id          <= axi_b_id_i;
    //                     stage_w         <= stage_w >> 2;
    //                 end
    //             end
    //         endcase
    //     end
    // end

