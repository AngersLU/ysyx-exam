// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest___024root.h"
#include "Vtest__Syms.h"

//==========


void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf);

Vtest___024root::Vtest___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtest___024root___ctor_var_reset(this);
}

void Vtest___024root::__Vconfigure(Vtest__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtest___024root::~Vtest___024root() {
}

void Vtest___024root___initial__TOP__1(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp2;
    // Body
    vlSelf->test__DOT__CLK_50 = 0U;
    while (1U) {
        vlSelf->test__DOT__CLK_50 = (1U & (~ (IData)(vlSelf->test__DOT__CLK_50)));
    }
    __Vtemp2[0U] = 0x64617461U;
    __Vtemp2[1U] = 0x726f6d2eU;
    __Vtemp2[2U] = 0x6e73745fU;
    __Vtemp2[3U] = 0x69U;
    VL_READMEM_N(true, 32, 131071, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 ,  &(vlSelf->test__DOT__top__DOT__inst_rom0__DOT__inst_mem)
                 , 0, ~0ULL);
    vlSelf->test__DOT__rst = 1U;
    VL_FINISH_MT("/home/lff/ysyx-workbench/npc-1/vsrc/test.v", 18, "");
}

void Vtest___024root___settle__TOP__3(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___settle__TOP__3\n"); );
    // Body
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm 
                = (QData)((IData)((vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                                   >> 0x14U)));
        }
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_addr 
        = ((IData)(vlSelf->test__DOT__rst) ? 0U : (0x1fU 
                                                   & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                                                      >> 0xfU)));
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e = 0U;
    } else if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e = 0U;
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e = 0U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e = 1U;
        }
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 1U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 0U;
        }
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0x25U;
        }
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o = 0U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o = 1U;
        }
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o 
            = (0x1fU & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                        >> 7U));
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o 
                = (0x1fU & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                            >> 7U));
        }
    }
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_o = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_o = 0U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_o = 1U;
        }
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o 
        = ((~ (IData)(vlSelf->test__DOT__rst)) & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i));
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o = 0ULL;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2 = 0ULL;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2 
            = ((0U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2))
                ? 0ULL : (((((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2) 
                             == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i)) 
                            & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i)) 
                           & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2))
                           ? vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i
                           : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2)
                               ? vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs
                              [vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2]
                               : 0ULL)));
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr 
            = (0x1fU & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                        >> 0xfU));
        vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data 
            = ((0U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr))
                ? 0ULL : (((((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr) 
                             == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i)) 
                            & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i)) 
                           & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read))
                           ? vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i
                           : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read)
                               ? vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs
                              [vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr]
                               : 0ULL)));
    }
}

void Vtest___024root___eval_initial(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_initial\n"); );
    // Body
    Vtest___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__test__DOT__CLK_50 = vlSelf->test__DOT__CLK_50;
}

void Vtest___024root___eval_settle(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_settle\n"); );
    // Body
    Vtest___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtest___024root___final(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___final\n"); );
}

void Vtest___024root___ctor_var_reset(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->test__DOT__CLK_50 = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__inst_ce = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_pc_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_data = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_data = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT____Vcellout__id0__w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_o = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_i = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__re2 = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__raddr2 = VL_RAND_RESET_I(5);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->test__DOT__top__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
