
`include "defines.v"
`timescale 1ns/1ns

module ysyx_2022040010_uncache_tag (
    input  wire             clk,
    input  wire             rst,
    input  wire [`StallBus] stall,

    input  wire             uncache,   // uncache

    input  wire             dsram_e,    
    input  wire             dsram_we,
    input  wire [63:0]      dsram_addr,
    input  wire [63:0]      dsram_wdata,
    input  wire [ 7:0]      dsram_wsel,

    input  wire             refresh,  // from axi

    // output reg          axi_e, //delete
    // output reg          axi_we,
    // output reg [63:0]   axi_addr,
    // output reg [63:0]   axi_wdata,   
    // output reg [ 7:0]   axi_wsel,

    output reg              miss,//add
    output reg              hit
);

    reg [1:0] stage;

    always @(posedge clk) begin
        if (rst==`RstEnable) begin
            axi_e <= 1'b0;
            axi_wsel <= 7'b0;
            axi_addr <= 64'b0; 

            hit <= 1'b0;
            stage <= `T1;
        end
        else begin
            case (stage)
                `T1: begin
                    if (dsran_e & ~uncache) begin
                        axi_e <= 1'b1;
                        axi_wsel <= sram_sel

                        stage <= `T2;
                    end
                    hit <= 1'b0;
                end      
                `T2: begin
                    if (refresh) begin
                        stage <= `T3;
                        hit <= 1'b1;
                    end
                end
                `T3: begin
                    stage <= `T1;
                    hit   <= 1'b1;
                end
                default: begin
                    stage <= `T1;
                end
            endcase
        end
    end


    always @(posedge clk) begin
        if (rst == `RstEnable) begin
            hit <= 1'b0;
            stallreq <= 1'b0;
            stage <= `T1;
        end
        else if (stall[3]) begin
            // keepE
        end
        else begin
            if (uncache) begin  // miss
                hit         <= 1'b0;
                axi_e       <= dsram_e;
                axi_we      <= dsram_we;
                axi_addr    <= dsram_addr;
                axi_wdata   <= dsram_wdata;
                axi_wsel    <= dsram_wsel;
            end
            else if (refresh) begin
                hit         <= 1'b1;
                axi_e       <= 1'b0;
            end
        end
    end



    
endmodule

