
`include "defines.v"
`timescale 1ns / 1ps
module ysyx_2022040010_if (
    input wire clk,
    input wire rst,
    input wire [`StallBus] stall,

    input wire [`BR_TO_IF_BUS]   br_bus,

    output wire [`IF_TO_ID_BUS] if_to_id_bus,

    output wire isram_e,
    output wire [63: 0] isram_addr
);

    reg [63: 0] pc_reg;
    reg ce_reg;
    wire [63: 0] next_pc;
    wire br_e;
    wire [63: 0] br_addr;

    assign {    br_e,
                br_addr
    }   =   br_bus;



    always @( posedge clk ) begin
        if ( rst ) begin
            pc_reg <= `PC_START;
            ce_reg <= 1'b0;
        end
        else if (stall[3]) begin
            // keep
        end
        else if(stall[0] | stall[1]) begin //exestall or loadstall
        end
        else begin
            pc_reg <= next_pc;
            ce_reg <= 1'b1;
        end
    end

    assign next_pc = br_e ? br_addr : pc_reg + 64'h4;



    wire [63: 0] if_pc;
    assign if_pc = (pc_reg == `PC_START) ? 64'b0 : pc_reg;
    assign if_to_id_bus = {
        ce_reg,    //   64
        if_pc,     //63: 0
        next_pc
    };

    assign isram_e  = ce_reg;
    assign isram_addr  = if_pc;
       
    
endmodule

    parameter [1:0] L_STATE_IDLE = 2'b00, L_STATE_MISS = 2'b01, L_STATE_WRITE = 2'b10, L_STATE_READ = 2'b11;
    parameter [1:0] S_STATE_IDLE = 2'b00, S_STATE_MISS = 2'b01, S_STATE_WRITE = 2'b10, S_STATE_READ = 2'b11;

    reg [1:0] load_state store_state;
    wire load_state_idle = load_state == L_STATE_IDLE, load_state_miss = load_state == L_STATE_MISS, load_state_write = load_state == L_STATE_WRITE, load_state_read = load_state == L_STATE_READ;
    wire store_state_idle = store_state == S_STATE_IDLE, store_state_miss = store_state == S_STATE_MISS, store_state_write = store_state == S_STATE_WRITE, store_state_read = store_state == S_STATE_READ;


    always @(posedge clock) begin
        if (reset) begin
            load_state <= L_STATE_IDLE;
        end
        else begin
            if (load_valid) begin
                case (load_state)
                    L_STATE_IDLE:  if (load_miss)  load_state <= L_STATE_MISS;
                    L_STATE_MISS:  begin
                        if (load_dirty) begin
                            load_state <= L_STATE_WRITE;
                        end
                        else begin
                            load_state <= L_STATE_READ;
                        end                        
                    end
                    L_STATE_WRITE: if (load_write) load_state <= L_STATE_READ;
                    L_STATE_READ:  if (load_read)  load_state <= L_STATE_IDLE;
                    default:;
                endcase   
            end
        end
    end
    assign load_read  = load_read_over;
    assign load_write = load_write_over; 

    always @(posedge clk) begin
        if (reset) begin
            store_state <= S_STATE_IDLE;
        end
        else begin
            if (store_valid) begin
                case (store_state)
                    S_STATE_IDLE: if (store_miss)  store_state <= S_STATE_MISS;
                    S_STATE_MISS: begin
                        if (store_dirty) begin
                            store_state <= S_STATE_WRITE;
                        end
                        else begin
                            store_state <= S_STATE_READ;
                        end
                    end
                    S_STATE_WRITE: if (store_write) store_state <= S_STATE_READ;
                    S_STATE_READ:  if (store_read)  store_state <= S_STATE_IDLE;
                endcase
            end
        end
    end


