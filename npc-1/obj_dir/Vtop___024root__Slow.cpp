// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x64617461U;
    __Vtemp1[1U] = 0x726f6d2eU;
    __Vtemp1[2U] = 0x6e73745fU;
    __Vtemp1[3U] = 0x69U;
    VL_READMEM_N(true, 32, 131071, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 ,  &(vlSelf->top__DOT__inst_rom0__DOT__inst_mem)
                 , 0, ~0ULL);
    VL_WRITEF("%x\n",32,vlSelf->top__DOT__inst_rom0__DOT__inst_mem
              [0U]);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
    } else {
        vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm 
                = (QData)((IData)((vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                                   >> 0x14U)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__reg2_addr = 0U;
        vlSelf->top__DOT__fsl0__DOT__reg1_addr = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__reg2_addr = (0x1fU 
                                                  & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                                                     >> 0xfU));
        vlSelf->top__DOT__fsl0__DOT__reg1_addr = (0x1fU 
                                                  & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                                                     >> 0xfU));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__reg2_read_e = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
        vlSelf->top__DOT__fsl0__DOT__reg2_read_e = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 0U;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__id_aluop_o = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__id_aluop_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__id_aluop_o = 0x25U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__id_alusel_o = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__id_alusel_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__id_alusel_o = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__id_w_rd_addr_o = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__id_w_rd_addr_o 
            = (0x1fU & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                        >> 7U));
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__id_w_rd_addr_o 
                = (0x1fU & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                            >> 7U));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__id_w_reg_e_o = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__id_w_reg_e_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__id_w_reg_e_o = 1U;
        }
    }
    vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_o = 
        ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_i));
    vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_o = ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_i));
    vlSelf->top__DOT__fsl0__DOT__mem_w_data_o = ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : vlSelf->top__DOT__fsl0__DOT__mem_w_data_i);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__2(vlSelf);
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst_ce = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__mem_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fsl0__DOT__reg1_read_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__reg2_read_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__fsl0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__fsl0__DOT__id_w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__id_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__fsl0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__fsl0__DOT__ex_reg1_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fsl0__DOT__ex_reg2_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fsl0__DOT__ex_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__ex_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__mem_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__fsl0__DOT__wb_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__fsl0__DOT__wb_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__fsl0__DOT__regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<131071; ++__Vi0) {
        vlSelf->top__DOT__inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
