// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest___024root.h"
#include "Vtest__Syms.h"

//==========

VL_INLINE_OPT void Vtest___024root___sequent__TOP__2(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    QData/*63:0*/ __Vdly__test__DOT__top__DOT__fsl0__DOT__pc;
    QData/*63:0*/ __Vdlyvval__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    // Body
    __Vdly__test__DOT__top__DOT__fsl0__DOT__pc = vlSelf->test__DOT__top__DOT__fsl0__DOT__pc;
    __Vdlyvset__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 = 0U;
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_data_i = 0ULL;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr_i = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_pc_i = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_data_i 
            = (QData)((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data));
        vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_rd_addr_i 
            = ((IData)(vlSelf->test__DOT__rst) ? 0U
                : (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_i));
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_pc_i 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__pc;
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_w_reg_e_i 
        = ((~ (IData)(vlSelf->test__DOT__rst)) & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o));
    __Vdly__test__DOT__top__DOT__fsl0__DOT__pc = ((IData)(vlSelf->test__DOT__top__DOT__inst_ce)
                                                   ? 
                                                  (4ULL 
                                                   + vlSelf->test__DOT__top__DOT__fsl0__DOT__pc)
                                                   : 0ULL);
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_rd_addr_i 
        = ((IData)(vlSelf->test__DOT__rst) ? 0U : (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i));
    if ((1U & (~ (IData)(vlSelf->test__DOT__rst)))) {
        if (VL_UNLIKELY(((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i) 
                         & (0U != (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i))))) {
            VL_WRITEF("r1 = %b\n",64,vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data);
            __Vdlyvval__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 
                = vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i;
            __Vdlyvset__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 = 1U;
            __Vdlyvdim0__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0 
                = vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i;
            VL_WRITEF("imm = %b\nrd = %b\n",64,vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2,
                      64,vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i);
        }
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i 
        = ((~ (IData)(vlSelf->test__DOT__rst)) & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_reg_e_i));
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
            = ((IData)(vlSelf->test__DOT__top__DOT__inst_ce)
                ? ((0x1fffeU >= (0x1ffffU & (IData)(
                                                    (vlSelf->test__DOT__top__DOT__fsl0__DOT__pc 
                                                     >> 2U))))
                    ? vlSelf->test__DOT__top__DOT__inst_rom0__DOT__inst_mem
                   [(0x1ffffU & (IData)((vlSelf->test__DOT__top__DOT__fsl0__DOT__pc 
                                         >> 2U)))] : 0U)
                : 0U);
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i 
            = ((1U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i))
                ? ((IData)(vlSelf->test__DOT__rst) ? 0ULL
                    : ((0x25U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i))
                        ? (vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i 
                           + vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i)
                        : 0ULL)) : 0ULL);
    }
    if (__Vdlyvset__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs[__Vdlyvdim0__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0] 
            = __Vdlyvval__test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs__v0;
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__pc = __Vdly__test__DOT__top__DOT__fsl0__DOT__pc;
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__rdata2 = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_rd_addr_i 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_rd_addr_o;
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
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_o 
        = ((~ (IData)(vlSelf->test__DOT__rst)) & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_reg_e_i));
    vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_w_reg_e_i 
        = ((~ (IData)(vlSelf->test__DOT__rst)) & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__id_w_reg_e_o));
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_addr 
        = ((IData)(vlSelf->test__DOT__rst) ? 0U : (0x1fU 
                                                   & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                                                      >> 0xfU)));
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 1U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__inst_valid = 0U;
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
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr 
        = ((IData)(vlSelf->test__DOT__rst) ? 0U : (0x1fU 
                                                   & (vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                                                      >> 0xfU)));
    vlSelf->test__DOT__top__DOT__inst_ce = (1U & (~ (IData)(vlSelf->test__DOT__rst)));
    if (vlSelf->test__DOT__rst) {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o = 0ULL;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i = 0U;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i = 0ULL;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_o 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__mem_w_data_i;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_alusel_i 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__id_alusel_o;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_aluop_i 
            = vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o;
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg2_i 
            = ((IData)(vlSelf->test__DOT__rst) ? 0ULL
                : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e)
                    ? vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_data
                    : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg2_read_e)
                        ? 0ULL : vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm)));
        vlSelf->test__DOT__top__DOT__fsl0__DOT__ex_reg1_i 
            = ((IData)(vlSelf->test__DOT__rst) ? 0ULL
                : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e)
                    ? vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data
                    : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read_e)
                        ? 0ULL : vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm)));
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
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0U;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0U;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id_aluop_o = 0x25U;
        }
    }
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
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
    } else {
        vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm = 0ULL;
        if ((0x25U == (0x7fU & vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i))) {
            vlSelf->test__DOT__top__DOT__fsl0__DOT__id0__DOT__imm 
                = (QData)((IData)((vlSelf->test__DOT__top__DOT__fsl0__DOT__id_inst_i 
                                   >> 0x14U)));
        }
    }
    vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_data 
        = ((IData)(vlSelf->test__DOT__rst) ? 0ULL : 
           ((0U == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr))
             ? 0ULL : (((((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr) 
                          == (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wd_i)) 
                         & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wreg_i)) 
                        & (IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read))
                        ? vlSelf->test__DOT__top__DOT__fsl0__DOT__wb_wdata_i
                        : ((IData)(vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_read)
                            ? vlSelf->test__DOT__top__DOT__fsl0__DOT__regfile1__DOT__regs
                           [vlSelf->test__DOT__top__DOT__fsl0__DOT__reg1_addr]
                            : 0ULL))));
}

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->test__DOT__CLK_50) & (~ (IData)(vlSelf->__Vclklast__TOP__test__DOT__CLK_50)))) {
        Vtest___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__test__DOT__CLK_50 = vlSelf->test__DOT__CLK_50;
}

QData Vtest___024root___change_request_1(Vtest___024root* vlSelf);

VL_INLINE_OPT QData Vtest___024root___change_request(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___change_request\n"); );
    // Body
    return (Vtest___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtest___024root___change_request_1(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
