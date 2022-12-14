// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__inst_ce;
    CData/*4:0*/ top__DOT__fsl0__DOT__mem_w_rd_addr_i;
    CData/*0:0*/ top__DOT__fsl0__DOT__mem_w_reg_e_i;
    CData/*0:0*/ top__DOT__fsl0__DOT__reg1_read_e;
    CData/*0:0*/ top__DOT__fsl0__DOT__reg2_read_e;
    CData/*4:0*/ top__DOT__fsl0__DOT__reg1_addr;
    CData/*4:0*/ top__DOT__fsl0__DOT__reg2_addr;
    CData/*7:0*/ top__DOT__fsl0__DOT__id_aluop_o;
    CData/*2:0*/ top__DOT__fsl0__DOT__id_alusel_o;
    CData/*4:0*/ top__DOT__fsl0__DOT__id_w_rd_addr_o;
    CData/*0:0*/ top__DOT__fsl0__DOT__id_w_reg_e_o;
    CData/*7:0*/ top__DOT__fsl0__DOT__ex_aluop_i;
    CData/*2:0*/ top__DOT__fsl0__DOT__ex_alusel_i;
    CData/*4:0*/ top__DOT__fsl0__DOT__ex_w_rd_addr_i;
    CData/*0:0*/ top__DOT__fsl0__DOT__ex_w_reg_e_i;
    CData/*4:0*/ top__DOT__fsl0__DOT__mem_w_rd_addr_o;
    CData/*0:0*/ top__DOT__fsl0__DOT__mem_w_reg_e_o;
    CData/*4:0*/ top__DOT__fsl0__DOT__wb_w_rd_addr_i;
    CData/*0:0*/ top__DOT__fsl0__DOT__wb_w_reg_e_i;
    IData/*31:0*/ top__DOT__fsl0__DOT__id_inst_i;
    QData/*63:0*/ top__DOT__fsl0__DOT__mem_w_data_i;
    QData/*63:0*/ top__DOT__fsl0__DOT__ex_reg1_i;
    QData/*63:0*/ top__DOT__fsl0__DOT__ex_reg2_i;
    QData/*63:0*/ top__DOT__fsl0__DOT__mem_w_data_o;
    QData/*63:0*/ top__DOT__fsl0__DOT__wb_w_data_i;
    QData/*63:0*/ top__DOT__fsl0__DOT__id0__DOT__imm;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__fsl0__DOT__regfile1__DOT__regs;
    VlUnpacked<IData/*31:0*/, 131071> top__DOT__inst_rom0__DOT__inst_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

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
