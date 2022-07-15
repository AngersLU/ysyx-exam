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

void Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

void Vysyx_2022040010_top___024root___initial__TOP__2(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___initial__TOP__2\n"); );
    // Body
    Vysyx_2022040010_top___024root____Vdpiimwrap_ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs);
}

void Vysyx_2022040010_top___024root___settle__TOP__3(Vysyx_2022040010_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2022040010_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_2022040010_top___024root___settle__TOP__3\n"); );
    // Variables
    CData/*6:0*/ ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c;
    CData/*0:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c;
    CData/*7:0*/ ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__b_data;
    SData/*12:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B;
    SData/*15:0*/ ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__h_data;
    VlWide<3>/*64:0*/ ysyx_2022040010_top__DOT__fslu__DOT__br_bus;
    IData/*31:0*/ ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__w_data;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<5>/*159:0*/ __Vtemp60;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result;
    QData/*63:0*/ ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp;
    // Body
    vlSelf->isram_e = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    vlSelf->isram_addr = vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg;
    vlSelf->dsram_e = (1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                             >> 8U));
    vlSelf->dsram_wdata = ((0x40000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                            ? (QData)((IData)((0xffU 
                                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                            : ((0x20000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                ? (QData)((IData)((0xffffU 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))
                                : ((0x10000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
                                    ? (QData)((IData)(
                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))
                                    : (((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
            ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
            ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B 
        = ((0x1000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                       >> 0xfU)) | ((0x800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                               << 8U)) 
                                    | ((0x7e0U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)) 
                                       | (0x1eU & (
                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                      >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                   >> 0x19U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 0x18U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
        = ((0x4000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                << 0x24U) | (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                        >> 0x1cU)))
            : ((0x8000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? 0ULL : ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
                           ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
                           : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
        = ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__ce)
            ? ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__flag)
                ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__buf_inst
                : vlSelf->isram_rdata) : 0U);
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend 
        = (((- (QData)((IData)((1U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                      >> 0x1bU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 
        = ((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
            == ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
            ? 1U : 0U);
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend 
        = (((- (QData)((IData)((1U & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B) 
                                      >> 0xbU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B)))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp 
        = (((0x100000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
             ? 0U : 1U) ? (((QData)((IData)((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                             >> 1U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                >> 2U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 3U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                      >> 4U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 5U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 6U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 7U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 8U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 9U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xaU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 0x20U)) 
                                                          << 0x1fU) 
                                                         | ((0x40000000U 
                                                             & ((IData)(
                                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 0x21U)) 
                                                                << 0x1eU)) 
                                                            | ((0x20000000U 
                                                                & ((IData)(
                                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 0x22U)) 
                                                                   << 0x1dU)) 
                                                               | ((0x10000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 0x23U)) 
                                                                      << 0x1cU)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x24U)) 
                                                                         << 0x1bU)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x25U)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x26U)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                              | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))))
            : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    VL_EXTEND_WI(65,32, __Vtemp28, (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp29, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp28[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp28[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp28[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp29[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp29[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp29[2U];
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (((2U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x19U)) << 2U) | (((1U == 
                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 1U) 
                                            | (0U == 
                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffff8U & (((5U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 5U) 
                             | (((4U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 4U) | ((3U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffffffc0U & (((8U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                      >> 0x19U)) << 8U) 
                             | (((7U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                                 << 7U) | ((6U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                           << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffffe00U & (((0xbU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xbU) | (((0xaU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((9U == 
                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                               >> 0x19U)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffff000U & (((0xeU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                        >> 0x19U)) 
                              << 0xeU) | (((0xdU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffff8000U & (((0x11U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x10U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xfffc0000U & (((0x14U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x13U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xffe00000U & (((0x17U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x16U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xff000000U & (((0x1aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x19U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xf8000000U & (((0x1dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x1cU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]) 
           | (0xc0000000U & (((0x1fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | ((0x1eU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                >> 1U)) 
                                | ((0x1eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffff1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffffeU & (((0x23U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 3U) | (((0x22U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffff8fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffff0U & (((0x26U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 6U) | (((0x25U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 4U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfffffc7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffff80U & (((0x29U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 9U) | (((0x28U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffffe3ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xcU) | (((0x2bU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xaU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffff1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffffe000U & (((0x2fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xfU) | (((0x2eU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfff8ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffff0000U & (((0x32U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x12U) | (((0x31U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x10U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xffc7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfff80000U & (((0x35U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x15U) | (((0x34U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xfe3fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xffc00000U & (((0x38U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x18U) | (((0x37U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x16U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0xf1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xfe000000U & (((0x3bU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1bU) | (((0x3aU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x8fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | (0xf0000000U & (((0x3eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1eU) | (((0x3dU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1cU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]) 
           | ((0x3fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffffffcU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == 
                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U))) 
                                | ((0x3fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x19U)) 
                                   >> 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffffe3U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffffffcU & (((0x44U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 4U) | (((0x43U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffff1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffffe0U & (((0x47U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 7U) | (((0x46U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffff8ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffff00U & (((0x4aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xaU) | (((0x49U == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 9U) | 
                                          ((0x48U == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 8U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xffffc7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffff800U & (((0x4dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xdU) | (((0x4cU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfffe3fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xffffc000U & (((0x50U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x10U) | (((0x4fU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xeU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfff1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfffe0000U & (((0x53U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x13U) | (((0x52U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xff8fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfff00000U & (((0x56U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x16U) | (((0x55U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x14U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xfc7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xff800000U & (((0x59U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x19U) | (((0x58U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0xe3ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xfc000000U & (((0x5cU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1cU) | (((0x5bU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1aU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[2U]) 
           | (0xe0000000U & (((0x5fU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1fU) | (((0x5eU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (((0x62U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                          >> 0x19U)) << 2U) | (((0x61U 
                                                 == 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                                << 1U) 
                                               | (0x60U 
                                                  == 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffff8U & (((0x65U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 5U) | (((0x64U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffffffc0U & (((0x68U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 8U) | (((0x67U == 
                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x19U)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == 
                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                     >> 0x19U)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xbU) | (((0x6aU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffff000U & (((0x6eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0xeU) | (((0x6dU == 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                             >> 0x19U)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                  >> 0x19U)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffff8000U & (((0x71U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x11U) | (((0x70U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xfffc0000U & (((0x74U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x14U) | (((0x73U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xffe00000U & (((0x77U == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x17U) | (((0x76U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xff000000U & (((0x7aU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1aU) | (((0x79U 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | (0xf8000000U & (((0x7dU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                         >> 0x19U)) 
                              << 0x1dU) | (((0x7cU 
                                             == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                 >> 0x19U)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                   >> 0x19U)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[3U]) 
           | ((0x7eU == (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                         >> 0x19U)) << 0x1eU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xf8U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((2U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 2U) | ((
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 1U) 
                                                  | (0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                         >> 0xcU))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xc7U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | (((5U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                             >> 0xcU))) << 5U) | ((
                                                   (4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                        >> 0xcU))) 
                                                   << 4U) 
                                                  | ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                                          >> 0xcU))) 
                                                     << 3U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d 
        = ((0xbfU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
           | ((6U == (7U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                            >> 0xcU))) << 6U));
    ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode 
        = (0x7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2 
        = ((0x400U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend
            : ((0x800U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? (((QData)((IData)((- (IData)((1U 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 0x1bU)))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                    << 4U)))))
                : ((0x1000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                    ? (QData)((IData)((0x3fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U))))
                    : ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
                        ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
                        : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr 
        = ((0x20U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
            ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                         << 0x24U) | (((QData)((IData)(
                                                       vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                       + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
            : ((0x10U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                           >> 0x1cU))) 
                           + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                : ((8U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                    ? (4ULL + ((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                               + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                    : ((4U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                        ? (4ULL + ((((QData)((IData)(
                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                     >> 0x1cU))) 
                                   + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                        : ((2U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                            ? (4ULL + ((((QData)((IData)(
                                                         vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU))) 
                                       + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                            : ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                ? (4ULL + ((((QData)((IData)(
                                                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU))) 
                                           + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                : ((0x80U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                    ? (4ULL + ((((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                      >> 0x1cU))) 
                                               + ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                    : ((0x40U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op))
                                        ? (4ULL + (
                                                   (((QData)((IData)(
                                                                     vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                          >> 0x1cU))) 
                                                   + 
                                                   (0xfffffffffffffffeULL 
                                                    & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend)))
                                        : 0ULL))))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (((2U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((1U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffff8U & (((5U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((4U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (3U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffffffc0U & (((8U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((7U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (6U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffffe00U & (((0xbU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0xaU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((9U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffff000U & (((0xeU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0xdU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0xcU 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffff8000U & (((0x11U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x10U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0xfU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xfffc0000U & (((0x14U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x13U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x12U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xffe00000U & (((0x17U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x16U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x15U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xff000000U & (((0x1aU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x19U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x18U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xf8000000U & (((0x1dU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x1cU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x1bU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
        = ((0x3fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
           | (0xc0000000U & (((0x1fU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | ((0x1eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0x3fffffffU & ((0x3fffffffU & (0x20U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode))) 
                             | ((0x3fffffffU & ((0x1fU 
                                                 == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                >> 1U)) 
                                | ((0x1eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffff1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffffeU & (((0x23U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 3U) | (((0x22U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 2U) | (
                                                   (0x21U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffff8fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffff0U & (((0x26U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 6U) | (((0x25U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 5U) | (
                                                   (0x24U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 4U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfffffc7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffff80U & (((0x29U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 9U) | (((0x28U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 8U) | (
                                                   (0x27U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 7U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffffe3ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfffffc00U & (((0x2cU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xcU) | (((0x2bU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xbU) 
                                          | ((0x2aU 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xaU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffff1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffffe000U & (((0x2fU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xfU) | (((0x2eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xeU) 
                                          | ((0x2dU 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xdU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfff8ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffff0000U & (((0x32U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x12U) | (((0x31U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x11U) 
                                           | ((0x30U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x10U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xffc7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfff80000U & (((0x35U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x15U) | (((0x34U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x14U) 
                                           | ((0x33U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x13U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xfe3fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xffc00000U & (((0x38U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x18U) | (((0x37U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x17U) 
                                           | ((0x36U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x16U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0xf1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xfe000000U & (((0x3bU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1bU) | (((0x3aU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1aU) 
                                           | ((0x39U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x19U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x8fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | (0xf0000000U & (((0x3eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1eU) | (((0x3dU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1dU) 
                                           | ((0x3cU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1cU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U]) 
           | ((0x3fU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1fU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffffffcU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0x7fffffffU & ((0x7ffffffeU & ((0x41U 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 1U)) 
                             | ((0x7fffffffU & (0x40U 
                                                == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode))) 
                                | ((0x3fU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                   >> 1U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffffe3U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffffffcU & (((0x44U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 4U) | (((0x43U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 3U) | (
                                                   (0x42U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 2U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffff1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffffe0U & (((0x47U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 7U) | (((0x46U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 6U) | (
                                                   (0x45U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 5U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffff8ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffff00U & (((0x4aU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xaU) | (((0x49U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 9U) | 
                                          ((0x48U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 8U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xffffc7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffff800U & (((0x4dU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xdU) | (((0x4cU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xcU) 
                                          | ((0x4bU 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xbU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfffe3fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xffffc000U & (((0x50U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x10U) | (((0x4fU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0xfU) 
                                           | ((0x4eU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xeU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfff1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfffe0000U & (((0x53U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x13U) | (((0x52U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x12U) 
                                           | ((0x51U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x11U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xff8fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfff00000U & (((0x56U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x16U) | (((0x55U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x15U) 
                                           | ((0x54U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x14U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xfc7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xff800000U & (((0x59U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x19U) | (((0x58U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x18U) 
                                           | ((0x57U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x17U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0xe3ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xfc000000U & (((0x5cU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1cU) | (((0x5bU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1bU) 
                                           | ((0x5aU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1aU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[2U]) 
           | (0xe0000000U & (((0x5fU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1fU) | (((0x5eU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1eU) 
                                           | ((0x5dU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffff8U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (((0x62U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
               << 2U) | (((0x61U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                          << 1U) | (0x60U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffffffc7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffff8U & (((0x65U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 5U) | (((0x64U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 4U) | (
                                                   (0x63U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 3U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffffe3fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffffffc0U & (((0x68U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 8U) | (((0x67U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                         << 7U) | (
                                                   (0x66U 
                                                    == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                                   << 6U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffff1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffffe00U & (((0x6bU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xbU) | (((0x6aU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xaU) 
                                          | ((0x69U 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 9U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffff8fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffff000U & (((0x6eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0xeU) | (((0x6dU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                           << 0xdU) 
                                          | ((0x6cU 
                                              == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                             << 0xcU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xfffc7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffff8000U & (((0x71U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x11U) | (((0x70U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x10U) 
                                           | ((0x6fU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0xfU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xffe3ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xfffc0000U & (((0x74U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x14U) | (((0x73U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x13U) 
                                           | ((0x72U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x12U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xff1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xffe00000U & (((0x77U == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x17U) | (((0x76U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x16U) 
                                           | ((0x75U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x15U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xf8ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xff000000U & (((0x7aU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1aU) | (((0x79U 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x19U) 
                                           | ((0x78U 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x18U)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xc7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | (0xf8000000U & (((0x7dU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                              << 0x1dU) | (((0x7cU 
                                             == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                            << 0x1cU) 
                                           | ((0x7bU 
                                               == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
                                              << 0x1bU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U]) 
           | ((0x7eU == (IData)(ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__opcode)) 
              << 0x1eU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
        = VL_SHIFTR_QQQ(64,64,64, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2);
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b 
        = ((1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                    >> 0x1aU) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                 >> 0x19U)) | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                               >> 0x18U)))
            ? (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)
            : vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2);
    ysyx_2022040010_top__DOT__fslu__DOT__br_bus[0U] 
        = (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr);
    ysyx_2022040010_top__DOT__fslu__DOT__br_bus[1U] 
        = (IData)((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_addr 
                   >> 0x20U));
    ysyx_2022040010_top__DOT__fslu__DOT__br_bus[2U] 
        = (1U & (((((((IData)((0U != (0xc0U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op)))) 
                      | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                          >> 5U) & (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2))) 
                     | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                         >> 4U) & (~ (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2)))) 
                    | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                        >> 3U) & (VL_LTS_IQQ(1,64,64, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                   ? 1U : 0U))) | (
                                                   ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                    >> 2U) 
                                                   & (VL_GTES_IQQ(1,64,64, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                       ? 1U
                                                       : 0U))) 
                  | (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                      >> 1U) & ((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                                 < ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                 ? 1U : 0U))) | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                 & ((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                     >= ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 7U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                    >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U] 
                                           >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((1U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | ((4U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     >> 0x15U)) | (2U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                         >> 0x16U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xbU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (4U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U]) 
                    >> 0x15U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 5U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                       >> 0x14U))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[3U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                    >> 0x14U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                              >> 0x1eU))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i 
                                           >> 0x1eU)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 4U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                               >> 7U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 1U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 2U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 6U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 4U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 5U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                  >> 3U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                            >> 3U)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d)) 
                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 1U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 2U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 3U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x1bU) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 5U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[1U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 4U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 6U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                   >> 0x13U) & ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d) 
                                >> 7U)) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d[0U]));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WI(65,32, __Vtemp33, (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp34, ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp33[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp33[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp33[2U];
    } else {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp34[0U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp34[1U];
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp34[2U];
    }
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__next_pc 
        = ((1U & ysyx_2022040010_top__DOT__fslu__DOT__br_bus[2U])
            ? (((QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__br_bus[1U])) 
                << 0x20U) | (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__br_bus[0U])))
            : (4ULL + vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((7U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
              << 3U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xdU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
              << 1U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 
        = ((0xeU & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2)) 
           | (((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or)) 
              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 
        = ((6U & (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1)) 
           | (((((((((((((((((((((((((((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add)) 
                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub)) 
                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll)) 
                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt)) 
                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu)) 
                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl)) 
                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra)) 
                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op 
        = ((0x800U & (((((((((((((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add) 
                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw)) 
                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi)) 
                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw)) 
                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb)) 
                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh)) 
                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw)) 
                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld)) 
                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu)) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu)) 
                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu)) 
                           | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb)) 
                          | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh)) 
                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw)) 
                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd)) 
                       << 0xbU) | (0xff800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[0U] 
                                               >> 0xcU)))) 
           | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub) 
                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw)) 
               << 0xaU) | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt) 
                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti)) 
                            << 9U) | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu) 
                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu)) 
                                       << 8U) | (((
                                                   (((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and) 
                                                     | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi)) 
                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc)) 
                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci)) 
                                                  << 7U) 
                                                 | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or) 
                                                        | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori)) 
                                                       | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs)) 
                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi)) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor) 
                                                         | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori)) 
                                                        << 5U) 
                                                       | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll) 
                                                              | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli)) 
                                                             | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw)) 
                                                            | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw)) 
                                                           << 4U) 
                                                          | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl) 
                                                                 | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli)) 
                                                                | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw)) 
                                                               | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw)) 
                                                              << 3U) 
                                                             | ((((((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra) 
                                                                    | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai)) 
                                                                   | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw)) 
                                                                  | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw)) 
                                                                 << 2U) 
                                                                | ((2U 
                                                                    & (((0x3feU 
                                                                         & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d[1U] 
                                                                            >> 0x16U)) 
                                                                        | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw) 
                                                                           << 1U)) 
                                                                       | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi) 
                                                                          << 1U))) 
                                                                   | ((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall) 
                                                                      | (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak)))))))))))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 1U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 2U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 3U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 4U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 5U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 6U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 7U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 8U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 9U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xaU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xbU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xcU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xdU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xeU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xfU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x10U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x11U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x12U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x13U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x14U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x15U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x16U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x17U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x18U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x19U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1aU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1bU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1cU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1dU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1eU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c 
        = (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
           >> 0x1fU);
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c 
        = (1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 1U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 2U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 3U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 4U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 5U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 6U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 7U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 8U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 9U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xaU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xbU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xcU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xdU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xeU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xfU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x10U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x11U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x12U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x13U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x14U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x15U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x16U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x17U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x18U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x19U));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1aU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1bU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1cU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1dU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c 
        = (1U & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1eU));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c 
        = (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
           >> 0x1fU);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (1U & ((((((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | (((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                     | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U])) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (2U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 1U)) << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (4U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 2U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 2U)) << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (8U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             >> 3U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               >> 3U)) << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 4U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 6U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                >> 7U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 8U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 9U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xaU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 >> 0xbU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xcU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xdU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xeU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                  >> 0xfU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x100000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x200000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x400000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x800000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x1000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x2000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x4000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x8000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x10000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x20000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x40000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]) 
           | (0x80000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (1U & ((((((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | (((~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                     | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                         & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U])) 
                        & (~ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffdU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (2U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 1U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 1U))) 
                        << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 1U)) << 1U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 1U)) << 1U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 1U)) << 1U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 1U)) 
                                                 << 1U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffffbU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (4U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 2U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 2U))) 
                        << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 2U)) << 2U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 2U)) << 2U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 2U)) << 2U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 2U)) 
                                                 << 2U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffff7U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (8U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             >> 3U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                           >> 3U))) 
                        << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                      | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               >> 3U)) << 3U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                         & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                >> 3U)) << 3U))) | 
                     ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                       & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                              >> 3U)) << 3U)) & ((~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                   >> 3U)) 
                                                 << 3U))) 
                    | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffefU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 4U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 4U))) 
                           << 4U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 4U)) << 4U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 4U)) << 4U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 4U)) << 4U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 4U)) << 4U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffdfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 5U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 5U))) 
                           << 5U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 5U)) << 5U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 5U)) << 5U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 5U)) << 5U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 5U)) << 5U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffffbfU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 6U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 6U))) 
                           << 6U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 6U)) << 6U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 6U)) << 6U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 6U)) << 6U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 6U)) << 6U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffff7fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                >> 7U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                              >> 7U))) 
                           << 7U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                         | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 7U)) << 7U) & 
                             vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 7U)) << 7U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                   >> 7U)) << 7U)) 
                           & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                  >> 7U)) << 7U))) 
                       | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffeffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 8U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 8U))) 
                            << 8U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 8U)) << 8U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 8U)) << 8U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 8U)) << 8U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 8U)) << 8U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffdffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 9U)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                               >> 9U))) 
                            << 9U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 9U)) << 9U) & 
                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 9U)) << 9U))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 9U)) << 9U)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 9U)) << 9U))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffffbffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xaU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xaU))) 
                            << 0xaU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xaU)) << 0xaU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xaU)) << 0xaU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xaU)) << 0xaU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xaU)) << 0xaU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffff7ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 >> 0xbU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                 >> 0xbU))) 
                            << 0xbU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                          | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0xbU)) << 0xbU) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xbU)) << 0xbU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                    >> 0xbU)) << 0xbU)) 
                            & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                   >> 0xbU)) << 0xbU))) 
                        | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffefffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xcU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xcU))) 
                             << 0xcU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xcU)) << 0xcU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xcU)) << 0xcU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xcU)) << 0xcU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xcU)) << 0xcU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffdfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xdU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xdU))) 
                             << 0xdU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xdU)) << 0xdU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xdU)) << 0xdU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xdU)) << 0xdU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xdU)) << 0xdU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffffbfffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xeU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xeU))) 
                             << 0xeU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xeU)) << 0xeU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xeU)) << 0xeU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xeU)) << 0xeU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xeU)) << 0xeU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffff7fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                  >> 0xfU)) & (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0xfU))) 
                             << 0xfU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                           | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0xfU)) << 0xfU) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0xfU)) << 0xfU))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                     >> 0xfU)) << 0xfU)) 
                             & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                    >> 0xfU)) << 0xfU))) 
                         | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffeffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x10U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x10U))) 
                              << 0x10U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x10U)) << 0x10U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x10U)) << 0x10U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x10U)) << 0x10U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x10U)) << 0x10U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffdffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x11U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x11U))) 
                              << 0x11U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x11U)) << 0x11U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x11U)) << 0x11U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x11U)) << 0x11U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x11U)) << 0x11U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfffbffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x12U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x12U))) 
                              << 0x12U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x12U)) << 0x12U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x12U)) << 0x12U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x12U)) << 0x12U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x12U)) << 0x12U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfff7ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                   >> 0x13U)) & (~ 
                                                 (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                  >> 0x13U))) 
                              << 0x13U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                            | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x13U)) << 0x13U) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x13U)) << 0x13U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x13U)) << 0x13U)) 
                              & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                     >> 0x13U)) << 0x13U))) 
                          | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                             & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffefffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x100000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x14U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x14U))) 
                               << 0x14U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x14U)) << 0x14U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x14U)) << 0x14U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x14U)) << 0x14U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x14U)) << 0x14U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffdfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x200000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x15U))) 
                               << 0x15U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x15U)) << 0x15U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x15U)) << 0x15U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x15U)) << 0x15U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x15U)) << 0x15U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xffbfffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x400000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x16U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x16U))) 
                               << 0x16U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x16U)) << 0x16U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x16U)) << 0x16U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x16U)) << 0x16U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x16U)) << 0x16U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xff7fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x800000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                   >> 0x17U))) 
                               << 0x17U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                             | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x17U)) << 0x17U) 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                       >> 0x17U)) << 0x17U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x17U)) << 0x17U)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x17U)) << 0x17U))) 
                           | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfeffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x1000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x18U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x18U))) 
                                << 0x18U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x18U)) << 0x18U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x18U)) 
                                    << 0x18U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x18U)) 
                                                       << 0x18U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x18U)) 
                                                      << 0x18U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfdffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x2000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x19U)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x19U))) 
                                << 0x19U) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x19U)) << 0x19U) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x19U)) 
                                    << 0x19U))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x19U)) 
                                                       << 0x19U)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x19U)) 
                                                      << 0x19U))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xfbffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x4000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1aU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1aU))) 
                                << 0x1aU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1aU)) << 0x1aU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1aU)) 
                                    << 0x1aU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1aU)) 
                                                       << 0x1aU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1aU)) 
                                                      << 0x1aU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xf7ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x8000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                     >> 0x1bU)) & (~ 
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                    >> 0x1bU))) 
                                << 0x1bU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                              | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                       >> 0x1bU)) << 0x1bU) 
                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                 & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                        >> 0x1bU)) 
                                    << 0x1bU))) | (
                                                   (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                                    & ((~ 
                                                        (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                                         >> 0x1bU)) 
                                                       << 0x1bU)) 
                                                   & ((~ 
                                                       (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                                        >> 0x1bU)) 
                                                      << 0x1bU))) 
                            | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                               & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xefffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x10000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1cU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1cU))) << 0x1cU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1cU)) 
                                    << 0x1cU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1cU)) 
                                     << 0x1cU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1cU)) << 0x1cU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1cU)) << 0x1cU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xdfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x20000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1dU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1dU))) << 0x1dU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1dU)) 
                                    << 0x1dU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1dU)) 
                                     << 0x1dU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1dU)) << 0x1dU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1dU)) << 0x1dU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0xbfffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x40000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1eU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1eU))) << 0x1eU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1eU)) 
                                    << 0x1eU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1eU)) 
                                     << 0x1eU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1eU)) << 0x1eU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1eU)) << 0x1eU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U] 
        = ((0x7fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U]) 
           | (0x80000000U & (((((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                      >> 0x1fU)) & 
                                  (~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                      >> 0x1fU))) << 0x1fU) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
                               | ((((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                        >> 0x1fU)) 
                                    << 0x1fU) & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                  & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                         >> 0x1fU)) 
                                     << 0x1fU))) | 
                              ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                                       >> 0x1fU)) << 0x1fU)) 
                               & ((~ (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
                                      >> 0x1fU)) << 0x1fU))) 
                             | ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U]) 
                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffffe1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffffeU & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffe1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffffe0U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffffe1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffffe00U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffe1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffffe000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xffe1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfffe0000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfe1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xffe00000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xe1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xfe000000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (0xe0000000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffffeU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0x1fffffffU & ((0x1fffffffU & (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c)) 
                             | ((0x1fffffffU & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c) 
                                                >> 1U)) 
                                | ((0x1fffffffU & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                   | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c) 
                                      >> 3U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffffe1U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffffeU & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c) 
                              << 4U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c) 
                                         << 3U) | (
                                                   ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c) 
                                                    << 2U) 
                                                   | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c) 
                                                      << 1U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffffe1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffffe0U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c) 
                              << 8U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c) 
                                         << 7U) | (
                                                   ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c) 
                                                    << 6U) 
                                                   | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c) 
                                                      << 5U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffffe1ffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffffe00U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c) 
                              << 0xcU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c) 
                                           << 0xbU) 
                                          | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c) 
                                              << 0xaU) 
                                             | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c) 
                                                << 9U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfffe1fffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffffe000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c) 
                              << 0x10U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c) 
                                            << 0xfU) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c) 
                                               << 0xeU) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c) 
                                                 << 0xdU))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xffe1ffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfffe0000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c) 
                              << 0x14U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c) 
                                            << 0x13U) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c) 
                                               << 0x12U) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c) 
                                                 << 0x11U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xfe1fffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xffe00000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c) 
                              << 0x18U) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c) 
                                            << 0x17U) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c) 
                                               << 0x16U) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c) 
                                                 << 0x15U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0xe1ffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xfe000000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c) 
                              << 0x1cU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c) 
                                            << 0x1bU) 
                                           | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c) 
                                               << 0x1aU) 
                                              | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c) 
                                                 << 0x19U))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U] 
        = ((0x1fffffffU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U]) 
           | (0xe0000000U & (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                              << 0x1fU) | (((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                            << 0x1eU) 
                                           | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                              << 0x1dU)))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U] 
        = (1U & ((0x1fffffffU & (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c)) 
                 | ((0x1fffffffU & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c) 
                                    >> 1U)) | ((0x1fffffffU 
                                                & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c) 
                                                   >> 2U)) 
                                               | ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c) 
                                                  >> 3U)))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
        = ((0x4000000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])
            ? (((QData)((IData)((- (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U] 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U])))
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s[0U]))));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result 
        = (QData)((IData)((1U & (~ ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                             >> 0x3fU)) 
                                    ^ ((IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2 
                                                >> 0x3fU)) 
                                       & (IData)((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result 
                                                  >> 0x3fU))))))));
    __Vtemp38[1U] = (((IData)(((- (QData)((IData)((1U 
                                                   & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                        >> 0x14U) 
                                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                          >> 0x13U)) 
                                                      | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                         >> 0x12U)))))) 
                               & ((0x100000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                   ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                   : ((0x80000U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                       ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                       : ((0x40000U 
                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                              >> 0x3fU)))))) 
                                               & (~ 
                                                  VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                              | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                           : 0ULL))))) 
                      >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                (1U 
                                                                 & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                      >> 0x14U) 
                                                                     | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x13U)) 
                                                                    | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                       >> 0x12U)))))) 
                                             & ((0x100000U 
                                                 & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                 ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                 : 
                                                ((0x80000U 
                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                  ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                  : 
                                                 ((0x40000U 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                    & (~ 
                                                       VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                   | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                   : 0ULL)))) 
                                            >> 0x20U)) 
                                   << 1U));
    __Vtemp39[0U] = (1U | (((IData)(((- (QData)((IData)(
                                                        (1U 
                                                         & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                             >> 0x1bU) 
                                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                               >> 0x1aU)))))) 
                                     & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                            << 1U) | (1U | ((IData)(
                                                    ((- (QData)((IData)(
                                                                        (1U 
                                                                         & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                              >> 0x14U) 
                                                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                            | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                               >> 0x12U)))))) 
                                                     & ((0x100000U 
                                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                         ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                         : 
                                                        ((0x80000U 
                                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                          ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                          : 
                                                         ((0x40000U 
                                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                           ? 
                                                          (((- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                            & (~ 
                                                               VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                           | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                           : 0ULL))))) 
                                            << 1U))));
    __Vtemp39[2U] = (((IData)((((- (QData)((IData)(
                                                   (1U 
                                                    & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                        >> 0x1bU) 
                                                       | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                          >> 0x1aU)))))) 
                                & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                               >> 0x20U)) | (IData)(
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                               >> 0x14U) 
                                                                              | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x13U)) 
                                                                             | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x12U)))))) 
                                                      & ((0x100000U 
                                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                          ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                           ? vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                                                            ? 
                                                           (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))) 
                                                             & (~ 
                                                                VL_SHIFTR_QQQ(64,64,64, 0xffffffffffffULL, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                            | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res)
                                                            : 0ULL)))) 
                                                     >> 0x20U))) 
                     >> 0x1fU);
    __Vtemp41[1U] = (((((IData)(((- (QData)((IData)(
                                                    (1U 
                                                     & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                         >> 0x1bU) 
                                                        | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x1aU)))))) 
                                 & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result)) 
                        >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                  (1U 
                                                                   & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                       >> 0x1bU) 
                                                                      | (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x1aU)))))) 
                                               & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_result) 
                                              >> 0x20U)) 
                                     << 1U)) | __Vtemp38[1U]) 
                     | (((IData)(((- (QData)((IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                         >> 0x17U))))) 
                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                         >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                       >> 0x17U))))) 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                   & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                               >> 0x20U)) 
                                      << 1U)));
    __Vtemp45[1U] = ((__Vtemp41[1U] | (((IData)(((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x16U))))) 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                    | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                        >> 0x1fU) | 
                                       ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x16U))))) 
                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                     | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                 >> 0x20U)) 
                                        << 1U))) | 
                     (((IData)(((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                       >> 0x15U))))) 
                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                   ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                       >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                     >> 0x15U))))) 
                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                 ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                             >> 0x20U)) 
                                    << 1U)));
    __Vtemp47[0U] = (1U | ((((__Vtemp39[0U] | ((IData)(
                                                       ((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                               >> 0x17U))))) 
                                                        & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                               << 1U)) 
                             | (1U | ((IData)(((- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                      >> 0x16U))))) 
                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                  | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                      << 1U))) | (1U 
                                                  | ((IData)(
                                                             ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x15U))))) 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                 ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2))) 
                                                     << 1U))) 
                           | (1U | ((IData)(((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                    >> 0x19U))))) 
                                             & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                    << 1U))));
    __Vtemp47[2U] = ((((__Vtemp39[2U] | ((IData)(((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                          >> 0x17U))))) 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                  >> 0x20U)) 
                                         >> 0x1fU)) 
                       | ((IData)((((- (QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                           >> 0x16U))))) 
                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                       | vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                   >> 0x20U)) >> 0x1fU)) 
                      | ((IData)((((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                          >> 0x15U))))) 
                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                      ^ vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                  >> 0x20U)) >> 0x1fU)) 
                     | ((IData)((((- (QData)((IData)(
                                                     (1U 
                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                         >> 0x19U))))) 
                                  & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                 >> 0x20U)) >> 0x1fU));
    __Vtemp49[1U] = ((__Vtemp45[1U] | (((IData)(((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                        >> 0x19U))))) 
                                                 & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result)) 
                                        >> 0x1fU) | 
                                       ((IData)((((- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                         >> 0x19U))))) 
                                                  & ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__slt_result) 
                                                 >> 0x20U)) 
                                        << 1U))) | 
                     (((IData)(((- (QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                       >> 0x18U))))) 
                                & (QData)((IData)((1U 
                                                   & (~ 
                                                      vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                       >> 0x1fU) | ((IData)((((- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                     >> 0x18U))))) 
                                              & (QData)((IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                             >> 0x20U)) 
                                    << 1U)));
    ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result 
        = (((QData)((IData)(((__Vtemp47[2U] | ((IData)(
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                         & (QData)((IData)(
                                                                           (1U 
                                                                            & (~ 
                                                                               vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U]))))) 
                                                        >> 0x20U)) 
                                               >> 0x1fU)) 
                             | ((IData)((((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                 >> 0x11U))))) 
                                          & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                         >> 0x20U)) 
                                >> 0x1fU)))) << 0x3fU) 
           | (((QData)((IData)((__Vtemp49[1U] | (((IData)(
                                                          ((- (QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                           & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                  >> 0x1fU) 
                                                 | ((IData)(
                                                            (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                              & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2) 
                                                             >> 0x20U)) 
                                                    << 1U))))) 
               << 0x1fU) | ((QData)((IData)((1U | (
                                                   (__Vtemp47[0U] 
                                                    | ((IData)(
                                                               ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x18U))))) 
                                                                & (QData)((IData)(
                                                                                (1U 
                                                                                & (~ 
                                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[2U])))))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      | ((IData)(
                                                                 ((- (QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                                                >> 0x11U))))) 
                                                                  & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2)) 
                                                         << 1U)))))) 
                            >> 1U)));
    vlSelf->dsram_addr = ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[0U] 
        = (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[1U] 
        = (IData)((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus[2U] 
        = ((0x20U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                     >> 1U)) | (0x1fU & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                         >> 1U)));
    __Vtemp60[2U] = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                << 0x24U) | (((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                >> 0x1cU)))) 
                      << 0xdU) | ((0x1000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                              << 4U)) 
                                  | ((0x800U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                << 4U)) 
                                     | ((0xffffff80U 
                                         & ((0x400U 
                                             & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                >> 0x13U)) 
                                            | ((0x200U 
                                                & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                   >> 0x15U)) 
                                               | ((0x100U 
                                                   & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                      >> 0x17U)) 
                                                  | (0x80U 
                                                     & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
                                                        << 7U)))))) 
                                        | ((0x40U & 
                                            (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                  >> 1U)) 
                                              | (0x1fU 
                                                 & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                    >> 1U))))))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[0U] 
        = (IData)(ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[1U] 
        = (IData)((ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_result 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U] 
        = __Vtemp60[2U];
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[3U] 
        = (((IData)((((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                      << 0x24U) | (((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                    << 4U) | ((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU)))) 
            >> 0x13U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                  << 4U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                    >> 0x1cU))) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U] 
        = ((0xfe000U & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                        >> 6U)) | ((IData)(((((QData)((IData)(
                                                              vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                   >> 0x1cU))) 
                                            >> 0x20U)) 
                                   >> 0x13U));
    ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__b_data 
        = ((0x80U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])
            ? (0xffU & (IData)(vlSelf->dsram_rdata))
            : 0U);
    ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__h_data 
        = ((0x100U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])
            ? (0xffffU & (IData)(vlSelf->dsram_rdata))
            : 0U);
    ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__w_data 
        = ((0x200U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])
            ? (IData)(vlSelf->dsram_rdata) : 0U);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata 
        = ((1U & ((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U] 
                   >> 6U) & (vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U] 
                             >> 0xcU))) ? ((0x80000U 
                                            & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__b_data) 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__b_data)))
                                            : ((0x8000U 
                                                & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                ? (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__b_data))
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__h_data) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__h_data)))
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                     ? (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__h_data))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__w_data 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__w_data)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                       ? (QData)((IData)(ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__w_data))
                                                       : 
                                                      ((0x10000U 
                                                        & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[4U])
                                                        ? 
                                                       ((0x400U 
                                                         & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U])
                                                         ? vlSelf->dsram_rdata
                                                         : 0ULL)
                                                        : 0ULL)))))))
            : (((QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[0U]))));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[0U] 
        = (IData)(vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[1U] 
        = (IData)((vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                   >> 0x20U));
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
        = ((0x20U & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U]) 
           | (0x1fU & vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus[2U]));
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
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->isram_e = 0;
    vlSelf->isram_addr = 0;
    vlSelf->isram_rdata = 0;
    vlSelf->dsram_e = 0;
    vlSelf->dsram_we = 0;
    vlSelf->dsram_addr = 0;
    vlSelf->dsram_wdata = 0;
    vlSelf->dsram_rdata = 0;
    VL_ZERO_RESET_W(148, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_mem_bus);
    VL_ZERO_RESET_W(70, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ex_to_rf_bus);
    VL_ZERO_RESET_W(70, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__mem_to_rf_bus);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__pc_reg = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__ce_reg = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__ifu__DOT__next_pc = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__ce = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__flag = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__buf_inst = 0;
    VL_ZERO_RESET_W(128, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__op_d);
    VL_ZERO_RESET_W(128, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func7_d);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__func3_d = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addi = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_add = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addiw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_addw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sub = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_subw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slti = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltiu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slt = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sltu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slli = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srli = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srai = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_slliw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srliw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraiw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sll = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srl = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sra = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sllw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_srlw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sraw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xori = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ori = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_andi = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_xor = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_or = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_and = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ecall = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ebreak = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lb = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lh = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_ld = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lbu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lhu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_lwu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sb = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sh = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_sd = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_jalr = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_beq = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrs = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrc = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrwi = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrsi = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_csrrci = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mul = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulh = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhsu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulhu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_mulw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_div = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_divuw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remuw = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_rem = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_remu = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__id_pc = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__inst_i = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__alu_op = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src1 = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__sel_alu_src2 = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re1 = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__re2 = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__idu__DOT__regfile_id__DOT__regs[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(291, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src1 = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_src2 = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__bru_op = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs1_forward_data = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__rs2_forward_data = 0;
    VL_ZERO_RESET_W(65, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina);
    VL_ZERO_RESET_W(65, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb);
    VL_ZERO_RESET_W(65, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
    VL_ZERO_RESET_W(65, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__s);
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res = 0;
    vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__memu__DOT__rf_wdata = 0;
    VL_ZERO_RESET_W(134, vlSelf->ysyx_2022040010_top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r);
    VL_ZERO_RESET_W(65, vlSelf->__Vchglast__TOP__ysyx_2022040010_top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c);
}
