
// `define "defines.v"
// `timescale 1ns/1ns
// module uncache_data (
//     input wire clk,
//     input wire rst,

//     input wire hit,
//     input wire vaild,

//     input wire  [63:0] dsram_rdata,
//     output wire [63:0] sram_rdata
// );

//     reg [63:0] sram_rdata_r;
//     reg hit_r;
//     reg vaild_r;

//     always @(posedge clk) begin
//         if (rst) begin
//             sram_rdata_r <= 64'b0;
//         end
//         else begin
//             sram_rdata_r <= dsram_rdata;
//         end
//     end

//     always @(posedge clk) begin
//         if (rst) begin
//             hit_r <= 1'b0;
//             vaild_r <= 1'b1;
//         end
//         else begin
//             hit_r <= hit;
//             vaild_r <= vaild;
//         end
//     end

//     assign sram_rdata = hit_r & ~vaild_r ? sram_rdata_r : 64'b0;

    
// endmodule
