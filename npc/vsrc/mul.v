
`include "defines.v"
// wallace tree

// TODO: signed & unsigned not distinction yet
module mul (
    input wire clk,
    input wire ret,

    input wire mul_32,

    input wire mul_ina_s,
    input wire ina,

    input wire mul_inb_s,
    input wire inb,
    input wire [ 2: 0] sel_mul_hilo,

    output wire signed [63: 0] mul_result, //TODO: what is signed
    output wire mul_over  
);

    wire [127:0] mul_result_temp;

    reg one_mul_signed;
    reg [63:0] one_ina;
    reg [63:0] one_inb;
    reg signed [128:0] mul_temp [16:0];
    wire signed [64:0] ext_ina;
    wire signed [64:0] ext_inb;
    wire [1:0] code [16:0];
    reg [65:0] complemet [15:0];
    reg [64:0] complemet1 [15:0];
    wire [128:0] out; 

    assign ext_ina = {mul_signed & ina[63], ina};
    assign ext_inb = {mul_signed & inb[63], inb};
        
    //decoder
    // code[i][0] == 1    << 1    /  code[i][0] == 0   origin
    // code[i][0] == 1   -    /  code[i][0] == 1   +
    assign code[0][0] = ext_ina[1] & ext_ina[0];
    assign code[0][1] = ext_ina[1] & ext_ina[0];
    genvar gv_i;
    generate
        for ( gv_i = 1; gv_i < 32; gv_i = gv_i + 1 )
        begin: decoder
            assign code[gv_i][0] = ( ext_ina[gv_i*2-1] & ext_ina[gv_i*2] & ~ext_ina[gv_i*2+1]) + (~ext_ina[gv_i*2-1] & ~ext_ina[gv_i*2] & ext_ina[gv_i*2+1]);
            assign code[gv_i][1] = (~ext_ina[gv_i*2-1] & ext_ina[gv_i*2] &  ext_ina[gv_i*2+1]) + (~ext_ina[gv_i*2  ] &  ext_ina[gv_i*2+1]);
        end
    endgenerate
    assign code[32][1] = 1'b0;
    assign code[32][0] = 1'b0;


    // 0 & 32 special code 
    always @(*) begin
        case(code[0])
            2'b00: begin // 0
                mul_temp[0] = 129'b0;
            end
            2'b01: begin // +[x]
                mul_temp[0] = { 65{ext_inb[63]}, ext_inb};
            end
            2'b10: begin // (~[x] + 1) << 1
                complemet[0] = (~ext_inb + 1) << 1;
                mul_temp[0] = { {(63){complemet[gv_j][65]} }, complemet[0]  };
            end
            2'b11: begin // ~[x] + 1
                complemet1[0] = (~ext_inb + 1);
                mul_temp[0] =  { {(64){complemet1[gv_j][64]} }, complemet1[0]  };
            end
            default: begin
                mul_temp[0] = 129'b0;
            end
        endcase
        case(code[32])
            2'b00: begin
                mul_temp[32] = ent_ina[63] ? { ext_inb, 64'b0} : 129'b0;
            end
            default: begin
                mul_temp[32] = 129'b0;
            end            
        endcase
    end

    genvar gv_j;
    generate
        for ( gv_j = 1; gv_j < 32; gv_j = gv_j + 1 )
        begin:booth
            always @(*) begin
                case(code[gv_j])
                    2'b00: begin     // 00 +[x]
                        mul_temp[gv_j] = (~ext_ina[gv_j+1] & ~ext_ina[gv_j] & ~ext_ina[gv_j]) ? 129'b0 : {{(64-gv_j){ext_inb[64]}}, ext_inb, {(2*gv_j){1'b0}}};
                    end
                    2'b01: begin    // 01 +[x] << 1
                        mul_temp[gv_j] = {{(63-gv_j*2){ext_inb[63]}}, ext_inb << 1, {(gv_j*2){1'b0}} }; 
                    end
                    2'b10: begin    // 10 ~[x]+1
                        complemet1[gv_j] = ~ext_inb + 1;
                        mul_temp[gv_j] = { {(64-gv_j*2){complemet1[gv_j][64]} }, complemet1[gv_j], {(gv_j*2){1'b0}} }
                    end             
                    2'b11: begin    // 11 (~[x]+1) << 1
                        complemet[gv_j] = (~ext_inb + 1) << 1;
                        mul_temp[gv_j] = { {(63-gv_j*2){complemet[gv_j][65]} }, complemet[gv_j], {(gv_j*2){1'b0}} };
                    end
                    default: begin
                        mul_temp[gv_j] = 129'b0;
                    end
                endcase
            end
        end
    endgenerate
    //Wallace Tree

    // level one
    wire signed [128:0] temp1_s [10:0];
    wire signed [128:0] carry [x:0];//11+
    ysyx_2022040010_cradder u0(.ina(mul_temp[32]), .inb(mul_temp[31]), .inc(mul_temp[30]), .s(temp1_s[0]), .c(carry[ 0]));
    genvar gv_l;
    generate
        for (gv_l = 0; gv_l <11; gv_l = gv_l + 1 )
        begin: level1
            ysyx_2022040010_cradder ux(.ina(mul_temp[(gv_l*3+2)]), .inb(mul_temp[(gv_l*3+1)]), .inc(mul_temp[(gv_l*3)]), .s(temp1_s[gv_l]), .c(carry[ gv_l]));
        end
    endgenerate

    //level two
    wire signed [128:0] temp2_s [6:0];
    ysyx_2022040010_cradder u11(.ina(temp1_s[0]), .inb(temp1_s[1]), .inc(temp1_s[2]), .s(temp2_s[0]), .c(carry[11]));  
    ysyx_2022040010_cradder u12(.ina(temp1_s[3]), .inb(temp1_s[4]), .inc(temp1_s[5]), .s(temp2_s[1]), .c(carry[12]));  
    ysyx_2022040010_cradder u13(.ina(temp1_s[6]), .inb(temp1_s[7]), .inc(temp1_s[8]), .s(temp2_s[2]), .c(carry[13]));  
    ysyx_2022040010_cradder u14(.ina(temp1_s[9]), .inb(temp1_s[10]), .inc(carry[0]),  .s(temp2_s[3]), .c(carry[14]));  
    ysyx_2022040010_cradder u15(.ina(carry[1]), .inb(carry[2]), .inc(carry[3]),       .s(temp2_s[4]), .c(carry[15]));
    ysyx_2022040010_cradder u16(.ina(carry[4]), .inb(carry[5]), .inc(carry[6]),       .s(temp2_s[5]), .c(carry[16]));
    ysyx_2022040010_cradder u15(.ina(carry[7]), .inb(carry[8]), .inc(carry[9]),       .s(temp2_s[6]), .c(carry[17]));  //carry[10]

    // level three
    wire signed [128:0] temp3_s [4:0];
    ysyx_2022040010_cradder u16(.ina(carry[10]), .inb(temp2_s[0]), .inc(temp2_s[1]),  .s(temp3_s[0]), .c(carry[18]));
    ysyx_2022040010_cradder u17(.ina(temp2_s[2]), .inb(temp2_s[3]), .inc(temp2_s[4]), .s(temp3_s[1]), .c(carry[19]));
    ysyx_2022040010_cradder u18(.ina(temp2_s[5]), .inb(temp2_s[6]), .inc(carry[11]),  .s(temp3_s[2]), .c(carry[20]));
    ysyx_2022040010_cradder u19(.ina(carry[12]), .inb(carry[13]), .inc(carry[14]),    .s(temp3_s[3]), .c(carry[21]));
    ysyx_2022040010_cradder u20(.ina(carry[15]), .inb(carry[16]), .inc(carry[17]),    .s(temp3_s[4]), .c(carry[22]));

    // level four 
    wire signed [128:0] temp4_s [2:0];
    ysyx_2022040010_cradder u21(.ina(carry[18]), .inb(carry[19]), .inc(carry[20]),    .s(temp4_s[0]), .c(carry[23]));
    ysyx_2022040010_cradder u22(.ina(carry[21]), .inb(carry[22]), .inc(temp3_s[0]),   .s(temp4_s[1]), .c(carry[24]));
    ysyx_2022040010_cradder u23(.ina(temp3_s[1]), .inb(temp3_s[2]), .inc(temp3_s[3]), .s(temp4_s[2]), .c(carry[25])); //temp3_s[4]

    // level five
    wire signed [128:0] temp5_s [1:0];
    ysyx_2022040010_cradder u24(.ina(temp3_s[4]), .inb(temp4_s[0]), .inc(temp4_s[1]), .s(temp5_s[0]), .c(carry[26]));
    ysyx_2022040010_cradder u25(.ina(temp4_s[2]), .inb(carry[23]), .inc(carry[24]),   .s(temp5_s[1]), .c(carry[27])); //carry[25]

    // level six
    wire signed [128:0] temp6_s [1:0];
    ysyx_2022040010_cradder u26(.ina(carry[25]), .inb(carry[26]), .inc(carry[27]),    .s(temp6_s[0]), .c(carry[28]));
    ysyx_2022040010_cradder u27(.ina(temp5_s[0]), .inb(temp5_s[1]), .inc(carry[28]),  .s(temp6_s[1]), .c(carry[29])); //- carry[28]

    wire signed [128:0] s;
    wire signed [128:0] c;
    ysyx_2022040010_cradder u29(.ina(carry[29]), .inb(temp6_s[0]), .inc(temp6_s[1]),    .s(s), .c(c));

    assign out = s + c;

    assign {mul_over, mul_result} = sel_mul_hilo[0] ? {1'b1,{{32{out[31]}}, out[31: 0]}} :
                        sel_mul_hilo[1] ? {1'b1, out[127:64]} :
                        sel_mul_hilo[2] ? {1'b1, out[ 63: 0]} : {1'b0, 64'b0};
    
endmodule

//carry reserved adder
module ysyx_2022040010_cradder (
    input wire [128:0] ina,
    input wire [128:0] inb,
    input wire [128:0] inc,
    output wire [128:0] s,
    output wire [128:0] c
);

    assign c[0] = 1'b0;
    wire ov;
    genvar gv_a;

    generate
        for (gv_a = 0; gv_a <128; gv_a = gv_a + 1 )
        begin: cra
            fb bitx (.a(ina[gv_a]), .b(inb[gv_a]), .cin(inc[gv_a]), .s(s[gv_a]), .c(c[gv_a+1]));
        end
    endgenerate
    fa bit128 (.a(ina[128]), .b(inb[128]), .cin(inc[128]), .s(s[128]), .c(c[ov]));
    
endmodule



