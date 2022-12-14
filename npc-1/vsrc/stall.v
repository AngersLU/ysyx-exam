module ysyx_2022040010_stall(
    input wire rst,
    input wire stallreq_for_ex,
    input wire stallreq_for_bru,
    input wire stallreq_for_load,

    // output reg flush,
    // output reg [31:0] new_pc,
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
        else begin
            stall = `Stall_WD'b0;
        end
    end

endmodule