// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest.h for the primary calling header

#include "Vtest___024root.h"
#include "Vtest__Syms.h"

#include "verilated_dpi.h"

void Vtest___024root____Vdpiimwrap_top__DOT__mem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtest___024root____Vdpiimwrap_top__DOT__mem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);
extern const VlWide<10>/*319:0*/ Vtest__ConstPool__CONST_6a3c0088_0;

VL_INLINE_OPT void Vtest___024root___combo__TOP__15(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___combo__TOP__15\n"); );
    // Variables
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c;
    CData/*0:0*/ top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c;
    VlWide<3>/*95:0*/ __Vtemp2320;
    VlWide<3>/*95:0*/ __Vtemp2321;
    VlWide<3>/*95:0*/ __Vtemp2323;
    VlWide<3>/*95:0*/ __Vtemp2327;
    VlWide<3>/*95:0*/ __Vtemp2329;
    VlWide<3>/*95:0*/ __Vtemp2331;
    VlWide<3>/*95:0*/ __Vtemp2336;
    VlWide<5>/*159:0*/ __Vtemp2338;
    VlWide<4>/*127:0*/ __Vtemp2344;
    // Body
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i = 
        ((1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U])
          ? ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__flag)
              ? vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst
              : vlSelf->isram_rdata) : 0U);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 1U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start = 0U;
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start = 0U;
        if ((2U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start 
                = (1U & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)));
        } else if ((1U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_start 
                = (1U & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 = 0ULL;
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 = 0ULL;
        if ((2U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 
                = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
        } else if ((1U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 
                = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 = 0ULL;
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 = 0ULL;
        if ((2U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 
                = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
        } else if ((1U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 
                = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                    ? ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)
                        ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                        : 0ULL) : (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = 0U;
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = 0U;
        if ((2U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div 
                = (1U & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over)));
        } else if ((1U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            if (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over) {
                if (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_over) {
                    vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = 0U;
                }
            } else {
                vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div = 1U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
        if ((2U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                     << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = 1U;
        } else if ((1U == (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed) 
                            << 1U) | (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned)))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed = 0U;
        }
    }
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 1U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 2U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 3U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 4U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 5U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 6U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 7U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 8U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 9U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xaU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xbU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xcU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xdU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xeU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xfU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x10U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x11U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x12U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x13U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x14U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x15U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x16U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x17U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x18U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x19U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1aU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1bU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1cU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1dU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1eU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c 
        = (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
           >> 0x1fU);
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 1U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 2U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 3U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 4U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 5U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 6U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 7U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 8U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 9U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xaU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xbU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xcU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xdU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xeU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xfU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x10U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x11U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x12U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x13U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x14U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x15U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x16U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x17U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x18U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x19U));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1aU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1bU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1cU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1dU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1eU));
    top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c 
        = (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (1U & ((((((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                        & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | (((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                     | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                         & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                        & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (2U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 1U)) << 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (4U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 2U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 2U)) << 2U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (8U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 3U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 3U)) << 3U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 4U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 6U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 7U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 8U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 9U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xaU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xbU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xcU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xdU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xeU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xfU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (1U & ((((((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                        & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | (((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                     | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                         & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                        & (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (2U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 1U)) << 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (4U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 2U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 2U)) << 2U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (8U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 3U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 3U)) << 3U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 4U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 6U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 7U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 8U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 9U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xaU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xbU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xcU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xdU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xeU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xfU)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffdfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffbfffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xff7fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfeffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfdffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfbffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xf7ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xefffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xdfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000000U & (((((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((2U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0xfU))) << 2U) | (
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xfU))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xfU))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((5U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0xfU))) << 5U) | (
                                                   ((4U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xfU))) 
                                                    << 4U) 
                                                   | ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                           >> 0xfU))) 
                                                      << 3U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((8U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0xfU))) << 8U) | (
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xfU))) 
                                                    << 7U) 
                                                   | ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                           >> 0xfU))) 
                                                      << 6U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0xbU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0xfU))) << 0xbU) 
            | (((0xaU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0xaU) 
               | ((9U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 9U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0xeU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0xfU))) << 0xeU) 
            | (((0xdU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0xdU) 
               | ((0xcU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 0xcU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x11U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x11U) 
            | (((0x10U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0xfU))) << 0x10U) 
               | ((0xfU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0xfU))) << 0xfU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x14U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x14U) 
            | (((0x13U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0xfU))) << 0x13U) 
               | ((0x12U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x12U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x17U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x17U) 
            | (((0x16U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0xfU))) << 0x16U) 
               | ((0x15U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x15U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x1aU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x1aU) 
            | (((0x19U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0xfU))) << 0x19U) 
               | ((0x18U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x18U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x1dU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x1dU) 
            | (((0x1cU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0xfU))) << 0x1cU) 
               | ((0x1bU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0xfU))) << 0x1bU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d = 
        ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs1_d) 
         | (((0x1fU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0xfU))) << 0x1fU) 
            | ((0x1eU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0xfU))) << 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((2U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0x14U))) << 2U) | 
            (((1U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                               >> 0x14U))) << 1U) | 
             (0U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0x14U))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((5U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0x14U))) << 5U) | 
            (((4U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                               >> 0x14U))) << 4U) | 
             ((3U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                               >> 0x14U))) << 3U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((8U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                              >> 0x14U))) << 8U) | 
            (((7U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                               >> 0x14U))) << 7U) | 
             ((6U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                               >> 0x14U))) << 6U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0xbU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0x14U))) << 0xbU) 
            | (((0xaU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0xaU) 
               | ((9U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 9U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0xeU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                >> 0x14U))) << 0xeU) 
            | (((0xdU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0xdU) 
               | ((0xcU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 0xcU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x11U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x11U) 
            | (((0x10U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))) << 0x10U) 
               | ((0xfU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                     >> 0x14U))) << 0xfU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x14U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x14U) 
            | (((0x13U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))) << 0x13U) 
               | ((0x12U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x12U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x17U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x17U) 
            | (((0x16U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))) << 0x16U) 
               | ((0x15U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x15U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x1aU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x1aU) 
            | (((0x19U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))) << 0x19U) 
               | ((0x18U == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x18U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x1dU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x1dU) 
            | (((0x1cU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                    >> 0x14U))) << 0x1cU) 
               | ((0x1bU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x14U))) << 0x1bU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d = 
        ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__rs2_d) 
         | (((0x1fU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                 >> 0x14U))) << 0x1fU) 
            | ((0x1eU == (0x1fU & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                   >> 0x14U))) << 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xfffffff8U 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 2U) 
                                                      | (((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 1U) 
                                                         | (0U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                >> 7U))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xffffffc7U 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 5U) 
                                                      | (((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 4U) 
                                                         | ((3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 3U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xfffffe3fU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((8U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 8U) 
                                                      | (((7U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 7U) 
                                                         | ((6U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 6U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xfffff1ffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0xbU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0xbU) 
                                                      | (((0xaU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0xaU) 
                                                         | ((9U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 9U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xffff8fffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0xeU) 
                                                      | (((0xdU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0xdU) 
                                                         | ((0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0xcU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xfffc7fffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x11U) 
                                                      | (((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x10U) 
                                                         | ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0xfU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xffe3ffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x14U) 
                                                      | (((0x13U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x13U) 
                                                         | ((0x12U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x12U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xff1fffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x17U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x17U) 
                                                      | (((0x16U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x16U) 
                                                         | ((0x15U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x15U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xf8ffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1aU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1aU) 
                                                      | (((0x19U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x19U) 
                                                         | ((0x18U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x18U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0xc7ffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1dU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1dU) 
                                                      | (((0x1cU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                               >> 7U))) 
                                                          << 0x1cU) 
                                                         | ((0x1bU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                 >> 7U))) 
                                                            << 0x1bU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d = (
                                                   (0x3fffffffU 
                                                    & vlSelf->top__DOT__fslu__DOT__idu__DOT__rd_d) 
                                                   | (((0x1fU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                            >> 7U))) 
                                                       << 0x1fU) 
                                                      | ((0x1eU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                              >> 7U))) 
                                                         << 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (((2U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x19U)) << 2U) | (((1U == 
                                              (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 1U) 
                                            | (0U == 
                                               (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffff8U & (((5U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 5U) 
                             | (((4U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 4U) | ((3U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffffffc0U & (((8U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 8U) 
                             | (((7U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 7U) | ((6U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffe00U & (((0xbU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xbU) | (((0xaU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((9U == 
                                              (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffff000U & (((0xeU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xeU) | (((0xdU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffff8000U & (((0x11U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x10U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffc0000U & (((0x14U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x13U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffe00000U & (((0x17U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x16U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xff000000U & (((0x1aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x19U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xf8000000U & (((0x1dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x1cU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xc0000000U & (((0x1fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | ((0x1eU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == 
                                                 (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                >> 1U)) 
                                | ((0x1eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffff1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffffeU & (((0x23U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 3U) | (((0x22U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffff8fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffff0U & (((0x26U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 6U) | (((0x25U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 4U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffc7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffff80U & (((0x29U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 9U) | (((0x28U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 7U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffe3ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xcU) | (((0x2bU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xaU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffff1fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffe000U & (((0x2fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xfU) | (((0x2eU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfff8ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffff0000U & (((0x32U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x12U) | (((0x31U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffc7ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfff80000U & (((0x35U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x15U) | (((0x34U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfe3fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffc00000U & (((0x38U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x18U) | (((0x37U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x16U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xf1ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfe000000U & (((0x3bU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1bU) | (((0x3aU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x8fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xf0000000U & (((0x3eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1eU) | (((0x3dU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | ((0x3fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1fU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffffffcU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == 
                                                (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                                | ((0x3fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffffe3U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffffffcU & (((0x44U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 4U) | (((0x43U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffff1fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffffe0U & (((0x47U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 7U) | (((0x46U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 5U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffff8ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffff00U & (((0x4aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xaU) | (((0x49U == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 9U) | 
                                          ((0x48U == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 8U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffc7ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffff800U & (((0x4dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xdU) | (((0x4cU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffe3fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffc000U & (((0x50U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x10U) | (((0x4fU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xeU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfff1ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffe0000U & (((0x53U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x13U) | (((0x52U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xff8fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfff00000U & (((0x56U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x16U) | (((0x55U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x14U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfc7fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xff800000U & (((0x59U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x19U) | (((0x58U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xe3ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfc000000U & (((0x5cU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1cU) | (((0x5bU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1aU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xe0000000U & (((0x5fU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | (((0x5eU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (((0x62U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                          >> 0x19U)) << 2U) | (((0x61U 
                                                 == 
                                                 (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                << 1U) 
                                               | (0x60U 
                                                  == 
                                                  (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffff8U & (((0x65U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 5U) | (((0x64U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffffffc0U & (((0x68U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 8U) | (((0x67U == 
                                          (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == 
                                                    (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xbU) | (((0x6aU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffff000U & (((0x6eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xeU) | (((0x6dU == 
                                            (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffff8000U & (((0x71U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x70U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffc0000U & (((0x74U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x73U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffe00000U & (((0x77U == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x76U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xff000000U & (((0x7aU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x79U 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xf8000000U & (((0x7dU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x7cU 
                                             == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | ((0x7eU == (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1eU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xf8U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((2U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 2U) | ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xcU))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xc7U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((5U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 5U) | ((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 4U) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xcU))) 
                                                     << 3U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xbfU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | ((6U == (7U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                            >> 0xcU))) << 6U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode = 
        (0x7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i);
    vlSelf->top__DOT__fslu__DOT__stall = ((IData)(vlSelf->rst)
                                           ? 0U : ((IData)(vlSelf->top__DOT__fslu__DOT__stallreq_for_bru)
                                                    ? 0x24U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__stallreq_for_div)
                                                     ? 0x22U
                                                     : 
                                                    ((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                           >> 0xbU))) 
                                                      | ((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last) 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                               >> 0x10U))) 
                                                          & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 8U)) 
                                                         & (~ 
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 7U))))
                                                      ? 0x21U
                                                      : 0U))));
    if ((0x8000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1)))
                : (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1)));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_signed)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2)))
                : (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2)));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1_i 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data1;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2_i 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__div_data2;
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffffe1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffffeU & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffe1fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffffe0U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffe1ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffe00U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffe1fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffe000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffe1ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffe0000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfe1fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffe00000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xe1ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfe000000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xe0000000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0x1fffffffU & ((0x1fffffffU & (IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c)) 
                             | ((0x1fffffffU & ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                                                >> 1U)) 
                                | ((0x1fffffffU & ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                   | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                      >> 3U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffffe1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffffeU & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffe1fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffffe0U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffe1ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffe00U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffe1fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffe000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffe1ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffe0000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfe1fffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffe00000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xe1ffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfe000000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xe0000000U & (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U] 
        = (1U & ((0x1fffffffU & (IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c)) 
                 | ((0x1fffffffU & ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                                    >> 1U)) | ((0x1fffffffU 
                                                & ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                               | ((IData)(top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                                  >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
        = ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
            ? (((QData)((IData)((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U])))
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (((2U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((1U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffff8U & (((5U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((4U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (3U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffffffc0U & (((8U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((7U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (6U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffe00U & (((0xbU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0xaU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((9U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffff000U & (((0xeU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0xdU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffff8000U & (((0x11U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x10U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffc0000U & (((0x14U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x13U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffe00000U & (((0x17U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x16U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xff000000U & (((0x1aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x19U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xf8000000U & (((0x1dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x1cU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0x3fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xc0000000U & (((0x1fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | ((0x1eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                >> 1U)) 
                                | ((0x1eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffff1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffffeU & (((0x23U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 3U) | (((0x22U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffff8fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffff0U & (((0x26U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 6U) | (((0x25U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 4U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffc7fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffff80U & (((0x29U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 9U) | (((0x28U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 7U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffe3ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xcU) | (((0x2bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xaU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffff1fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffe000U & (((0x2fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xfU) | (((0x2eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfff8ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffff0000U & (((0x32U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x12U) | (((0x31U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffc7ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfff80000U & (((0x35U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x15U) | (((0x34U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfe3fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffc00000U & (((0x38U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x18U) | (((0x37U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x16U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xf1ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfe000000U & (((0x3bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1bU) | (((0x3aU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x8fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xf0000000U & (((0x3eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1eU) | (((0x3dU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1cU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x7fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | ((0x3fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1fU));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffffffcU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode))) 
                                | ((0x3fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffffe3U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffffffcU & (((0x44U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 4U) | (((0x43U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 2U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffff1fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffffe0U & (((0x47U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 7U) | (((0x46U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 5U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffff8ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffff00U & (((0x4aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xaU) | (((0x49U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 9U) | 
                                          ((0x48U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 8U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffc7ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffff800U & (((0x4dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xdU) | (((0x4cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffe3fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffc000U & (((0x50U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x10U) | (((0x4fU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xeU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfff1ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffe0000U & (((0x53U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x13U) | (((0x52U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xff8fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfff00000U & (((0x56U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x16U) | (((0x55U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x14U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfc7fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xff800000U & (((0x59U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x19U) | (((0x58U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xe3ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfc000000U & (((0x5cU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1cU) | (((0x5bU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1aU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0x1fffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xe0000000U & (((0x5fU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | (((0x5eU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffff8U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (((0x62U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((0x61U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0x60U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffffffc7U & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffff8U & (((0x65U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((0x64U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffe3fU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffffffc0U & (((0x68U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((0x67U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffff1ffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0x6aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffff8fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffff000U & (((0x6eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0x6dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffc7fffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffff8000U & (((0x71U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x70U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffe3ffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffc0000U & (((0x74U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x73U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xff1fffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffe00000U & (((0x77U == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x76U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xf8ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xff000000U & (((0x7aU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x79U 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xc7ffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xf8000000U & (((0x7dU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x7cU 
                                             == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xbfffffffU & vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | ((0x7eU == (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1eU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result 
        = (QData)((IData)((1U & (~ ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                             >> 0x3fU)) 
                                    ^ ((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 
                                                >> 0x3fU)) 
                                       & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
                                                  >> 0x3fU))))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 7U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | ((4U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     >> 0x15U)) | (2U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                         >> 0x16U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xbU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (4U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     | vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                    >> 0x15U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 5U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x14U))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                    >> 0x14U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 4U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 6U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 4U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 5U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & vlSelf->top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    __Vtemp2320[1U] = (((IData)(((- (QData)((IData)(
                                                    (1U 
                                                     & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                          >> 0x14U) 
                                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x13U)) 
                                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x12U)))))) 
                                 & ((0x100000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                     ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                     : ((0x80000U & 
                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                         ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                         : ((0x40000U 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                 & (~ 
                                                    VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                             : 0ULL))))) 
                        >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                  (1U 
                                                                   & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x14U) 
                                                                       | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x13U)) 
                                                                      | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x12U)))))) 
                                               & ((0x100000U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                   ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                   : 
                                                  ((0x80000U 
                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                    ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                      & (~ 
                                                         VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                     | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                     : 0ULL)))) 
                                              >> 0x20U)) 
                                     << 1U));
    __Vtemp2321[0U] = (1U | (((IData)(((- (QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                               >> 0x1bU) 
                                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                 >> 0x1aU)))))) 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                              << 1U) | (1U | ((IData)(
                                                      ((- (QData)((IData)(
                                                                          (1U 
                                                                           & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x12U)))))) 
                                                       & ((0x100000U 
                                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                           ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                           : 
                                                          ((0x80000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                            : 
                                                           ((0x40000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                             ? 
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                              & (~ 
                                                                 VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                             | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                             : 0ULL))))) 
                                              << 1U))));
    __Vtemp2321[2U] = (((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                          >> 0x1bU) 
                                                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x1aU)))))) 
                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                                 >> 0x20U)) | (IData)(
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x14U) 
                                                                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                               | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x12U)))))) 
                                                        & ((0x100000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                            : 
                                                           ((0x80000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                             ? vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                             : 
                                                            ((0x40000U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                              ? 
                                                             (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                               & (~ 
                                                                  VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                              | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                              : 0ULL)))) 
                                                       >> 0x20U))) 
                       >> 0x1fU);
    __Vtemp2323[1U] = (((((IData)(((- (QData)((IData)(
                                                      (1U 
                                                       & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x1bU) 
                                                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x1aU)))))) 
                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                          >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x1bU) 
                                                                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                           >> 0x1aU)))))) 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                                                >> 0x20U)) 
                                       << 1U)) | __Vtemp2320[1U]) 
                       | (((IData)(((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x17U))))) 
                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                           >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x17U))))) 
                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                 >> 0x20U)) 
                                        << 1U)));
    __Vtemp2327[1U] = ((__Vtemp2323[1U] | (((IData)(
                                                    ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                            >> 0x16U))))) 
                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                        | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                               >> 0x16U))))) 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                           | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                       >> 0x20U)) 
                                              << 1U))) 
                       | (((IData)(((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x15U))))) 
                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                       ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                           >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x15U))))) 
                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                     ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                 >> 0x20U)) 
                                        << 1U)));
    __Vtemp2329[0U] = (1U | ((((__Vtemp2321[0U] | ((IData)(
                                                           ((- (QData)((IData)(
                                                                               (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x17U))))) 
                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                   << 1U)) 
                               | (1U | ((IData)(((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x16U))))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                    | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                        << 1U))) | 
                              (1U | ((IData)(((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                     >> 0x15U))))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                 ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                     << 1U))) | (1U 
                                                 | ((IData)(
                                                            ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x19U))))) 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                                    << 1U))));
    __Vtemp2329[2U] = ((((__Vtemp2321[2U] | ((IData)(
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                              >> 0x17U))))) 
                                                       & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                      >> 0x20U)) 
                                             >> 0x1fU)) 
                         | ((IData)((((- (QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x16U))))) 
                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                         | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                     >> 0x20U)) >> 0x1fU)) 
                        | ((IData)((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                            >> 0x15U))))) 
                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                        ^ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                    >> 0x20U)) >> 0x1fU)) 
                       | ((IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x19U))))) 
                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                   >> 0x20U)) >> 0x1fU));
    __Vtemp2331[1U] = ((__Vtemp2327[1U] | (((IData)(
                                                    ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                            >> 0x19U))))) 
                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                            >> 0x1fU) 
                                           | ((IData)(
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                               >> 0x19U))))) 
                                                        & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                                       >> 0x20U)) 
                                              << 1U))) 
                       | (((IData)(((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x18U))))) 
                                    & (QData)((IData)(
                                                      (1U 
                                                       & (~ 
                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                           >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x18U))))) 
                                                  & (QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                                 >> 0x20U)) 
                                        << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result 
        = (((QData)((IData)(((__Vtemp2329[2U] | ((IData)(
                                                         (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                           & (QData)((IData)(
                                                                             (1U 
                                                                              & (~ 
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                                          >> 0x20U)) 
                                                 >> 0x1fU)) 
                             | ((IData)((((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                 >> 0x11U))))) 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                         >> 0x20U)) 
                                >> 0x1fU)))) << 0x3fU) 
           | (((QData)((IData)((__Vtemp2331[1U] | (
                                                   ((IData)(
                                                            ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                    >> 0x1fU) 
                                                   | ((IData)(
                                                              (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                                               >> 0x20U)) 
                                                      << 1U))))) 
               << 0x1fU) | ((QData)((IData)((1U | (
                                                   (__Vtemp2329[0U] 
                                                    | ((IData)(
                                                               ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                                & (QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      | ((IData)(
                                                                 ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                         << 1U)))))) 
                            >> 1U)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((7U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
              << 3U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xdU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
              << 1U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xeU & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or)) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((6U & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | (((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add)) 
                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op = 
        ((0x800U & (((((((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                     << 0xbU) | (0xff800U & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                             >> 0xcU)))) 
         | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub) 
              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
             << 0xaU) | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                          << 9U) | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                     << 8U) | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci)) 
                                                << 7U) 
                                               | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi)) 
                                                   << 6U) 
                                                  | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                                                      << 5U) 
                                                     | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                                         << 4U) 
                                                        | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                                            << 3U) 
                                                           | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & (((0x3feU 
                                                                       & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                          >> 0x16U)) 
                                                                      | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                         << 1U)) 
                                                                     | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                        << 1U))) 
                                                                 | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                                                    | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak)))))))))))));
    Vtest___024root____Vdpiimwrap_top__DOT__mem_read_TOP(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result, vlSelf->__Vtask_top__DOT__mem_read__0__rdata);
    vlSelf->top__DOT__dsram_rdata = vlSelf->__Vtask_top__DOT__mem_read__0__rdata;
    Vtest___024root____Vdpiimwrap_top__DOT__mem_write_TOP(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result, 
                                                          ((0x40000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                            ? (QData)((IData)(
                                                                              (0xffU 
                                                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                             ? (QData)((IData)(
                                                                               (0xffffU 
                                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                              ? (QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))
                                                              : 
                                                             (((QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))), 
                                                          ((0x20000000U 
                                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                            ? 0xffU
                                                            : 
                                                           ((0x40000000U 
                                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                                             ? 0xfU
                                                             : 
                                                            ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                              >> 0x1fU)
                                                              ? 3U
                                                              : 
                                                             ((1U 
                                                               & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U])
                                                               ? 1U
                                                               : 0U)))));
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result);
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U] = (IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_result 
                                                             >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] = 
        ((0x20U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                   >> 1U)) | (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                       >> 1U)));
    __Vtemp2336[2U] = ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw)) 
                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw)) 
                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw)) 
                        << 0x1fU) | (((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                      << 0x1eU) | (
                                                   (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                     << 0x1dU) 
                                                    | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                        << 0x1cU) 
                                                       | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                           << 0x1bU) 
                                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                              << 0x1aU) 
                                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                                 << 0x19U) 
                                                                | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                                       << 0x17U) 
                                                                      | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh) 
                                                                             << 0x15U) 
                                                                            | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw) 
                                                                                << 0x14U) 
                                                                               | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                                                << 0x13U))))))))))) 
                                                   | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                                        << 0x12U) 
                                                       | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                                           << 0x11U) 
                                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                                 << 0xfU) 
                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                   << 0xeU))))) 
                                                      | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                                           << 0xdU) 
                                                          | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                              << 0xcU) 
                                                             | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                                 << 0xbU) 
                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                                   << 0xaU)))) 
                                                         | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci)))))))))))))));
    __Vtemp2338[0U] = ((vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                        << 0x1bU) | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__alu_op) 
                                      << 0xfU) | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src1) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__sel_alu_src2) 
                                                      << 8U) 
                                                     | (((((((((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                                                 | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                                            | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                         << 7U) 
                                                        | ((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb) 
                                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                                                            << 6U) 
                                                           | ((0x20U 
                                                               & ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x3fe0U 
                                                                                & ((vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                                | vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                                                                                >> 0x12U)) 
                                                                                | (0x3fffe0U 
                                                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                                                                                >> 0xaU))) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_jalr) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_beq) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slti) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltiu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ori) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_andi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srli) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srai) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_slliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srliw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraiw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_addw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_subw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sllw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_srlw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sraw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrs) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrc) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                                << 5U)) 
                                                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrsi) 
                                                                                << 5U)) 
                                                                               | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_csrrci) 
                                                                                << 5U)) 
                                                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mul) 
                                                                                << 5U)) 
                                                                             | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulh) 
                                                                                << 5U)) 
                                                                            | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhsu) 
                                                                               << 5U)) 
                                                                           | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulhu) 
                                                                              << 5U)) 
                                                                          | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_div) 
                                                                             << 5U)) 
                                                                         | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divu) 
                                                                            << 5U)) 
                                                                        | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_rem) 
                                                                           << 5U)) 
                                                                       | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remu) 
                                                                          << 5U)) 
                                                                      | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                         << 5U)) 
                                                                     | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divw) 
                                                                        << 5U)) 
                                                                    | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_divuw) 
                                                                       << 5U)) 
                                                                   | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remw) 
                                                                      << 5U)) 
                                                                  | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_remuw) 
                                                                     << 5U))) 
                                                              | (0x1fU 
                                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                                    >> 7U)))))))));
    __Vtemp2344[0U] = (IData)((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                 >> 5U) & ((0x1fU & 
                                            vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x14U))))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                     >> 5U) & ((0x1fU 
                                                & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                    : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                         >> 5U) & (
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0x14U))))
                                        ? (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                        : ((IData)(vlSelf->rst)
                                            ? 0ULL : 
                                           ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : ((((
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0x14U)) 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                  & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                     >> 5U)) 
                                                 & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                  ? 
                                                 vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U))]
                                                  : 0ULL))))))));
    __Vtemp2344[1U] = (IData)(((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x14U))))
                                 ? (((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0x14U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x14U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x14U)))
                                                 ? 0ULL
                                                 : 
                                                (((((0x1fU 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0x14U)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                   & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                      >> 5U)) 
                                                  & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2)
                                                   ? 
                                                  vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0x14U))]
                                                   : 0ULL))))))) 
                               >> 0x20U));
    __Vtemp2344[2U] = (IData)((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                 >> 5U) & ((0x1fU & 
                                            vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                           == (0x1fU 
                                               & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0xfU))))
                                ? (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                     >> 5U) & ((0x1fU 
                                                & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                               == (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU))))
                                    ? (((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                    : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                         >> 5U) & (
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0xfU))))
                                        ? (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                        : ((IData)(vlSelf->rst)
                                            ? 0ULL : 
                                           ((0U == 
                                             (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : ((((
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                       >> 0xfU)) 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                  & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                     >> 5U)) 
                                                 & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                 : 
                                                ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                  ? 
                                                 vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                 [(0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU))]
                                                  : 0ULL))))))));
    __Vtemp2344[3U] = (IData)(((((vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
                                  >> 5U) & ((0x1fU 
                                             & vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[2U]) 
                                            == (0x1fU 
                                                & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0xfU))))
                                 ? (((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__ex_to_rf_bus[0U])))
                                 : (((vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                    >> 0xfU))))
                                     ? (((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U])))
                                     : (((vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0xfU))))
                                         ? (((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                         : ((IData)(vlSelf->rst)
                                             ? 0ULL
                                             : ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0xfU)))
                                                 ? 0ULL
                                                 : 
                                                (((((0x1fU 
                                                     & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                                   & (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U] 
                                                      >> 5U)) 
                                                  & (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[0U])))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1)
                                                   ? 
                                                  vlSelf->top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                      >> 0xfU))]
                                                   : 0ULL))))))) 
                               >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[0U] 
        = __Vtemp2344[0U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[1U] 
        = __Vtemp2344[1U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[2U] 
        = __Vtemp2344[2U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[3U] 
        = __Vtemp2344[3U];
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[4U] 
        = ((__Vtemp2338[0U] << 1U) | (((((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                                         | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                        | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[5U] 
        = ((__Vtemp2338[0U] >> 0x1fU) | ((0xffffffeU 
                                          & (vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 4U)) 
                                         | ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                                            << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[6U] 
        = ((1U & ((IData)((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                  >> 4U)) | ((0xffffffeU & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U])))) 
                                            >> 4U)) 
                             | ((IData)(((((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                                         >> 0x20U)) 
                                << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[7U] 
        = ((1U & ((IData)(((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                           >> 0x20U)) >> 4U)) | ((0xffffffeU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[0U]))) 
                                                              >> 0x20U)) 
                                                     >> 4U)) 
                                                 | (__Vtemp2336[2U] 
                                                    << 0x1cU)));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[8U] 
        = ((1U & (__Vtemp2336[2U] >> 4U)) | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                               | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                              << 0x1fU) 
                                             | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                   | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                  | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                 << 0x1eU) 
                                                | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                     | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                    << 0x1dU) 
                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                       << 0x1cU) 
                                                      | (0xffffffeU 
                                                         & (__Vtemp2336[2U] 
                                                            >> 4U)))))));
    vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[9U] 
        = ((0xfffffffeU & (((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                            << 2U) | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ebreak) 
                                      << 1U))) | (1U 
                                                  & ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lb) 
                                                       | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                                                     | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lh) 
                                                           | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                                                          | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                                                         >> 1U) 
                                                        | (((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lw) 
                                                              | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                                                             | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                                                            >> 2U) 
                                                           | ((((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_sd) 
                                                                | (IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                                                               >> 3U) 
                                                              | ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_mulw) 
                                                                 >> 4U)))))));
    if (vlSelf->top__DOT__fslu__DOT__idu__DOT__flag) {
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[0U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[1U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[2U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[3U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[4U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[5U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[6U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[7U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[8U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U] 
            = Vtest__ConstPool__CONST_6a3c0088_0[9U];
    } else {
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[0U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[0U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[1U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[1U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[2U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[2U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[3U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[3U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[4U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[4U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[5U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[5U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[6U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[6U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[7U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[7U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[8U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[8U];
        vlSelf->top__DOT__fslu__DOT__id_to_ex_bus[9U] 
            = vlSelf->top__DOT__fslu__DOT__idu__DOT__id_to_ex_bus_temp[9U];
    }
}

void Vtest___024root___combo__TOP__10(Vtest___024root* vlSelf);
void Vtest___024root___sequent__TOP__11(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux__34(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux__35(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux__36(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux__37(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux__38(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux__39(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux__40(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux__41(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux__42(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux__43(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__3(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11__45(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12__46(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13__47(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__4(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15__48(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16__49(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17__50(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21__51(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22__52(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23__53(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28__54(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14__55(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__5(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__56(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__57(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19__58(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__6(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__59(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25__60(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__7(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__61(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__62(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__8(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__63(Vtest_ysyx_2022040010_cradder* vlSelf);
void Vtest___024root___settle__TOP__9(Vtest___024root* vlSelf);
void Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30__64(Vtest_ysyx_2022040010_cradder* vlSelf);

void Vtest___024root___eval(Vtest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest___024root___eval\n"); );
    // Body
    Vtest___024root___combo__TOP__10(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtest___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux__34((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux__35((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux__36((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux__37((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux__38((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux__39((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux__40((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux__41((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux__42((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux__43((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0__33((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux));
        Vtest___024root___settle__TOP__3(vlSelf);
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11__45((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12__46((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12));
        Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13__47((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13));
        Vtest___024root___settle__TOP__4(vlSelf);
    }
    Vtest___024root___combo__TOP__15(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15__48((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16__49((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17__50((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21__51((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22__52((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23__53((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28__54((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14__55((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14));
    Vtest___024root___settle__TOP__5(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__56((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__57((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19__58((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19));
    Vtest___024root___settle__TOP__6(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__59((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25__60((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25));
    Vtest___024root___settle__TOP__7(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__61((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26));
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__62((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27));
    Vtest___024root___settle__TOP__8(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__63((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29));
    Vtest___024root___settle__TOP__9(vlSelf);
    Vtest_ysyx_2022040010_cradder___settle__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30__64((&vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30));
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
    // Variables
    VlWide<5>/*159:0*/ __Vtemp2349;
    VlWide<5>/*159:0*/ __Vtemp2350;
    VlWide<5>/*159:0*/ __Vtemp2351;
    VlWide<5>/*159:0*/ __Vtemp2352;
    VlWide<5>/*159:0*/ __Vtemp2353;
    VlWide<5>/*159:0*/ __Vtemp2354;
    VlWide<5>/*159:0*/ __Vtemp2355;
    VlWide<5>/*159:0*/ __Vtemp2356;
    VlWide<5>/*159:0*/ __Vtemp2357;
    VlWide<5>/*159:0*/ __Vtemp2358;
    VlWide<5>/*159:0*/ __Vtemp2359;
    VlWide<5>/*159:0*/ __Vtemp2360;
    VlWide<5>/*159:0*/ __Vtemp2361;
    VlWide<5>/*159:0*/ __Vtemp2362;
    VlWide<5>/*159:0*/ __Vtemp2363;
    VlWide<5>/*159:0*/ __Vtemp2364;
    VlWide<5>/*159:0*/ __Vtemp2365;
    VlWide<5>/*159:0*/ __Vtemp2366;
    VlWide<5>/*159:0*/ __Vtemp2367;
    VlWide<5>/*159:0*/ __Vtemp2368;
    VlWide<5>/*159:0*/ __Vtemp2369;
    VlWide<5>/*159:0*/ __Vtemp2370;
    VlWide<5>/*159:0*/ __Vtemp2371;
    VlWide<5>/*159:0*/ __Vtemp2372;
    VlWide<5>/*159:0*/ __Vtemp2373;
    VlWide<5>/*159:0*/ __Vtemp2374;
    VlWide<5>/*159:0*/ __Vtemp2375;
    VlWide<5>/*159:0*/ __Vtemp2376;
    VlWide<5>/*159:0*/ __Vtemp2377;
    VlWide<5>/*159:0*/ __Vtemp2378;
    VlWide<5>/*159:0*/ __Vtemp2379;
    VlWide<5>/*159:0*/ __Vtemp2380;
    VlWide<5>/*159:0*/ __Vtemp2381;
    VlWide<5>/*159:0*/ __Vtemp2382;
    VlWide<5>/*159:0*/ __Vtemp2383;
    VlWide<5>/*159:0*/ __Vtemp2384;
    VlWide<5>/*159:0*/ __Vtemp2385;
    VlWide<5>/*159:0*/ __Vtemp2386;
    VlWide<5>/*159:0*/ __Vtemp2387;
    VlWide<5>/*159:0*/ __Vtemp2388;
    VlWide<5>/*159:0*/ __Vtemp2389;
    VlWide<5>/*159:0*/ __Vtemp2390;
    VlWide<5>/*159:0*/ __Vtemp2391;
    VlWide<5>/*159:0*/ __Vtemp2392;
    VlWide<5>/*159:0*/ __Vtemp2393;
    VlWide<5>/*159:0*/ __Vtemp2394;
    VlWide<5>/*159:0*/ __Vtemp2395;
    VlWide<5>/*159:0*/ __Vtemp2396;
    VlWide<5>/*159:0*/ __Vtemp2397;
    VlWide<5>/*159:0*/ __Vtemp2398;
    VlWide<5>/*159:0*/ __Vtemp2399;
    VlWide<5>/*159:0*/ __Vtemp2400;
    VlWide<5>/*159:0*/ __Vtemp2401;
    VlWide<5>/*159:0*/ __Vtemp2402;
    VlWide<5>/*159:0*/ __Vtemp2403;
    VlWide<5>/*159:0*/ __Vtemp2404;
    VlWide<5>/*159:0*/ __Vtemp2405;
    VlWide<5>/*159:0*/ __Vtemp2406;
    VlWide<5>/*159:0*/ __Vtemp2407;
    VlWide<5>/*159:0*/ __Vtemp2408;
    // Body
    __Vtemp2349[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][0U];
    __Vtemp2349[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][1U];
    __Vtemp2349[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][2U];
    __Vtemp2349[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][3U];
    __Vtemp2349[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][4U];
    __Vtemp2350[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][0U];
    __Vtemp2350[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][1U];
    __Vtemp2350[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][2U];
    __Vtemp2350[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][3U];
    __Vtemp2350[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][4U];
    __Vtemp2351[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][0U];
    __Vtemp2351[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][1U];
    __Vtemp2351[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][2U];
    __Vtemp2351[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][3U];
    __Vtemp2351[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][4U];
    __Vtemp2352[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][0U];
    __Vtemp2352[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][1U];
    __Vtemp2352[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][2U];
    __Vtemp2352[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][3U];
    __Vtemp2352[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][4U];
    __Vtemp2353[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][0U];
    __Vtemp2353[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][1U];
    __Vtemp2353[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][2U];
    __Vtemp2353[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][3U];
    __Vtemp2353[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][4U];
    __Vtemp2354[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][0U];
    __Vtemp2354[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][1U];
    __Vtemp2354[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][2U];
    __Vtemp2354[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][3U];
    __Vtemp2354[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][4U];
    __Vtemp2355[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][0U];
    __Vtemp2355[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][1U];
    __Vtemp2355[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][2U];
    __Vtemp2355[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][3U];
    __Vtemp2355[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][4U];
    __Vtemp2356[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][0U];
    __Vtemp2356[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][1U];
    __Vtemp2356[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][2U];
    __Vtemp2356[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][3U];
    __Vtemp2356[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][4U];
    __Vtemp2357[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][0U];
    __Vtemp2357[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][1U];
    __Vtemp2357[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][2U];
    __Vtemp2357[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][3U];
    __Vtemp2357[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][4U];
    __Vtemp2358[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][0U];
    __Vtemp2358[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][1U];
    __Vtemp2358[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][2U];
    __Vtemp2358[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][3U];
    __Vtemp2358[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][4U];
    __Vtemp2359[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][0U];
    __Vtemp2359[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][1U];
    __Vtemp2359[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][2U];
    __Vtemp2359[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][3U];
    __Vtemp2359[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][4U];
    __Vtemp2360[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][0U];
    __Vtemp2360[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][1U];
    __Vtemp2360[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][2U];
    __Vtemp2360[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][3U];
    __Vtemp2360[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][4U];
    __Vtemp2361[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][0U];
    __Vtemp2361[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][1U];
    __Vtemp2361[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][2U];
    __Vtemp2361[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][3U];
    __Vtemp2361[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][4U];
    __Vtemp2362[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][0U];
    __Vtemp2362[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][1U];
    __Vtemp2362[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][2U];
    __Vtemp2362[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][3U];
    __Vtemp2362[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][4U];
    __Vtemp2363[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][0U];
    __Vtemp2363[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][1U];
    __Vtemp2363[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][2U];
    __Vtemp2363[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][3U];
    __Vtemp2363[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][4U];
    __Vtemp2364[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][0U];
    __Vtemp2364[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][1U];
    __Vtemp2364[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][2U];
    __Vtemp2364[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][3U];
    __Vtemp2364[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][4U];
    __Vtemp2365[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][0U];
    __Vtemp2365[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][1U];
    __Vtemp2365[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][2U];
    __Vtemp2365[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][3U];
    __Vtemp2365[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][4U];
    __Vtemp2366[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][0U];
    __Vtemp2366[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][1U];
    __Vtemp2366[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][2U];
    __Vtemp2366[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][3U];
    __Vtemp2366[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][4U];
    __Vtemp2367[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][0U];
    __Vtemp2367[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][1U];
    __Vtemp2367[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][2U];
    __Vtemp2367[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][3U];
    __Vtemp2367[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][4U];
    __Vtemp2368[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][0U];
    __Vtemp2368[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][1U];
    __Vtemp2368[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][2U];
    __Vtemp2368[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][3U];
    __Vtemp2368[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][4U];
    __Vtemp2369[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][0U];
    __Vtemp2369[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][1U];
    __Vtemp2369[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][2U];
    __Vtemp2369[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][3U];
    __Vtemp2369[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][4U];
    __Vtemp2370[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][0U];
    __Vtemp2370[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][1U];
    __Vtemp2370[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][2U];
    __Vtemp2370[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][3U];
    __Vtemp2370[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][4U];
    __Vtemp2371[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][0U];
    __Vtemp2371[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][1U];
    __Vtemp2371[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][2U];
    __Vtemp2371[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][3U];
    __Vtemp2371[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][4U];
    __Vtemp2372[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][0U];
    __Vtemp2372[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][1U];
    __Vtemp2372[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][2U];
    __Vtemp2372[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][3U];
    __Vtemp2372[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][4U];
    __Vtemp2373[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][0U];
    __Vtemp2373[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][1U];
    __Vtemp2373[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][2U];
    __Vtemp2373[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][3U];
    __Vtemp2373[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][4U];
    __Vtemp2374[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][0U];
    __Vtemp2374[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][1U];
    __Vtemp2374[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][2U];
    __Vtemp2374[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][3U];
    __Vtemp2374[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][4U];
    __Vtemp2375[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][0U];
    __Vtemp2375[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][1U];
    __Vtemp2375[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][2U];
    __Vtemp2375[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][3U];
    __Vtemp2375[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][4U];
    __Vtemp2376[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][0U];
    __Vtemp2376[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][1U];
    __Vtemp2376[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][2U];
    __Vtemp2376[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][3U];
    __Vtemp2376[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][4U];
    __Vtemp2377[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][0U];
    __Vtemp2377[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][1U];
    __Vtemp2377[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][2U];
    __Vtemp2377[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][3U];
    __Vtemp2377[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][4U];
    __Vtemp2378[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][0U];
    __Vtemp2378[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][1U];
    __Vtemp2378[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][2U];
    __Vtemp2378[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][3U];
    __Vtemp2378[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][4U];
    __Vtemp2379[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][0U];
    __Vtemp2379[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][1U];
    __Vtemp2379[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][2U];
    __Vtemp2379[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][3U];
    __Vtemp2379[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][4U];
    __Vtemp2380[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][0U];
    __Vtemp2380[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][1U];
    __Vtemp2380[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][2U];
    __Vtemp2380[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][3U];
    __Vtemp2380[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][4U];
    __Vtemp2381[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][0U];
    __Vtemp2381[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][1U];
    __Vtemp2381[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][2U];
    __Vtemp2381[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][3U];
    __Vtemp2381[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][4U];
    __Vtemp2382[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][0U];
    __Vtemp2382[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][1U];
    __Vtemp2382[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][2U];
    __Vtemp2382[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][3U];
    __Vtemp2382[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][4U];
    __Vtemp2383[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][0U];
    __Vtemp2383[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][1U];
    __Vtemp2383[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][2U];
    __Vtemp2383[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][3U];
    __Vtemp2383[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][4U];
    __Vtemp2384[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][0U];
    __Vtemp2384[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][1U];
    __Vtemp2384[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][2U];
    __Vtemp2384[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][3U];
    __Vtemp2384[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][4U];
    __Vtemp2385[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][0U];
    __Vtemp2385[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][1U];
    __Vtemp2385[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][2U];
    __Vtemp2385[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][3U];
    __Vtemp2385[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][4U];
    __Vtemp2386[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][0U];
    __Vtemp2386[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][1U];
    __Vtemp2386[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][2U];
    __Vtemp2386[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][3U];
    __Vtemp2386[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][4U];
    __Vtemp2387[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][0U];
    __Vtemp2387[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][1U];
    __Vtemp2387[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][2U];
    __Vtemp2387[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][3U];
    __Vtemp2387[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][4U];
    __Vtemp2388[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][0U];
    __Vtemp2388[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][1U];
    __Vtemp2388[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][2U];
    __Vtemp2388[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][3U];
    __Vtemp2388[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][4U];
    __Vtemp2389[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][0U];
    __Vtemp2389[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][1U];
    __Vtemp2389[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][2U];
    __Vtemp2389[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][3U];
    __Vtemp2389[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][4U];
    __Vtemp2390[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][0U];
    __Vtemp2390[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][1U];
    __Vtemp2390[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][2U];
    __Vtemp2390[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][3U];
    __Vtemp2390[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][4U];
    __Vtemp2391[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][0U];
    __Vtemp2391[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][1U];
    __Vtemp2391[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][2U];
    __Vtemp2391[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][3U];
    __Vtemp2391[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][4U];
    __Vtemp2392[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][0U];
    __Vtemp2392[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][1U];
    __Vtemp2392[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][2U];
    __Vtemp2392[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][3U];
    __Vtemp2392[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][4U];
    __Vtemp2393[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][0U];
    __Vtemp2393[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][1U];
    __Vtemp2393[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][2U];
    __Vtemp2393[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][3U];
    __Vtemp2393[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][4U];
    __Vtemp2394[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][0U];
    __Vtemp2394[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][1U];
    __Vtemp2394[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][2U];
    __Vtemp2394[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][3U];
    __Vtemp2394[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][4U];
    __Vtemp2395[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][0U];
    __Vtemp2395[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][1U];
    __Vtemp2395[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][2U];
    __Vtemp2395[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][3U];
    __Vtemp2395[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][4U];
    __Vtemp2396[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][0U];
    __Vtemp2396[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][1U];
    __Vtemp2396[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][2U];
    __Vtemp2396[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][3U];
    __Vtemp2396[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][4U];
    __Vtemp2397[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][0U];
    __Vtemp2397[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][1U];
    __Vtemp2397[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][2U];
    __Vtemp2397[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][3U];
    __Vtemp2397[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][4U];
    __Vtemp2398[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][0U];
    __Vtemp2398[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][1U];
    __Vtemp2398[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][2U];
    __Vtemp2398[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][3U];
    __Vtemp2398[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][4U];
    __Vtemp2399[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][0U];
    __Vtemp2399[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][1U];
    __Vtemp2399[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][2U];
    __Vtemp2399[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][3U];
    __Vtemp2399[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][4U];
    __Vtemp2400[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][0U];
    __Vtemp2400[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][1U];
    __Vtemp2400[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][2U];
    __Vtemp2400[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][3U];
    __Vtemp2400[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][4U];
    __Vtemp2401[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][0U];
    __Vtemp2401[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][1U];
    __Vtemp2401[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][2U];
    __Vtemp2401[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][3U];
    __Vtemp2401[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][4U];
    __Vtemp2402[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][0U];
    __Vtemp2402[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][1U];
    __Vtemp2402[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][2U];
    __Vtemp2402[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][3U];
    __Vtemp2402[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][4U];
    __Vtemp2403[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][0U];
    __Vtemp2403[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][1U];
    __Vtemp2403[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][2U];
    __Vtemp2403[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][3U];
    __Vtemp2403[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][4U];
    __Vtemp2404[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][0U];
    __Vtemp2404[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][1U];
    __Vtemp2404[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][2U];
    __Vtemp2404[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][3U];
    __Vtemp2404[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][4U];
    __Vtemp2405[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][0U];
    __Vtemp2405[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][1U];
    __Vtemp2405[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][2U];
    __Vtemp2405[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][3U];
    __Vtemp2405[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][4U];
    __Vtemp2406[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][0U];
    __Vtemp2406[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][1U];
    __Vtemp2406[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][2U];
    __Vtemp2406[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][3U];
    __Vtemp2406[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][4U];
    __Vtemp2407[0U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][0U];
    __Vtemp2407[1U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][1U];
    __Vtemp2407[2U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][2U];
    __Vtemp2407[3U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][3U];
    __Vtemp2407[4U] = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][4U];
    __Vtemp2408[0U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][0U];
    __Vtemp2408[1U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][1U];
    __Vtemp2408[2U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][2U];
    __Vtemp2408[3U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][3U];
    __Vtemp2408[4U] = vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][4U];
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2])
         | (__Vtemp2349[0] ^ __Vtemp2350[0]) | (__Vtemp2349[1] ^ __Vtemp2350[1]) | (__Vtemp2349[2] ^ __Vtemp2350[2]) | (__Vtemp2349[3] ^ __Vtemp2350[3]) | (__Vtemp2349[4] ^ __Vtemp2350[4])
         | (__Vtemp2351[0] ^ __Vtemp2352[0]) | (__Vtemp2351[1] ^ __Vtemp2352[1])|| (__Vtemp2351[2] ^ __Vtemp2352[2]) | (__Vtemp2351[3] ^ __Vtemp2352[3]) | (__Vtemp2351[4] ^ __Vtemp2352[4])
         | (__Vtemp2353[0] ^ __Vtemp2354[0]) | (__Vtemp2353[1] ^ __Vtemp2354[1]) | (__Vtemp2353[2] ^ __Vtemp2354[2]) | (__Vtemp2353[3] ^ __Vtemp2354[3]) | (__Vtemp2353[4] ^ __Vtemp2354[4])
         | (__Vtemp2355[0] ^ __Vtemp2356[0]) | (__Vtemp2355[1] ^ __Vtemp2356[1])|| (__Vtemp2355[2] ^ __Vtemp2356[2]) | (__Vtemp2355[3] ^ __Vtemp2356[3]) | (__Vtemp2355[4] ^ __Vtemp2356[4])
         | (__Vtemp2357[0] ^ __Vtemp2358[0]) | (__Vtemp2357[1] ^ __Vtemp2358[1]) | (__Vtemp2357[2] ^ __Vtemp2358[2]) | (__Vtemp2357[3] ^ __Vtemp2358[3]) | (__Vtemp2357[4] ^ __Vtemp2358[4])
         | (__Vtemp2359[0] ^ __Vtemp2360[0]) | (__Vtemp2359[1] ^ __Vtemp2360[1])|| (__Vtemp2359[2] ^ __Vtemp2360[2]) | (__Vtemp2359[3] ^ __Vtemp2360[3]) | (__Vtemp2359[4] ^ __Vtemp2360[4])
         | (__Vtemp2361[0] ^ __Vtemp2362[0]) | (__Vtemp2361[1] ^ __Vtemp2362[1]) | (__Vtemp2361[2] ^ __Vtemp2362[2]) | (__Vtemp2361[3] ^ __Vtemp2362[3]) | (__Vtemp2361[4] ^ __Vtemp2362[4])
         | (__Vtemp2363[0] ^ __Vtemp2364[0]) | (__Vtemp2363[1] ^ __Vtemp2364[1])|| (__Vtemp2363[2] ^ __Vtemp2364[2]) | (__Vtemp2363[3] ^ __Vtemp2364[3]) | (__Vtemp2363[4] ^ __Vtemp2364[4])
         | (__Vtemp2365[0] ^ __Vtemp2366[0]) | (__Vtemp2365[1] ^ __Vtemp2366[1]) | (__Vtemp2365[2] ^ __Vtemp2366[2]) | (__Vtemp2365[3] ^ __Vtemp2366[3]) | (__Vtemp2365[4] ^ __Vtemp2366[4])
         | (__Vtemp2367[0] ^ __Vtemp2368[0]) | (__Vtemp2367[1] ^ __Vtemp2368[1])|| (__Vtemp2367[2] ^ __Vtemp2368[2]) | (__Vtemp2367[3] ^ __Vtemp2368[3]) | (__Vtemp2367[4] ^ __Vtemp2368[4])
         | (__Vtemp2369[0] ^ __Vtemp2370[0]) | (__Vtemp2369[1] ^ __Vtemp2370[1]) | (__Vtemp2369[2] ^ __Vtemp2370[2]) | (__Vtemp2369[3] ^ __Vtemp2370[3]) | (__Vtemp2369[4] ^ __Vtemp2370[4])
         | (__Vtemp2371[0] ^ __Vtemp2372[0]) | (__Vtemp2371[1] ^ __Vtemp2372[1])|| (__Vtemp2371[2] ^ __Vtemp2372[2]) | (__Vtemp2371[3] ^ __Vtemp2372[3]) | (__Vtemp2371[4] ^ __Vtemp2372[4])
         | (__Vtemp2373[0] ^ __Vtemp2374[0]) | (__Vtemp2373[1] ^ __Vtemp2374[1]) | (__Vtemp2373[2] ^ __Vtemp2374[2]) | (__Vtemp2373[3] ^ __Vtemp2374[3]) | (__Vtemp2373[4] ^ __Vtemp2374[4])
         | (__Vtemp2375[0] ^ __Vtemp2376[0]) | (__Vtemp2375[1] ^ __Vtemp2376[1])|| (__Vtemp2375[2] ^ __Vtemp2376[2]) | (__Vtemp2375[3] ^ __Vtemp2376[3]) | (__Vtemp2375[4] ^ __Vtemp2376[4])
         | (__Vtemp2377[0] ^ __Vtemp2378[0]) | (__Vtemp2377[1] ^ __Vtemp2378[1]) | (__Vtemp2377[2] ^ __Vtemp2378[2]) | (__Vtemp2377[3] ^ __Vtemp2378[3]) | (__Vtemp2377[4] ^ __Vtemp2378[4])
         | (__Vtemp2379[0] ^ __Vtemp2380[0]) | (__Vtemp2379[1] ^ __Vtemp2380[1])|| (__Vtemp2379[2] ^ __Vtemp2380[2]) | (__Vtemp2379[3] ^ __Vtemp2380[3]) | (__Vtemp2379[4] ^ __Vtemp2380[4])
         | (__Vtemp2381[0] ^ __Vtemp2382[0]) | (__Vtemp2381[1] ^ __Vtemp2382[1]) | (__Vtemp2381[2] ^ __Vtemp2382[2]) | (__Vtemp2381[3] ^ __Vtemp2382[3]) | (__Vtemp2381[4] ^ __Vtemp2382[4])
         | (__Vtemp2383[0] ^ __Vtemp2384[0]) | (__Vtemp2383[1] ^ __Vtemp2384[1])|| (__Vtemp2383[2] ^ __Vtemp2384[2]) | (__Vtemp2383[3] ^ __Vtemp2384[3]) | (__Vtemp2383[4] ^ __Vtemp2384[4])
         | (__Vtemp2385[0] ^ __Vtemp2386[0]) | (__Vtemp2385[1] ^ __Vtemp2386[1]) | (__Vtemp2385[2] ^ __Vtemp2386[2]) | (__Vtemp2385[3] ^ __Vtemp2386[3]) | (__Vtemp2385[4] ^ __Vtemp2386[4])
         | (__Vtemp2387[0] ^ __Vtemp2388[0]) | (__Vtemp2387[1] ^ __Vtemp2388[1])|| (__Vtemp2387[2] ^ __Vtemp2388[2]) | (__Vtemp2387[3] ^ __Vtemp2388[3]) | (__Vtemp2387[4] ^ __Vtemp2388[4])
         | (__Vtemp2389[0] ^ __Vtemp2390[0]) | (__Vtemp2389[1] ^ __Vtemp2390[1]) | (__Vtemp2389[2] ^ __Vtemp2390[2]) | (__Vtemp2389[3] ^ __Vtemp2390[3]) | (__Vtemp2389[4] ^ __Vtemp2390[4])
         | (__Vtemp2391[0] ^ __Vtemp2392[0]) | (__Vtemp2391[1] ^ __Vtemp2392[1])|| (__Vtemp2391[2] ^ __Vtemp2392[2]) | (__Vtemp2391[3] ^ __Vtemp2392[3]) | (__Vtemp2391[4] ^ __Vtemp2392[4])
         | (__Vtemp2393[0] ^ __Vtemp2394[0]) | (__Vtemp2393[1] ^ __Vtemp2394[1]) | (__Vtemp2393[2] ^ __Vtemp2394[2]) | (__Vtemp2393[3] ^ __Vtemp2394[3]) | (__Vtemp2393[4] ^ __Vtemp2394[4])
         | (__Vtemp2395[0] ^ __Vtemp2396[0]) | (__Vtemp2395[1] ^ __Vtemp2396[1])|| (__Vtemp2395[2] ^ __Vtemp2396[2]) | (__Vtemp2395[3] ^ __Vtemp2396[3]) | (__Vtemp2395[4] ^ __Vtemp2396[4])
         | (__Vtemp2397[0] ^ __Vtemp2398[0]) | (__Vtemp2397[1] ^ __Vtemp2398[1]) | (__Vtemp2397[2] ^ __Vtemp2398[2]) | (__Vtemp2397[3] ^ __Vtemp2398[3]) | (__Vtemp2397[4] ^ __Vtemp2398[4])
         | (__Vtemp2399[0] ^ __Vtemp2400[0]) | (__Vtemp2399[1] ^ __Vtemp2400[1])|| (__Vtemp2399[2] ^ __Vtemp2400[2]) | (__Vtemp2399[3] ^ __Vtemp2400[3]) | (__Vtemp2399[4] ^ __Vtemp2400[4])
         | (__Vtemp2401[0] ^ __Vtemp2402[0]) | (__Vtemp2401[1] ^ __Vtemp2402[1]) | (__Vtemp2401[2] ^ __Vtemp2402[2]) | (__Vtemp2401[3] ^ __Vtemp2402[3]) | (__Vtemp2401[4] ^ __Vtemp2402[4])
         | (__Vtemp2403[0] ^ __Vtemp2404[0]) | (__Vtemp2403[1] ^ __Vtemp2404[1])|| (__Vtemp2403[2] ^ __Vtemp2404[2]) | (__Vtemp2403[3] ^ __Vtemp2404[3]) | (__Vtemp2403[4] ^ __Vtemp2404[4])
         | (__Vtemp2405[0] ^ __Vtemp2406[0]) | (__Vtemp2405[1] ^ __Vtemp2406[1]) | (__Vtemp2405[2] ^ __Vtemp2406[2]) | (__Vtemp2405[3] ^ __Vtemp2406[3]) | (__Vtemp2405[4] ^ __Vtemp2406[4])
         | (__Vtemp2407[0] ^ __Vtemp2408[0]) | (__Vtemp2407[1] ^ __Vtemp2408[1])|| (__Vtemp2407[2] ^ __Vtemp2408[2]) | (__Vtemp2407[3] ^ __Vtemp2408[3]) | (__Vtemp2407[4] ^ __Vtemp2408[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[1])|| (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[1])|| (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[4])
         | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[1])|| (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[4]));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/add.v:15: top.fslu.exu.alu_ex.add_u.c\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2349[0] ^ __Vtemp2350[0]) | (__Vtemp2349[1] ^ __Vtemp2350[1]) | (__Vtemp2349[2] ^ __Vtemp2350[2]) | (__Vtemp2349[3] ^ __Vtemp2350[3]) | (__Vtemp2349[4] ^ __Vtemp2350[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2349\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2351[0] ^ __Vtemp2352[0]) | (__Vtemp2351[1] ^ __Vtemp2352[1]) | (__Vtemp2351[2] ^ __Vtemp2352[2]) | (__Vtemp2351[3] ^ __Vtemp2352[3]) | (__Vtemp2351[4] ^ __Vtemp2352[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2351\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2353[0] ^ __Vtemp2354[0]) | (__Vtemp2353[1] ^ __Vtemp2354[1]) | (__Vtemp2353[2] ^ __Vtemp2354[2]) | (__Vtemp2353[3] ^ __Vtemp2354[3]) | (__Vtemp2353[4] ^ __Vtemp2354[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2353\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2355[0] ^ __Vtemp2356[0]) | (__Vtemp2355[1] ^ __Vtemp2356[1]) | (__Vtemp2355[2] ^ __Vtemp2356[2]) | (__Vtemp2355[3] ^ __Vtemp2356[3]) | (__Vtemp2355[4] ^ __Vtemp2356[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2355\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2357[0] ^ __Vtemp2358[0]) | (__Vtemp2357[1] ^ __Vtemp2358[1]) | (__Vtemp2357[2] ^ __Vtemp2358[2]) | (__Vtemp2357[3] ^ __Vtemp2358[3]) | (__Vtemp2357[4] ^ __Vtemp2358[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2357\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2359[0] ^ __Vtemp2360[0]) | (__Vtemp2359[1] ^ __Vtemp2360[1]) | (__Vtemp2359[2] ^ __Vtemp2360[2]) | (__Vtemp2359[3] ^ __Vtemp2360[3]) | (__Vtemp2359[4] ^ __Vtemp2360[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2359\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2361[0] ^ __Vtemp2362[0]) | (__Vtemp2361[1] ^ __Vtemp2362[1]) | (__Vtemp2361[2] ^ __Vtemp2362[2]) | (__Vtemp2361[3] ^ __Vtemp2362[3]) | (__Vtemp2361[4] ^ __Vtemp2362[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2361\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2363[0] ^ __Vtemp2364[0]) | (__Vtemp2363[1] ^ __Vtemp2364[1]) | (__Vtemp2363[2] ^ __Vtemp2364[2]) | (__Vtemp2363[3] ^ __Vtemp2364[3]) | (__Vtemp2363[4] ^ __Vtemp2364[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2363\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2365[0] ^ __Vtemp2366[0]) | (__Vtemp2365[1] ^ __Vtemp2366[1]) | (__Vtemp2365[2] ^ __Vtemp2366[2]) | (__Vtemp2365[3] ^ __Vtemp2366[3]) | (__Vtemp2365[4] ^ __Vtemp2366[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2365\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2367[0] ^ __Vtemp2368[0]) | (__Vtemp2367[1] ^ __Vtemp2368[1]) | (__Vtemp2367[2] ^ __Vtemp2368[2]) | (__Vtemp2367[3] ^ __Vtemp2368[3]) | (__Vtemp2367[4] ^ __Vtemp2368[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2367\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2369[0] ^ __Vtemp2370[0]) | (__Vtemp2369[1] ^ __Vtemp2370[1]) | (__Vtemp2369[2] ^ __Vtemp2370[2]) | (__Vtemp2369[3] ^ __Vtemp2370[3]) | (__Vtemp2369[4] ^ __Vtemp2370[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2369\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2371[0] ^ __Vtemp2372[0]) | (__Vtemp2371[1] ^ __Vtemp2372[1]) | (__Vtemp2371[2] ^ __Vtemp2372[2]) | (__Vtemp2371[3] ^ __Vtemp2372[3]) | (__Vtemp2371[4] ^ __Vtemp2372[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2371\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2373[0] ^ __Vtemp2374[0]) | (__Vtemp2373[1] ^ __Vtemp2374[1]) | (__Vtemp2373[2] ^ __Vtemp2374[2]) | (__Vtemp2373[3] ^ __Vtemp2374[3]) | (__Vtemp2373[4] ^ __Vtemp2374[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2373\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2375[0] ^ __Vtemp2376[0]) | (__Vtemp2375[1] ^ __Vtemp2376[1]) | (__Vtemp2375[2] ^ __Vtemp2376[2]) | (__Vtemp2375[3] ^ __Vtemp2376[3]) | (__Vtemp2375[4] ^ __Vtemp2376[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2375\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2377[0] ^ __Vtemp2378[0]) | (__Vtemp2377[1] ^ __Vtemp2378[1]) | (__Vtemp2377[2] ^ __Vtemp2378[2]) | (__Vtemp2377[3] ^ __Vtemp2378[3]) | (__Vtemp2377[4] ^ __Vtemp2378[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2377\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2379[0] ^ __Vtemp2380[0]) | (__Vtemp2379[1] ^ __Vtemp2380[1]) | (__Vtemp2379[2] ^ __Vtemp2380[2]) | (__Vtemp2379[3] ^ __Vtemp2380[3]) | (__Vtemp2379[4] ^ __Vtemp2380[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2379\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2381[0] ^ __Vtemp2382[0]) | (__Vtemp2381[1] ^ __Vtemp2382[1]) | (__Vtemp2381[2] ^ __Vtemp2382[2]) | (__Vtemp2381[3] ^ __Vtemp2382[3]) | (__Vtemp2381[4] ^ __Vtemp2382[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2381\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2383[0] ^ __Vtemp2384[0]) | (__Vtemp2383[1] ^ __Vtemp2384[1]) | (__Vtemp2383[2] ^ __Vtemp2384[2]) | (__Vtemp2383[3] ^ __Vtemp2384[3]) | (__Vtemp2383[4] ^ __Vtemp2384[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2383\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2385[0] ^ __Vtemp2386[0]) | (__Vtemp2385[1] ^ __Vtemp2386[1]) | (__Vtemp2385[2] ^ __Vtemp2386[2]) | (__Vtemp2385[3] ^ __Vtemp2386[3]) | (__Vtemp2385[4] ^ __Vtemp2386[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2385\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2387[0] ^ __Vtemp2388[0]) | (__Vtemp2387[1] ^ __Vtemp2388[1]) | (__Vtemp2387[2] ^ __Vtemp2388[2]) | (__Vtemp2387[3] ^ __Vtemp2388[3]) | (__Vtemp2387[4] ^ __Vtemp2388[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2387\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2389[0] ^ __Vtemp2390[0]) | (__Vtemp2389[1] ^ __Vtemp2390[1]) | (__Vtemp2389[2] ^ __Vtemp2390[2]) | (__Vtemp2389[3] ^ __Vtemp2390[3]) | (__Vtemp2389[4] ^ __Vtemp2390[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2389\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2391[0] ^ __Vtemp2392[0]) | (__Vtemp2391[1] ^ __Vtemp2392[1]) | (__Vtemp2391[2] ^ __Vtemp2392[2]) | (__Vtemp2391[3] ^ __Vtemp2392[3]) | (__Vtemp2391[4] ^ __Vtemp2392[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2391\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2393[0] ^ __Vtemp2394[0]) | (__Vtemp2393[1] ^ __Vtemp2394[1]) | (__Vtemp2393[2] ^ __Vtemp2394[2]) | (__Vtemp2393[3] ^ __Vtemp2394[3]) | (__Vtemp2393[4] ^ __Vtemp2394[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2393\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2395[0] ^ __Vtemp2396[0]) | (__Vtemp2395[1] ^ __Vtemp2396[1]) | (__Vtemp2395[2] ^ __Vtemp2396[2]) | (__Vtemp2395[3] ^ __Vtemp2396[3]) | (__Vtemp2395[4] ^ __Vtemp2396[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2395\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2397[0] ^ __Vtemp2398[0]) | (__Vtemp2397[1] ^ __Vtemp2398[1]) | (__Vtemp2397[2] ^ __Vtemp2398[2]) | (__Vtemp2397[3] ^ __Vtemp2398[3]) | (__Vtemp2397[4] ^ __Vtemp2398[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2397\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2399[0] ^ __Vtemp2400[0]) | (__Vtemp2399[1] ^ __Vtemp2400[1]) | (__Vtemp2399[2] ^ __Vtemp2400[2]) | (__Vtemp2399[3] ^ __Vtemp2400[3]) | (__Vtemp2399[4] ^ __Vtemp2400[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2399\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2401[0] ^ __Vtemp2402[0]) | (__Vtemp2401[1] ^ __Vtemp2402[1]) | (__Vtemp2401[2] ^ __Vtemp2402[2]) | (__Vtemp2401[3] ^ __Vtemp2402[3]) | (__Vtemp2401[4] ^ __Vtemp2402[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2401\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2403[0] ^ __Vtemp2404[0]) | (__Vtemp2403[1] ^ __Vtemp2404[1]) | (__Vtemp2403[2] ^ __Vtemp2404[2]) | (__Vtemp2403[3] ^ __Vtemp2404[3]) | (__Vtemp2403[4] ^ __Vtemp2404[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2403\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2405[0] ^ __Vtemp2406[0]) | (__Vtemp2405[1] ^ __Vtemp2406[1]) | (__Vtemp2405[2] ^ __Vtemp2406[2]) | (__Vtemp2405[3] ^ __Vtemp2406[3]) | (__Vtemp2405[4] ^ __Vtemp2406[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2405\n"); );
    VL_DEBUG_IF( if(__req && ((__Vtemp2407[0] ^ __Vtemp2408[0]) | (__Vtemp2407[1] ^ __Vtemp2408[1]) | (__Vtemp2407[2] ^ __Vtemp2408[2]) | (__Vtemp2407[3] ^ __Vtemp2408[3]) | (__Vtemp2407[4] ^ __Vtemp2408[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:127: __Vtemp2407\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[0] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[0]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[1] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[1]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[2] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[2]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[3] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[3]) | (vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[4] ^ vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[4]))) VL_DBG_MSGF("        CHANGE: /home/lff/ysyx-workbench/npc/vsrc/mul.v:190: c\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[1U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [1U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[2U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [2U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[3U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [3U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[4U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [4U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[5U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [5U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[6U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [6U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[7U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [7U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[8U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [8U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[9U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [9U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xaU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xaU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xbU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xbU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xcU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xcU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xdU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xdU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xeU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xeU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0xfU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0xfU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x10U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x10U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x11U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x11U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x12U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x13U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x13U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x14U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x15U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x15U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x16U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x16U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x17U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x17U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x18U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x19U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x19U][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1aU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1bU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1cU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1cU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry
        [0x1dU][4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18.c[4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20.c[4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24.c[4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26.c[4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27.c[4U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[0U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[0U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[1U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[1U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[2U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[2U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[3U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[3U];
    vlSelf->__Vchglast__TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29__c[4U] 
        = vlSymsp->TOP__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29.c[4U];
    return __req;
}
