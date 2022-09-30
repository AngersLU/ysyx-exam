
`include "defines.v"
`timescale 1ns / 1ps
module ysyx_2022040010_stall(
    input wire rst,
    input wire stallreq_for_ex,
    input wire stallreq_for_bru,
    input wire stallreq_for_load,
    input wire stallreq_for_cache, 

    input wire rw_over,
    output reg [`StallBus] stall
);  
    always @ (*) begin
        if (rst) begin
            stall = `Stall_WD'b0;
        end
        else if (stallreq_for_bru) begin //flush
            stall = `Stall_WD'b100100;
        end
        else if (stallreq_for_ex) begin
            stall = `Stall_WD'b100010;
        end
        else if (stallreq_for_load) begin
            stall = `Stall_WD'b100001;
        end
        else if (stallreq_for_cache) begin
            stall = `Stall_WD'b101000;
        end
        else if (rw_over) begin
            stall = `Stall_WD'b0;
        end
        else begin
            stall = `Stall_WD'b0; 
        end
    end

endmodule
