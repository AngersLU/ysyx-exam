
// `include "defines.v"
// `timescale 1ns/1ns

// module axi_rw # (
//     parameter RW_DATA_WIDTH     = 64,
//     parameter RW_ADDR_WIDTH     = 32,
//     parameter AXI_DATA_WIDTH    = 64,
//     parameter AXI_ADDR_WIDTH    = 32,
//     parameter AXI_ID_WIDTH      = 4,
//     parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
// )(
//     input  wire                             clock,
//     input  wire                             reset,
//     // don't have cache no dirty and no miss
//     input  wire                             r_id,
// 	input  wire                             r_valid_i,         //IF&EXE输入信号
// 	// output reg                              r_ready_o,         //IF&EXE输入信号 // pc + load pc first 
//     output reg  [RW_DATA_WIDTH-1:0]         data_read_o,       //IF&EXE输入信号
//     input  wire [RW_ADDR_WIDTH-1:0]         r_addr_i,          //IF&EXE输入信号
//     input  wire [7:0]                       r_size_i,          //IF&EXE输入信号

// 	input  wire                             w_valid_i,         //IF&MEM输入信号
// 	output reg                              w_ready_o,         //IF&MEM输入信号  // pc + load need stall by this sign
//     input  wire [RW_DATA_WIDTH-1:0]         w_data_i,        //IF&MEM输入信号
//     input  wire [RW_ADDR_WIDTH-1:0]         w_addr_i,          //IF&MEM输入信号
//     input  wire [7:0]                       w_mask_i,          //IF&MEM输入信号


//     // Advanced extensible Interface
//     output reg [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
//     output reg [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o, 
//     output reg [7:0]                        axi_aw_len_o, 
//     output reg [2:0]                        axi_aw_size_o,  
//     output reg [1:0]                        axi_aw_burst_o, 
//     // output reg                              axi_aw_lock_o,
//     // output reg [3:0]                        axi_aw_cache_o,
//     // output reg [2:0]                        axi_aw_prot_o,    
//     // output reg [3:0]                        axi_aw_qos_o,
//     // output reg [3:0]                        axi_aw_region_o,                   
//     output reg                              axi_aw_valid_o,
//     input  wire                             axi_aw_ready_i, 
    
//     output reg [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
//     output reg [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
//     output reg                              axi_w_last_o,
//     output reg                              axi_w_valid_o,  
//     input  wire                             axi_w_ready_i,                

//     input  wire [AXI_ID_WIDTH-1:0]          axi_b_id_i,
//     input  wire [1:0]                       axi_b_resp_i,                 
//     input  wire                             axi_b_valid_i,
//     output reg                              axi_b_ready_o, 

//     output reg [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
//     output reg [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
//     output reg [7:0]                        axi_ar_len_o,
//     output reg [2:0]                        axi_ar_size_o,
//     output reg [1:0]                        axi_ar_burst_o,
//     // output reg                              axi_ar_lock_o,  //
//     // output reg [3:0]                        axi_ar_cache_o, //   
//     // output reg [2:0]                        axi_ar_prot_o,//
//     // output reg [3:0]                        axi_ar_qos_o,//
//     // output reg [3:0]                        axi_ar_region_o,//
//     output reg                              axi_ar_valid_o, 
//     input  wire                             axi_ar_ready_i,   // TODO: how use

//     input  wire  [AXI_ID_WIDTH-1:0]         axi_r_id_i,    // from icache&dcache or isram or dsram//
//     input  wire  [AXI_DATA_WIDTH-1:0]       axi_r_data_i,  
//     input  wire  [1:0]                      axi_r_resp_i,  //
//     input  wire                             axi_r_last_i,   
//     input  wire                             axi_r_valid_i,      
//     output reg                              axi_r_ready_o
// );
    
//     // ------------------State Machine------------------
    
//     // 写通道状态切换
    

//     // 读通道状态切换


