
`include "defines.v"
`timescale 1ns/1ns

module uncache_tag (
    input  wire         clk,
    input  wire         rst,

    output reg          stallreq,

    input  wire         uncache,   // uncache

    input  wire         dsram_e,    
    input  wire         dsram_we,
    input  wire [63:0]  dsram_addr,
    input  wire [63:0]  dsram_wdata,
    input  wire [7:0]   dsram_sel,

    input  wire         refresh,  // 

 
    output reg          axi_e,
    output reg          axi_we,
    output reg [63:0]   axi_addr,
    output reg [63:0]   axi_wdata,   
    output reg [ 7:0]   axi_wsel,

    output reg          miss       // miss 
);

    reg [1:0] stage;

    always @(posedge clk) begin
        if (rst==`RstEnable) begin
            axi_e <= 1'b0;
            axi_wsel <= 7'b0;
            axi_addr <= 64'b0; 

            hit <= 1'b0;
            stallreq <= 1'b0;
            stage <= `T1;
        end
        else begin
            case (stage)
                `T1: begin
                    if (dsran_e & ~cache) begin
                        axi_e <= 1'b1;
                        axi_wsel <= sram_sel

                        stallreq <= 1'b1;
                        stage <= `T2;
                    end
                    hit <= 1'b0;
                end      
                `T2: begin
                    if (refresh) begin
                        stage <= `T3;
                        hit <= 1'b1;
                        stallreq <= 1'b0;
                    end
                end
                `T3: begin
                    stage <= `T1;
                    hit   <= 1'b1;
                    stallreq <= 1'b0;
                end
                default: begin
                    stage <= `T1;
                    stallreq <= 1'b0;
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
        else begin
            if (dsram_e & ~dsram_we & uncache) begin  // uncache & load -> miss and not dirty    
                miss <= 1'b1;
                axi_e <= dsram_e;  // 1
                axi_we <= dsram_we;  // 0 load
                axi_addr <= dsram_addr;
            end
            else if (dsram_e & dsram_we & uncache) begin
                
            end
        end
    end



    
endmodule

