// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_2022040010_top.h for the primary calling header

#include "Vysyx_2022040010_top___024root.h"
#include "Vysyx_2022040010_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

VL_INLINE_OPT void Vysyx_2022040010_top___024root___sequent__TOP__1(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0;
    QData/*63:0*/ __Vdly__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc;
    QData/*63:0*/ __Vdlyvval__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0;
    // Body
    __Vdly__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc 
        = vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc;
    __Vdlyvset__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0 = 0U;
    __Vdly__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__inst_ce)
            ? (4ULL + vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc)
            : 0x80000000ULL);
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_i 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_reg_e_i));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_i 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_rd_addr_i));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i) 
                         & (0U != (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i))))) {
            VL_WRITEF("rd = %x\n",64,vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i);
            __Vdlyvval__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0 
                = vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i;
            __Vdlyvset__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0 = 1U;
            __Vdlyvdim0__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0 
                = vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i = 0U;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i = 0ULL;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
            = ((IData)(vlSelf->ysyx_2022040010_top__DOT__inst_ce)
                ? vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_inst_rom0__DOT__inst_mem
               [(0x3ffffffU & (IData)((vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc 
                                       >> 2U)))] : 0U);
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i 
            = ((1U == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_alusel_i))
                ? ((IData)(vlSelf->rst) ? 0ULL : ((0x25U 
                                                   == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_aluop_i))
                                                   ? 
                                                  (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg1_i 
                                                   + vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg2_i)
                                                   : 0ULL))
                : 0ULL);
    }
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc 
        = __Vdly__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__pc;
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_reg_e_i 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_w_rd_addr_i 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_rd_addr_o));
    vlSelf->ysyx_2022040010_top__DOT__inst_ce = (1U 
                                                 & (~ (IData)(vlSelf->rst)));
    if ((0x100073U == vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i)) {
        Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__ebreak_TOP();
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_alusel_i = 0U;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_aluop_i = 0U;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg1_i = 0ULL;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg2_i = 0ULL;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_alusel_i 
            = vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_aluop_i 
            = vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_aluop_o;
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg1_i 
            = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e)
                                               ? ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr))
                                                    ? 0ULL
                                                    : 
                                                   (((((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr) 
                                                       == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i)) 
                                                      & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i)) 
                                                     & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e))
                                                     ? vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i
                                                     : 
                                                    ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e)
                                                      ? 
                                                     vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs
                                                     [vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr]
                                                      : 0ULL))))
                                               : ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm)));
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ex_reg2_i 
            = ((IData)(vlSelf->rst) ? 0ULL : ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e)
                                               ? ((IData)(vlSelf->rst)
                                                   ? 0ULL
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr))
                                                    ? 0ULL
                                                    : 
                                                   (((((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr) 
                                                       == (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i)) 
                                                      & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i)) 
                                                     & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e))
                                                     ? vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i
                                                     : 
                                                    ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e)
                                                      ? 
                                                     vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs
                                                     [vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr]
                                                      : 0ULL))))
                                               : ((IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e)
                                                   ? 0ULL
                                                   : vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_id0__DOT__imm)));
    }
    if (__Vdlyvset__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs[__Vdlyvdim0__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0] 
            = __Vdlyvval__ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__ysyx_2022040010_regfile1__DOT__regs__v0;
    }
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_rd_addr_i 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_o));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_reg_e_i 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_o));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__wb_w_data_i 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_o);
}

VL_INLINE_OPT void Vysyx_2022040010_top___024root___combo__TOP__4(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___combo__TOP__4\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_w_reg_e_o = 1U;
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
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_alusel_o = 1U;
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
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 0U;
    } else {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 0U;
        if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
            vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_read_e = 1U;
        }
    }
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg1_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                                                 >> 0xfU)));
    if (vlSelf->rst) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i))) {
        vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_read_e = 0U;
    }
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__reg2_addr 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__id_inst_i 
                                                 >> 0xfU)));
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
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_o 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_rd_addr_i));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_o 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_reg_e_i));
    vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_o 
        = ((IData)(vlSelf->rst) ? 0ULL : vlSelf->ysyx_2022040010_top__DOT__ysyx_2022040010_fsl0__DOT__mem_w_data_i);
}

void Vysyx_2022040010_top___024root___eval(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_2022040010_top___024root___sequent__TOP__1(vlSelf);
    }
    Vysyx_2022040010_top___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_2022040010_top___024root___change_request_1(Vysyx_2022040010_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_2022040010_top___024root___change_request(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___change_request\n"); );
    // Body
    return (Vysyx_2022040010_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_2022040010_top___024root___change_request_1(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_2022040010_top___024root___eval_debug_assertions(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