//     // ------------------Write Transaction------------------
//     parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);  // 3->3'b011
//     wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
//     wire [7:0] axi_len      =  8'b0 ;
//     wire [2:0] axi_size     = AXI_SIZE[2:0];//3'b011->8bytes in transfer  64bit
//     // 写地址通道
//     assign axi_aw_valid_o   = w_state_addr;
//     assign axi_aw_addr_o    = rw_addr_i;

//     assign axi_aw_len_o     = axi_len;             // INCR 0~255 FIXER 0~15
//     assign axi_aw_size_o    = axi_size;
//     assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;                                                      


//     // 写数据通道
//     assign axi_w_valid_o    = w_state_write;
//     assign axi_w_data_o     = rw_w_data_i ;
//     assign axi_w_strb_o     = rw_size_i;
//     assign axi_w_last_o     = 1'b0;


//     // 写应答通道
//     assign axi_b_ready_o    = w_state_resp;

//     // ------------------Read Transaction------------------

//     // Read address channel signals
//     assign axi_ar_valid_o   = r_state_addr;
//     assign axi_ar_addr_o    = rw_addr_i;
//     assign axi_ar_len_o     = axi_len;                                                                          
//     assign axi_ar_size_o    = axi_size;



//     // Read data channel signals
//     assign axi_r_ready_o    = r_state_read;



//     // r
//     always @(posedge clk) begin
//         if(!rst) begin  // axi4 active low
//             axi_ar_lock_o   <= 1'b0;                                                                             //初始化信号即可
//             axi_ar_cache_o  <= `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
//             axi_ar_qos_o    <= 4'h0;                                                                             //初始化信号即可
//             axi_ar_prot_o   <= `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
//             axi_ar_id_o     <= axi_id;                                                                           //初始化信号即可                        
//         end
//         else begin
//             // ar 
//             axi_ar_id_o     <= r_id;
//             axi_ar_addr_o   <= r_addr_i;
//             axi_ar_len_o    <= axi_len;                    //no burst, just transfer 64bit 8byte once
//             axi_ar_size_o   <= axi_size;                //8 byte
//             axi_ar_burst_o  <= `AXI_BURST_TYPE_INCR;// axlen 0~255     //`AXI_BURST_TYPE_FIXED  FIFO   0~15
//             axi_ar_valid_o  <= r_valid_i;

//             // r
//             inst_buffer     <= axi_r_data_i;
//             load_buffer     <= axi_r_data_i;
//             r_over          <= axi_r_last_i;
//             r_valid_i       <= axi_r_valid_i;
//             if (r_over) begin
//                 axi_r_ready_o <= 1'b0;
//             end
//             if (axi_ar_ready_i) begin
//                 axi_r_ready_o <= 1'b1;
//             end
//         end
//     end

//     // w
//     always @(posedge clk) begin
//         if (!rst) begin
//             axi_aw_lock_o   <= 1'b0;                                                                             //初始化信号即可
//             axi_aw_cache_o  <= `AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
//             axi_aw_qos_o    <= 4'h0;                                                                             //初始化信号即可
//             axi_aw_region_o <= 4'h0;                                                                             //初始化信号即可
//             axi_aw_prot_o   <= `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;  //初始化信号即可
//             axi_aw_id_o     <= axi_id;                                                                           //初始化信号即可
//         end
//         else begin
//             // read form if and ex to id or mem
//             // write from ex to mem
//             // aw   
//             axi_aw_addr_o   <= w_addr_i;
//             axi_aw_len_o    <= axi_len;
//             axi_aw_size_o   <= axi_size;
//             axi_aw_burst_o  <= `AXI_BURST_TYPE_INCR;
//             axi_aw_valid_o  <= w_valid_i;

//             // w
//             axi_w_data_o    <= w_data_i;
//             axi_w_strb_o    <= w_mask_i;
//             axi_w_last_o    <= 1'b1;
//             axi_w_valid_o   <= w_valid_i;
            
//             // b
//             axi_b_ready_o   <= 1'b1;
//         end
//     end



// endmodule
