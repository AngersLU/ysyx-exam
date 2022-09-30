
// try quotient way
`include "defines.v"
`timescale 1ns / 1ps
// module ysyx_2022040010_div(
//     input wire rst,
//     input wire clk,
//     input wire signed_div_i,
//     input wire div_32,
//     input wire [63:0] opdata1_i,
//     input wire [63:0] opdata2_i,
//     input wire start_i,
//     input wire annul_i,
//     input wire [ 1:0] div_res_sel,

//     output reg [63:0] div_res_o,
//     output reg ready_o


	
// );
	


// 	wire [64:0] div_temp;
// 	//cnt == 64 ready-o = end;
//     reg [  6:0] cnt;  						
// 	reg [128:0] dividend;						

//     reg [127:0] result_o;
// 	reg [ 1:0] state;				// div state		
// 	reg [63:0] divisor;
// 	reg [63:0] temp_op1;
// 	reg [63:0] temp_op2;
	
// 	assign div_temp = {1'b0, dividend[127: 64]} - {1'b0, divisor};
	
// 	always @ (posedge clk) begin
// 		if (rst == `RstEnable) begin
// 			state <= `DivFree;
// 			result_o <= {`ZeroWord,`ZeroWord};
// 			ready_o <= `DivResultNotReady;
// 		end else begin
// 			case(state)
// 				`DivFree: begin			//div free
// 					if (start_i == `DivStart && annul_i == 1'b0) begin
// 						if(opdata2_i == `ZeroWord) begin			
// 							state <= `DivByZero;
// 						end else begin
// 							state <= `DivOn;					
// 							cnt <= 7'b000000;
// 							if(signed_div_i == 1'b1 && opdata1_i[63] == 1'b1) begin			//被除数为负数
// 								temp_op1 <= ~opdata1_i + 1;
// 							end 
//                             else begin
// 								temp_op1 <= opdata1_i;
// 							end
// 							if (signed_div_i == 1'b1 && opdata2_i[63] == 1'b1 ) begin			//除数为负数
// 								temp_op2 <= ~opdata2_i + 1;
// 							end 
//                             else begin
// 								temp_op2 <= opdata2_i;
// 							end
// 							dividend <= {1'b0, `ZeroWord, `ZeroWord};
// 							dividend[64: 1] <= temp_op1;
// 							divisor <= temp_op2;
// 						end
// 					end 
//                     else begin
// 						ready_o <= `DivResultNotReady;
// 						result_o <= {`ZeroWord, `ZeroWord};
// 					end
// 				end
				
// 				`DivByZero: begin			//divbyzero
// 					dividend <= {1'b0, `ZeroWord, `ZeroWord};
// 					state <= `DivEnd;
// 				end
				
// 				`DivOn: begin				//div on
// 					if(annul_i == 1'b0) begin			//start div
// 						if(cnt != 7'b1000_000) begin
// 							if (div_temp[64] == 1'b1) begin
// 								dividend <= {dividend[127:0],1'b0};
// 							end 
//                             else begin
// 								dividend <= {div_temp[63:0],dividend[63:0], 1'b1};
// 							end
// 							cnt <= cnt + 1;		//除法运算次数
// 						end	
//                         else begin
// 							if ((signed_div_i == 1'b1) && ((opdata1_i[63] ^ opdata2_i[63]) == 1'b1)) begin
// 								dividend[63:0] <= (~dividend[63:0] + 1);
// 							end
// 							if ((signed_div_i == 1'b1) && ((opdata1_i[63] ^ dividend[128]) == 1'b1)) begin//TODO: not understand
// 								dividend[128:65] <= (~dividend[128:65] + 1);
// 							end
// 							state <= `DivEnd;
// 							cnt <= 7'b0000_000;
// 						end
// 					end 
//                     else begin	
// 						state <= `DivFree;
// 					end
// 				end
				
// 				`DivEnd: begin			//div end
// 					result_o <= {dividend[128:65], dividend[63:0]};
// 					ready_o <= `DivResultReady;
// 					if (start_i == `DivStop) begin
// 						state <= `DivFree;
// 						ready_o <= `DivResultNotReady;
// 						result_o <= {`ZeroWord, `ZeroWord};
// 					end
// 				end
			
// 			endcase
// 		end
// 	end
//     wire [63:0] div_result_temp;
//     assign div_result_temp = div_res_sel[1] ? result_o[ 63: 0] : 
//                              div_res_sel[0] ? result_o[127:64] :
//                              64'b0;
//     wire [63:0] div_res_32;
// 	wire [63:0] div_result;

//     assign div_res_32 = signed_div_i ? {{32{div_result_temp[31]}}, div_result_temp[31:0]} : {{32{1'b0}}, div_result_temp[31:0]};
//     assign div_result = div_32 ? div_res_32 : div_result_temp;
//     assign div_res_o = ready_o ? div_result : 64'b0;

// endmodule

module ysyx_2022040010_div(
    input wire rst,
    input wire clk,
    input wire signed_div_i,
    input wire div_32,
    input wire [63:0] opdata1_i,
    input wire [63:0] opdata2_i,
    input wire start_i,
    input wire annul_i,
    input wire [ 1:0] div_res_sel,

    output wire [63:0] div_res_o,
    output wire ready_o


	
);
	
	wire [63:0] div_result_temp;
	wire [63:0] div_result_signed;
	wire [63:0] div_result_unsigned;
	wire [63:0] div_res_32;
	wire [63:0] div_result;

	assign div_result_signed = $signed(opdata1_i) / $signed(opdata2_i);
	assign div_result_unsigned = opdata1_i / opdata2_i;
	assign div_result_temp = signed_div_i ? div_result_signed : div_result_unsigned; 

    assign div_res_32 = {{32{div_result_temp[31]}}, div_result_temp[31:0]};
    assign div_result = div_32 ? div_res_32 : div_result_temp;



	wire [63:0] rem_result_temp;
	wire [63:0] rem_result_signed;
	wire [63:0] rem_result_unsigned;
	wire [63:0] rem_res_32;
	wire [63:0] rem_result;
 
	assign rem_result_signed = $signed(opdata1_i) % $signed(opdata2_i);
	assign rem_result_unsigned = opdata1_i % opdata2_i;
	assign rem_result_temp = signed_div_i ? rem_result_signed : rem_result_unsigned;

    assign rem_res_32 = {{32{rem_result_temp[31]}}, rem_result_temp[31:0]};
    assign rem_result = div_32 ? rem_res_32 : rem_result_temp;

	wire [63:0] div_res_o_temp;
	assign div_res_o_temp = div_res_sel[1] ? div_result :
							div_res_sel[0] ? rem_result : 64'b0;
	assign ready_o = ( div_res_sel[1] | div_res_sel[0] ) ? 1'b1 : 1'b0;
    assign div_res_o = ready_o ? div_res_o_temp : 64'b0;

endmodule
