// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(isram_e,0,0);
    VL_OUT8(dsram_e,0,0);
    VL_OUT8(dsram_we,0,0);
    VL_OUT8(bubble,0,0);
    VL_IN(isram_rdata,31,0);
    VL_OUT64(isram_addr,63,0);
    VL_OUT64(debug_wb_pc,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*5:0*/ top__DOT__fslu__DOT__stall;
        CData/*0:0*/ top__DOT__fslu__DOT__stallreq_for_bru;
        CData/*0:0*/ top__DOT__fslu__DOT__ifu__DOT__ce_reg;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__flag;
        CData/*6:0*/ top__DOT__fslu__DOT__idu__DOT__opcode;
        CData/*7:0*/ top__DOT__fslu__DOT__idu__DOT__func3_d;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_addi;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_add;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_addiw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_addw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sub;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_subw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_slti;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sltiu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_slt;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sltu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_slli;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_srli;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_srai;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_slliw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_srliw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sraiw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sll;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_srl;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sra;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sllw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_srlw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sraw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_xori;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_ori;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_andi;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_xor;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_or;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_and;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_ecall;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_ebreak;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lb;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lh;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_ld;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lbu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lhu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_lwu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sb;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sh;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_sd;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_jalr;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_beq;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrs;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrc;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrwi;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrsi;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_csrrci;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_mul;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_mulh;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_mulhsu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_mulhu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_mulw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_div;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_divu;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_divw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_divuw;
    };
    struct {
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_remw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_remuw;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_rem;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__inst_remu;
        CData/*2:0*/ top__DOT__fslu__DOT__idu__DOT__sel_alu_src1;
        CData/*3:0*/ top__DOT__fslu__DOT__idu__DOT__sel_alu_src2;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1;
        CData/*0:0*/ top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__flag;
        CData/*4:0*/ top__DOT__fslu__DOT__exu__DOT__ex_rd_last;
        CData/*2:0*/ top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__div_over;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__stallreq_for_div;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__div_start;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__div_signed;
        CData/*1:0*/ top__DOT__fslu__DOT__exu__DOT__div_res_sel;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__sel_div_signed;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned;
        CData/*7:0*/ top__DOT__fslu__DOT__exu__DOT__bru_op;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__rs1_ueq_rs2;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward;
        CData/*6:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__cnt;
        CData/*1:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__state;
        CData/*0:0*/ top__DOT__fslu__DOT__memu__DOT__flag;
        CData/*0:0*/ top__DOT__fslu__DOT__memu__DOT__sel_rf_sel;
        CData/*7:0*/ top__DOT__fslu__DOT__memu__DOT__b_data;
        SData/*11:0*/ top__DOT__fslu__DOT__idu__DOT__alu_op;
        SData/*11:0*/ top__DOT__fslu__DOT__exu__DOT__imm_S;
        SData/*12:0*/ top__DOT__fslu__DOT__exu__DOT__imm_B;
        SData/*15:0*/ top__DOT__fslu__DOT__memu__DOT__h_data;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__if_to_id_bus;
        VlWide<10>/*290:0*/ top__DOT__fslu__DOT__id_to_ex_bus;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__br_bus;
        VlWide<3>/*69:0*/ top__DOT__fslu__DOT__ex_to_rf_bus;
        VlWide<3>/*69:0*/ top__DOT__fslu__DOT__mem_to_rf_bus;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r;
        IData/*31:0*/ top__DOT__fslu__DOT__idu__DOT__buf_inst;
        VlWide<4>/*127:0*/ top__DOT__fslu__DOT__idu__DOT__op_d;
        VlWide<4>/*127:0*/ top__DOT__fslu__DOT__idu__DOT__func7_d;
        IData/*31:0*/ top__DOT__fslu__DOT__idu__DOT__rs1_d;
        IData/*31:0*/ top__DOT__fslu__DOT__idu__DOT__rs2_d;
        IData/*31:0*/ top__DOT__fslu__DOT__idu__DOT__rd_d;
        IData/*31:0*/ top__DOT__fslu__DOT__idu__DOT__inst_i;
        VlWide<10>/*290:0*/ top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp;
        VlWide<10>/*290:0*/ top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r;
        IData/*20:0*/ top__DOT__fslu__DOT__exu__DOT__imm_J;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s;
        VlWide<4>/*127:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_result_temp;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c;
        VlWide<3>/*64:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend;
        VlWide<4>/*127:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o;
        VlWide<7>/*211:0*/ top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r;
        IData/*31:0*/ top__DOT__fslu__DOT__memu__DOT__w_data;
        VlWide<5>/*133:0*/ top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r;
        QData/*63:0*/ top__DOT__dsram_rdata;
    };
    struct {
        QData/*63:0*/ top__DOT__fslu__DOT__ifu__DOT__pc_reg;
        QData/*63:0*/ top__DOT__fslu__DOT__ifu__DOT__next_pc;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_src1;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_src2;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_result;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_data1;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_data2;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_data1_i;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_data2_i;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__bru_addr;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__real_data1;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__real_data2;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__rs1_forward_data;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__rs2_forward_data;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_ina;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__one_inb;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op1;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__temp_op2;
        QData/*63:0*/ top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp;
        QData/*63:0*/ top__DOT__fslu__DOT__memu__DOT__rf_wdata;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs;
        VlUnpacked<VlWide<5>/*128:0*/, 33> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp;
        VlUnpacked<CData/*1:0*/, 33> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code;
        VlUnpacked<VlWide<3>/*65:0*/, 32> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet;
        VlUnpacked<VlWide<3>/*64:0*/, 32> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1;
        VlUnpacked<VlWide<5>/*128:0*/, 11> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp1_s;
        VlUnpacked<VlWide<5>/*128:0*/, 30> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry;
        VlUnpacked<VlWide<5>/*128:0*/, 7> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp2_s;
        VlUnpacked<VlWide<5>/*128:0*/, 5> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp3_s;
        VlUnpacked<VlWide<5>/*128:0*/, 3> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp4_s;
        VlUnpacked<VlWide<5>/*128:0*/, 2> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp5_s;
        VlUnpacked<VlWide<5>/*128:0*/, 2> top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__temp6_s;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c;
        CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c;
    };
    struct {
        CData/*0:0*/ __Vclklast__TOP__clk;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__s;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c;
        VlWide<5>/*128:0*/ top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__s;
        VlWide<3>/*64:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c;
    };
    struct {
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c;
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c;
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c;
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c;
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c;
        VlWide<5>/*128:0*/ __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c;
        QData/*63:0*/ __Vtask_top__DOT__mem_read__0__rdata;
        VlUnpacked<VlWide<5>/*128:0*/, 30> __Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
