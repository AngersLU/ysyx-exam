//inst_rom.v    actually,it should nout exist


`include "defines.v"

module ysyx_2022040010_inst_rom (
    input wire                  ce,
    input wire[`InstAddrBus]    addr,

    output reg[`InstBus]        inst
);

    reg[`InstBus]   inst_mem[0:`InstMemNum-1];//a array size InstMemNum element width InstBus

    initial begin
        $readmemh("inst_rom.data",inst_mem);//TODO:modify
        //actually does not exist
    end

    always @(*) begin
        if (ce == `ChipDisable)begin
            inst <= `ZeroWord;
        end
        else begin
            inst <= inst_mem[addr[`InstMemNumLog2+1:2]];
            //because a inst is 32 bits, we need to divide th inst address by 4 = x:2
            //pc addressing by byte, inst_mem addressing by 4 byte(1 inst),so /4 = :2
            // inst <= inst_mem[0];
        end
    end

    // initial begin
    //     if(ce == `ChipEnable)begin
    //         $display("%h",inst);
    //     end
    // end

    initial begin
        $display("%h",inst_mem[0]);
    end

endmodule
