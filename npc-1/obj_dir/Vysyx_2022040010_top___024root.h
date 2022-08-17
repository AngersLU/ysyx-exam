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

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_2022040010_top__DOT__inst_ce;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_i;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_i;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr;
    CData/*7:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o;
    CData/*2:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o;
    CData/*7:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_aluop_i;
    CData/*2:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_alusel_i;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_rd_addr_i;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_reg_e_i;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_o;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_o;
    CData/*4:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i;
    CData/*0:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i;
    IData/*31:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg1_i;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg2_i;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_o;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i;
    QData/*63:0*/ ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm;
    VlUnpacked<QData/*63:0*/, 32> ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs;
    VlUnpacked<IData/*31:0*/, 67108864> ysyx_2022040010_top__DOT__ysyx_2022040010_inst_rom0__DOT__inst_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

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
