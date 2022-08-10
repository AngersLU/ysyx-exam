// `include "defines.h"
// `timescale 1ns/1ns
// module uncache_tag (
//     input wire clk,
//     input wire rst,

//     output reg stallerq,

//     input wire vaild,

//     input wire sram_e,
//     input wire sram_we,
//     input wire [63:0] sram_addr,

//     input wire refresh,

//     output reg hit
// );

//     reg [1:0] stage;

//     always @(posedge clk) begin
//         if (rst==`RstEnable) begin
//             hit <= 1'b0;
//             stallreq <= 1'b0;
//             stage <= `T1;
//         end
//         else begin
//             case (stage)
//                 `T1: begin
//                     if (sran_e & ~vaild) begin
//                         stallreq <= 1'b1;
//                         stage <= `T2;
//                     end
//                     hit <= 1'b0;
//                 end      
//                 `T2: begin
//                     if (refresh) begin
//                         stage <= `T3;
//                         hit <= 1'b1;
//                         stallreq <= 1'b0;
//                     end
//                 end
//                 `T3: begin
//                     stage <= `T1;
//                     hit   <= 1'b1;
//                     stallreq <= 1'b0;
//                 end
//                 default: begin
//                     stage <= `T1;
//                     stallreq <= 1'b0;
//                 end
//             endcase
//         end
//     end


    
// endmodule

