// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_2022040010_top.h for the primary calling header

#ifndef VERILATED_VYSYX_2022040010_TOP___024ROOT_H_
#define VERILATED_VYSYX_2022040010_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_2022040010_top__Syms;

//----------

VL_MODULE(Vysyx_2022040010_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(isram_e,0,0);
    VL_OUT8(dsram_e,0,0);
    VL_OUT8(dsram_we,0,0);
    VL_IN(isram_rdata,31,0);
    VL_OUT64(isram_addr,63,0);
    VL_OUT64(dsram_addr,63,0);
    VL_OUT64(dsram_wdata,63,0);
    VL_IN64(dsram_rdata,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__ce;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__flag;
        CData/*7:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw;
    };
    struct {
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu;
        CData/*2:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1;
        CData/*3:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2;
        CData/*7:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward;
        CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward;
        SData/*11:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op;
        VlWide<5>/*147:0*/ ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus;
        VlWide<3>/*69:0*/ ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus;
        VlWide<3>/*69:0*/ ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus;
        IData/*31:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__buf_inst;
        VlWide<4>/*127:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d;
        VlWide<4>/*127:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d;
        IData/*31:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i;
        VlWide<10>/*290:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r;
        VlWide<3>/*64:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina;
        VlWide<3>/*64:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb;
        VlWide<3>/*64:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c;
        VlWide<3>/*64:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s;
        VlWide<5>/*133:0*/ ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__next_pc;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res;
        QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata;
        VlUnpacked<QData/*63:0*/, 32> ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<3>/*64:0*/ __Vchglast__TOP__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c;

    // INTERNAL VARIABLES
    Vysyx_2022040010_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_2022040010_top___024root);  ///< Copying not allowed
  public:
    Vysyx_2022040010_top___024root(const char* name);
    ~Vysyx_2022040010_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_2022040010_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
