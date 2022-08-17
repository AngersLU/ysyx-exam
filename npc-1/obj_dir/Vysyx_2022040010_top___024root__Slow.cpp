// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_2022040010_top.h for the primary calling header

#include "Vysyx_2022040010_top___024root.h"
#include "Vysyx_2022040010_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_2022040010_top___024root___ctor_var_reset(Vysyx_2022040010_top___024root* vlSelf);

Vysyx_2022040010_top___024root::Vysyx_2022040010_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_2022040010_top___024root___ctor_var_reset(this);
}

void Vysyx_2022040010_top___024root::__Vconfigure(Vysyx_2022040010_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_2022040010_top___024root::~Vysyx_2022040010_top___024root() {
}

void Vysyx_2022040010_top___024root___initial__TOP__2(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___initial__TOP__2\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x64617461U;
    __Vtemp1[1U] = 0x726f6d2eU;
    __Vtemp1[2U] = 0x6e73745fU;
    __Vtemp1[3U] = 0x69U;
    VL_READMEM_N(true, 32, 67108864, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 ,  &(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_inst_rom0__DOT__inst_mem)
                 , 0, ~0ULL);
    VL_WRITEF("%x\n",32,vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_inst_rom0__DOT__inst_mem
              [0U]);
}

void Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__ebreak_TOP();

void Vysyx_2022040010_top___024root___settle__TOP__3(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___settle__TOP__3\n"); );
    // Body
    if ((0x100073U == vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i)) {
        Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__ebreak_TOP();
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm = 0ULL;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm = 0ULL;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm 
                = (QData)((IData)((vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                                   >> 0x14U)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr = 0U;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr 
            = (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                        >> 0xfU));
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr 
            = (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                        >> 0xfU));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o = 0x25U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o 
            = (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                        >> 7U));
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o 
                = (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                            >> 7U));
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 1U;
        }
    }
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_o 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_i));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_o 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_i));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_o 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i);
}

void Vysyx_2022040010_top___024root___eval_initial(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vysyx_2022040010_top___024root___initial__TOP__2(vlSelf);
}

void Vysyx_2022040010_top___024root___eval_settle(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___eval_settle\n"); );
    // Body
    Vysyx_2022040010_top___024root___settle__TOP__3(vlSelf);
}

void Vysyx_2022040010_top___024root___final(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___final\n"); );
}

void Vysyx_2022040010_top___024root___ctor_var_reset(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__inst_ce = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o = VL_RAND_RESET_I(8);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = VL_RAND_RESET_I(3);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_aluop_i = VL_RAND_RESET_I(8);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_alusel_i = VL_RAND_RESET_I(3);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg1_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg2_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_o = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_o = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i = VL_RAND_RESET_I(1);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<67108864; ++__Vi0) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_inst_rom0__DOT__inst_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
