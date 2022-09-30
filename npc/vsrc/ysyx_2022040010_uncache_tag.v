
`include "defines.v"
`timescale 1ns / 1ps

module ysyx_2022040010_uncache_tag (
    input  wire             clk,
    input  wire             rst,

    output reg              stallreq, 
    input  wire             uncache,   // uncache

    input  wire             dsram_e,    
    input  wire             dsram_we,
    input  wire [63:0]      dsram_addr,

    input  wire             refresh,  // from axi

    output wire              miss,
    output reg               hit
);

    reg [1:0] stage;

    // always @(posedge clk) begin
    //     if (rst==`RstEnable) begin
    //         axi_e <= 1'b0;
    //         axi_wsel <= 7'b0;
    //         axi_addr <= 64'b0; 

    //         hit <= 1'b0;
    //         stage <= `T1;
    //     end
    //     else begin
    //         case (stage)
    //             `T1: begin
    //                 if (dsran_e & ~uncache) begin
    //                     axi_e <= 1'b1;
    //                     axi_wsel <= sram_sel
    //                     stage <= `T2;
    //                 end
    //                 hit <= 1'b0;
    //             end      
    //             `T2: begin
    //                 if (refresh) begin
    //                     stage <= `T3;
    //                     hit <= 1'b1;
    //                 end
    //             end
    //             `T3: begin
    //                 stage <= `T1;
    //                 hit   <= 1'b1;
    //             end
    //             default: begin
    //                 stage <= `T1;
    //             end
    //         endcase
    //     end
    // end

    always @(posedge clk) begin
        if (rst) begin
            hit <= 1'b0;
            stallreq <= 1'b0;
        end
        else begin
            if (uncache & dsram_e) begin  // miss
                hit         <= 1'b0;
                stallreq    <= 1'b1;
            end
            else if (refresh) begin
                hit         <= 1'b1;
                stallreq    <= 1'b0;
            end
            else begin
                hit         <= 1'b0;
                stallreq    <= 1'b0;
            end
        end
    end



//
    assign miss = uncache; // unmiss
//



    
endmodule

