// //test.v
// `include "defines.v"

// `timescale 1ns/1ps

// module test ();

//     reg CLK_50;
//     reg rst;

//     initial begin
//         CLK_50 = 1'b0;
//         forever #10 CLK_50 = ~CLK_50;
//     end

//     initial begin
//         rst = `RstEnable;
//         #195 rst = `RstDisable;
//     end

//     top top0( .clk(CLK_50),
//                 .rst(rst)   );

// endmodule