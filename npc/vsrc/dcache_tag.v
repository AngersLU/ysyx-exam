// `include "defines.h"
// `timescale 1ns/1ns
// module dcache_tag (
//     input wire clk,
//     input wire rst,
//     input wire flush,
    
//     output wire stallreq,  // access memory 

//     input wire vaild,

//     input wire sram_e,
//     input wire sram_we, // 0 load 1 store
//     input wire sram_addr,

//     input wire refresh,
//     output wire miss,
//     output wire dirty,
//     output wire write_back,

//     output wire [`HIT_WIDTH-1:0] hit,
//     output wire lru
// );

//     reg [`DTAG_WIDTH-1:0] tag_way0 [`INDEX_WIDTH-1:0];
//     reg [`DTAG_WIDTH-1:0] tag_way1 [`INDEX_WIDTH-1:0];   // dirty + vaild + tag
//     reg [`INDEX_WIDTH-1:0] lru_r;
//     wire [54:0] tag;   // 55
//     wire [5:0] index;           // 6 64lines 
//     wire [2:0] offset;          // 3 2^3=8 8*8 = 64bits
//     wire vaild_v;

//     wire hit_way0;          
//     wire hit_way1;

//     wire write_back_way0;  
//     wire write_back_way1;

//     assign vaild_v = vaild;

//     assign {
//         tag,
//         index,
//         offset
//     } = sram_addr;

//     always @(posedge clk) begin
//         if (rst) begin
//             lru_r <= `INDEX_WIDTH'b0;
//         end
//         else if (hit_way0 & ~hit_way1) begin
//             lru_r[index] <= 1'b1;
//         end
//         else if (~hit_way0 & hit_way1) begin
//             lru_r[index] <= 1'b0;            
//         end
//         else if (refresh) begin
//             lru_r[index] <= ~lru_r[index];   
//         end
//     end

//     always @(posedge clk) begin
//         if(rst) begin
//             tag_way0[ 0] <= 56'b0;



//         end
//         else if (refresh & ~lru_r[index]) begin  // lru vaild 0
//             tag_way0[index] <= {1'b0, vaild_v, tag};
//         end
//     end



//     always @(posedge clk) begin
//         if(rst) begin
//             tag_way1[ 0] <= 56'b0;



//         end
//         else if (refresh & lru_r[index]) begin
//             tag_way1[index] <= {1'b0, vaild_v, tag};   // replacement strategy for write back
//         end
//     end


//     wire store_dirty;
//     assign hit_way0 = ~flush & vaild_v & sram_e & ({1'b1, tag} == tag_way0[index][55:0]);
//     assign hit_way1 = ~flush & vaild_v & sram_e & ({1'b1, tag} == tag_way1[index][55:0]);
//     assign miss = vaild_v & sram_e & ~(hit_way0|hit_way1) & ~flush;
//     assign store_dirty = miss & sram_we;  // store

//     always @(*) begin
//         if (store_dirty) begin
//             if (lru_r[index]) begin
//                 tag_way1[index][56] = store_dirty;
//             end
//             else if (~lru_r[index]) begin
//                 tag_way0[index][56] = store_dirty;
//             end
//         end
//     end

//     assign stallreq = miss;
//     assign write_back_way0 = vaild_v & sram_e & miss & tag_way0[index][`DTAG_WIDTH-1]; // dirty
//     assign write_back_way1 = vaild_v & sram_e & miss & tag_way1[index][`DTAG_WIDTH-1];
//     assign write_back = write_back_way0 | write_back_way1;




// endmodule





