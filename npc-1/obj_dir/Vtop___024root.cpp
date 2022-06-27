// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    QData/*63:0*/ __Vdly__top__DOT__fsl0__DOT__ex_reg1_i;
    QData/*63:0*/ __Vdly__top__DOT__fsl0__DOT__ex_reg2_i;
    // Body
    __Vdlyvset__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 = 0U;
    __Vdly__top__DOT__fsl0__DOT__ex_reg2_i = vlSelf->top__DOT__fsl0__DOT__ex_reg2_i;
    __Vdly__top__DOT__fsl0__DOT__ex_reg1_i = vlSelf->top__DOT__fsl0__DOT__ex_reg1_i;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_reg_e_i) 
                         & (0U != (IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i))))) {
            VL_WRITEF("rd = %x\n",64,vlSelf->top__DOT__fsl0__DOT__wb_w_data_i);
            __Vdlyvval__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 
                = vlSelf->top__DOT__fsl0__DOT__wb_w_data_i;
            __Vdlyvset__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 = 1U;
            __Vdlyvdim0__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 
                = vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i;
        }
    }
    vlSelf->top__DOT__fsl0__DOT__id_inst_i = ((IData)(vlSelf->rst)
                                               ? 0U
                                               : ((IData)(vlSelf->top__DOT__inst_ce)
                                                   ? 
                                                  vlSelf->top__DOT__inst_rom0__DOT__inst_mem
                                                  [0U]
                                                   : 0U));
    vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_i = ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->top__DOT__fsl0__DOT__ex_w_reg_e_i));
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_i = 0U;
        vlSelf->top__DOT__fsl0__DOT__mem_w_data_i = 0ULL;
    } else {
        vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_i 
            = vlSelf->top__DOT__fsl0__DOT__ex_w_rd_addr_i;
        vlSelf->top__DOT__fsl0__DOT__mem_w_data_i = 
            ((1U == (IData)(vlSelf->top__DOT__fsl0__DOT__ex_alusel_i))
              ? ((IData)(vlSelf->rst) ? 0ULL : ((0x25U 
                                                 == (IData)(vlSelf->top__DOT__fsl0__DOT__ex_aluop_i))
                                                 ? 
                                                (vlSelf->top__DOT__fsl0__DOT__ex_reg1_i 
                                                 + vlSelf->top__DOT__fsl0__DOT__ex_reg2_i)
                                                 : 0ULL))
              : 0ULL);
    }
    vlSelf->top__DOT__inst_ce = (1U & (~ (IData)(vlSelf->rst)));
    if (VL_LIKELY(vlSelf->rst)) {
        vlSelf->top__DOT__fsl0__DOT__ex_aluop_i = 0U;
        vlSelf->top__DOT__fsl0__DOT__ex_alusel_i = 0U;
        __Vdly__top__DOT__fsl0__DOT__ex_reg1_i = 0ULL;
        __Vdly__top__DOT__fsl0__DOT__ex_reg2_i = 0ULL;
        vlSelf->top__DOT__fsl0__DOT__ex_w_rd_addr_i = 0U;
        vlSelf->top__DOT__fsl0__DOT__ex_w_reg_e_i = 0U;
    } else {
        VL_WRITEF("src1 = %x\n",64,vlSelf->top__DOT__fsl0__DOT__ex_reg1_i);
        vlSelf->top__DOT__fsl0__DOT__ex_aluop_i = vlSelf->top__DOT__fsl0__DOT__id_aluop_o;
        vlSelf->top__DOT__fsl0__DOT__ex_alusel_i = vlSelf->top__DOT__fsl0__DOT__id_alusel_o;
        VL_WRITEF("src2 = %x\n",64,vlSelf->top__DOT__fsl0__DOT__ex_reg2_i);
        vlSelf->top__DOT__fsl0__DOT__ex_w_rd_addr_i 
            = vlSelf->top__DOT__fsl0__DOT__id_w_rd_addr_o;
        vlSelf->top__DOT__fsl0__DOT__ex_w_reg_e_i = vlSelf->top__DOT__fsl0__DOT__id_w_reg_e_o;
        if (vlSelf->rst) {
            __Vdly__top__DOT__fsl0__DOT__ex_reg1_i = 0ULL;
            __Vdly__top__DOT__fsl0__DOT__ex_reg2_i = 0ULL;
        } else {
            __Vdly__top__DOT__fsl0__DOT__ex_reg1_i 
                = ((IData)(vlSelf->top__DOT__fsl0__DOT__reg1_read_e)
                    ? ((IData)(vlSelf->rst) ? 0ULL : 
                       ((0U == (IData)(vlSelf->top__DOT__fsl0__DOT__reg1_addr))
                         ? 0ULL : (((((IData)(vlSelf->top__DOT__fsl0__DOT__reg1_addr) 
                                      == (IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i)) 
                                     & (IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_reg_e_i)) 
                                    & (IData)(vlSelf->top__DOT__fsl0__DOT__reg1_read_e))
                                    ? vlSelf->top__DOT__fsl0__DOT__wb_w_data_i
                                    : ((IData)(vlSelf->top__DOT__fsl0__DOT__reg1_read_e)
                                        ? vlSelf->top__DOT__fsl0__DOT__regfile1__DOT__regs
                                       [vlSelf->top__DOT__fsl0__DOT__reg1_addr]
                                        : 0ULL)))) : 
                   ((IData)(vlSelf->top__DOT__fsl0__DOT__reg1_read_e)
                     ? 0ULL : vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm));
            __Vdly__top__DOT__fsl0__DOT__ex_reg2_i 
                = ((IData)(vlSelf->top__DOT__fsl0__DOT__reg2_read_e)
                    ? ((IData)(vlSelf->rst) ? 0ULL : 
                       ((0U == (IData)(vlSelf->top__DOT__fsl0__DOT__reg2_addr))
                         ? 0ULL : (((((IData)(vlSelf->top__DOT__fsl0__DOT__reg2_addr) 
                                      == (IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i)) 
                                     & (IData)(vlSelf->top__DOT__fsl0__DOT__wb_w_reg_e_i)) 
                                    & (IData)(vlSelf->top__DOT__fsl0__DOT__reg2_read_e))
                                    ? vlSelf->top__DOT__fsl0__DOT__wb_w_data_i
                                    : ((IData)(vlSelf->top__DOT__fsl0__DOT__reg2_read_e)
                                        ? vlSelf->top__DOT__fsl0__DOT__regfile1__DOT__regs
                                       [vlSelf->top__DOT__fsl0__DOT__reg2_addr]
                                        : 0ULL)))) : 
                   ((IData)(vlSelf->top__DOT__fsl0__DOT__reg2_read_e)
                     ? 0ULL : vlSelf->top__DOT__fsl0__DOT__id0__DOT__imm));
        }
    }
    vlSelf->top__DOT__fsl0__DOT__ex_reg1_i = __Vdly__top__DOT__fsl0__DOT__ex_reg1_i;
    vlSelf->top__DOT__fsl0__DOT__ex_reg2_i = __Vdly__top__DOT__fsl0__DOT__ex_reg2_i;
    if (__Vdlyvset__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0) {
        vlSelf->top__DOT__fsl0__DOT__regfile1__DOT__regs[__Vdlyvdim0__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    }
    vlSelf->top__DOT__fsl0__DOT__wb_w_rd_addr_i = ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_o));
    vlSelf->top__DOT__fsl0__DOT__wb_w_reg_e_i = ((~ (IData)(vlSelf->rst)) 
                                                 & (IData)(vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_o));
    vlSelf->top__DOT__fsl0__DOT__wb_w_data_i = ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : vlSelf->top__DOT__fsl0__DOT__mem_w_data_o);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__4\n"); );
    // Body
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 0U;
        if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->top__DOT__fsl0__DOT__reg1_read_e = 1U;
        }
    }
    vlSelf->top__DOT__fsl0__DOT__reg1_addr = ((IData)(vlSelf->rst)
                                               ? 0U
                                               : (0x1fU 
                                                  & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                                                     >> 0xfU)));
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
        vlSelf->top__DOT__fsl0__DOT__reg2_read_e = 0U;
    } else if ((0x13U == (0x7fU & vlSelf->top__DOT__fsl0__DOT__id_inst_i))) {
        vlSelf->top__DOT__fsl0__DOT__reg2_read_e = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fsl0__DOT__reg2_addr = 0U;
        vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_o = 0U;
    } else {
        vlSelf->top__DOT__fsl0__DOT__reg2_addr = (0x1fU 
                                                  & (vlSelf->top__DOT__fsl0__DOT__id_inst_i 
                                                     >> 0xfU));
        vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_o 
            = vlSelf->top__DOT__fsl0__DOT__mem_w_rd_addr_i;
    }
    vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_o = ((~ (IData)(vlSelf->rst)) 
                                                  & (IData)(vlSelf->top__DOT__fsl0__DOT__mem_w_reg_e_i));
    vlSelf->top__DOT__fsl0__DOT__mem_w_data_o = ((IData)(vlSelf->rst)
                                                  ? 0ULL
                                                  : vlSelf->top__DOT__fsl0__DOT__mem_w_data_i);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
    }
    Vtop___024root___combo__TOP__4(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
