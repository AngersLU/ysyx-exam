// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtest__Syms;
class Vtest_VerilatedVcd;


//----------

VL_MODULE(Vtest___024root) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ test__DOT__CLK_50;
    CData/*0:0*/ test__DOT__rst;
    CData/*0:0*/ test__DOT__top__DOT__inst_ce;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_rd_addr_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__reg1_read_e;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__reg2_read_e;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__reg1_addr;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__reg2_addr;
    CData/*7:0*/ test__DOT__top__DOT__fsl0__DOT__id_aluop_o;
    CData/*2:0*/ test__DOT__top__DOT__fsl0__DOT__id_alusel_o;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__id_w_rd_addr_o;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__id_w_reg_e_o;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__wb_wreg_i;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__wb_wd_i;
    CData/*7:0*/ test__DOT__top__DOT__fsl0__DOT__ex_aluop_i;
    CData/*2:0*/ test__DOT__top__DOT__fsl0__DOT__ex_alusel_i;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__ex_w_reg_e_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__id_w_reg_o;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__reg1_read;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_rd_i;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_data;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid;
    CData/*0:0*/ test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2;
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2;
    IData/*31:0*/ test__DOT__top__DOT__fsl0__DOT__id_inst_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__pc;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__id_pc_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_data_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__reg1_data;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__reg2_data;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__wb_wdata_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__ex_reg1_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__ex_reg2_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__mem_w_data_o;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_data;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__wb_w_data_i;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm;
    QData/*63:0*/ test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2;
    VlUnpacked<QData/*63:0*/, 32> test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs;
    VlUnpacked<IData/*31:0*/, 131071> test__DOT__top__DOT__inst_rom0__DOT__inst_mem;

    // LOCAL VARIABLES
    CData/*4:0*/ test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o;
    CData/*0:0*/ __Vclklast__TOP__test__DOT__CLK_50;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest___024root);  ///< Copying not allowed
  public:
    Vtest___024root(const char* name);
    ~Vtest___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
