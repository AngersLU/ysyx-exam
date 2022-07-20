// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

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

void Vtop___024root____Vdpiimwrap_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP();

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp16;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp61;
    VlWide<3>/*95:0*/ __Vtemp62;
    VlWide<3>/*95:0*/ __Vtemp72;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<3>/*95:0*/ __Vtemp85;
    VlWide<3>/*95:0*/ __Vtemp86;
    VlWide<3>/*95:0*/ __Vtemp95;
    VlWide<3>/*95:0*/ __Vtemp96;
    VlWide<3>/*95:0*/ __Vtemp97;
    VlWide<3>/*95:0*/ __Vtemp107;
    VlWide<3>/*95:0*/ __Vtemp119;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp130;
    VlWide<3>/*95:0*/ __Vtemp131;
    VlWide<3>/*95:0*/ __Vtemp132;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp165;
    VlWide<3>/*95:0*/ __Vtemp166;
    VlWide<3>/*95:0*/ __Vtemp167;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp202;
    VlWide<3>/*95:0*/ __Vtemp212;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp226;
    VlWide<3>/*95:0*/ __Vtemp235;
    VlWide<3>/*95:0*/ __Vtemp236;
    VlWide<3>/*95:0*/ __Vtemp237;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp260;
    VlWide<3>/*95:0*/ __Vtemp261;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp282;
    VlWide<3>/*95:0*/ __Vtemp294;
    VlWide<3>/*95:0*/ __Vtemp295;
    VlWide<3>/*95:0*/ __Vtemp296;
    VlWide<3>/*95:0*/ __Vtemp305;
    VlWide<3>/*95:0*/ __Vtemp306;
    VlWide<3>/*95:0*/ __Vtemp307;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp329;
    VlWide<3>/*95:0*/ __Vtemp330;
    VlWide<3>/*95:0*/ __Vtemp331;
    VlWide<3>/*95:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp341;
    VlWide<3>/*95:0*/ __Vtemp342;
    VlWide<3>/*95:0*/ __Vtemp352;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp365;
    VlWide<3>/*95:0*/ __Vtemp366;
    VlWide<3>/*95:0*/ __Vtemp375;
    VlWide<3>/*95:0*/ __Vtemp376;
    VlWide<3>/*95:0*/ __Vtemp377;
    VlWide<3>/*95:0*/ __Vtemp387;
    VlWide<3>/*95:0*/ __Vtemp399;
    VlWide<3>/*95:0*/ __Vtemp400;
    VlWide<3>/*95:0*/ __Vtemp401;
    VlWide<3>/*95:0*/ __Vtemp410;
    VlWide<3>/*95:0*/ __Vtemp411;
    VlWide<3>/*95:0*/ __Vtemp412;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<3>/*95:0*/ __Vtemp434;
    VlWide<3>/*95:0*/ __Vtemp435;
    VlWide<3>/*95:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp445;
    VlWide<3>/*95:0*/ __Vtemp446;
    VlWide<3>/*95:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp457;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<3>/*95:0*/ __Vtemp482;
    VlWide<3>/*95:0*/ __Vtemp492;
    VlWide<3>/*95:0*/ __Vtemp504;
    VlWide<3>/*95:0*/ __Vtemp505;
    VlWide<3>/*95:0*/ __Vtemp506;
    VlWide<3>/*95:0*/ __Vtemp515;
    VlWide<3>/*95:0*/ __Vtemp516;
    VlWide<3>/*95:0*/ __Vtemp517;
    VlWide<3>/*95:0*/ __Vtemp527;
    VlWide<3>/*95:0*/ __Vtemp539;
    VlWide<3>/*95:0*/ __Vtemp540;
    VlWide<3>/*95:0*/ __Vtemp541;
    VlWide<3>/*95:0*/ __Vtemp550;
    VlWide<3>/*95:0*/ __Vtemp551;
    VlWide<3>/*95:0*/ __Vtemp552;
    VlWide<3>/*95:0*/ __Vtemp562;
    VlWide<3>/*95:0*/ __Vtemp574;
    VlWide<3>/*95:0*/ __Vtemp575;
    VlWide<3>/*95:0*/ __Vtemp576;
    VlWide<3>/*95:0*/ __Vtemp585;
    VlWide<3>/*95:0*/ __Vtemp586;
    VlWide<3>/*95:0*/ __Vtemp587;
    VlWide<3>/*95:0*/ __Vtemp597;
    VlWide<3>/*95:0*/ __Vtemp609;
    VlWide<3>/*95:0*/ __Vtemp610;
    VlWide<3>/*95:0*/ __Vtemp611;
    VlWide<3>/*95:0*/ __Vtemp620;
    VlWide<3>/*95:0*/ __Vtemp621;
    VlWide<3>/*95:0*/ __Vtemp622;
    VlWide<3>/*95:0*/ __Vtemp632;
    VlWide<3>/*95:0*/ __Vtemp644;
    VlWide<3>/*95:0*/ __Vtemp645;
    VlWide<3>/*95:0*/ __Vtemp646;
    VlWide<3>/*95:0*/ __Vtemp655;
    VlWide<3>/*95:0*/ __Vtemp656;
    VlWide<3>/*95:0*/ __Vtemp657;
    VlWide<3>/*95:0*/ __Vtemp667;
    VlWide<3>/*95:0*/ __Vtemp679;
    VlWide<3>/*95:0*/ __Vtemp680;
    VlWide<3>/*95:0*/ __Vtemp681;
    VlWide<3>/*95:0*/ __Vtemp690;
    VlWide<3>/*95:0*/ __Vtemp691;
    VlWide<3>/*95:0*/ __Vtemp692;
    VlWide<3>/*95:0*/ __Vtemp702;
    VlWide<3>/*95:0*/ __Vtemp714;
    VlWide<3>/*95:0*/ __Vtemp715;
    VlWide<3>/*95:0*/ __Vtemp716;
    VlWide<3>/*95:0*/ __Vtemp725;
    VlWide<3>/*95:0*/ __Vtemp726;
    VlWide<3>/*95:0*/ __Vtemp727;
    VlWide<3>/*95:0*/ __Vtemp737;
    VlWide<3>/*95:0*/ __Vtemp749;
    VlWide<3>/*95:0*/ __Vtemp750;
    VlWide<3>/*95:0*/ __Vtemp751;
    VlWide<3>/*95:0*/ __Vtemp760;
    VlWide<3>/*95:0*/ __Vtemp761;
    VlWide<3>/*95:0*/ __Vtemp762;
    VlWide<3>/*95:0*/ __Vtemp772;
    VlWide<3>/*95:0*/ __Vtemp784;
    VlWide<3>/*95:0*/ __Vtemp785;
    VlWide<3>/*95:0*/ __Vtemp786;
    VlWide<3>/*95:0*/ __Vtemp795;
    VlWide<3>/*95:0*/ __Vtemp796;
    VlWide<3>/*95:0*/ __Vtemp797;
    VlWide<3>/*95:0*/ __Vtemp807;
    VlWide<3>/*95:0*/ __Vtemp819;
    VlWide<3>/*95:0*/ __Vtemp820;
    VlWide<3>/*95:0*/ __Vtemp821;
    VlWide<3>/*95:0*/ __Vtemp830;
    VlWide<3>/*95:0*/ __Vtemp831;
    VlWide<3>/*95:0*/ __Vtemp832;
    VlWide<3>/*95:0*/ __Vtemp842;
    VlWide<3>/*95:0*/ __Vtemp854;
    VlWide<3>/*95:0*/ __Vtemp855;
    VlWide<3>/*95:0*/ __Vtemp856;
    VlWide<3>/*95:0*/ __Vtemp865;
    VlWide<3>/*95:0*/ __Vtemp866;
    VlWide<3>/*95:0*/ __Vtemp867;
    VlWide<3>/*95:0*/ __Vtemp877;
    VlWide<3>/*95:0*/ __Vtemp889;
    VlWide<3>/*95:0*/ __Vtemp890;
    VlWide<3>/*95:0*/ __Vtemp891;
    VlWide<3>/*95:0*/ __Vtemp900;
    VlWide<3>/*95:0*/ __Vtemp901;
    VlWide<3>/*95:0*/ __Vtemp902;
    VlWide<3>/*95:0*/ __Vtemp912;
    VlWide<3>/*95:0*/ __Vtemp924;
    VlWide<3>/*95:0*/ __Vtemp925;
    VlWide<3>/*95:0*/ __Vtemp926;
    VlWide<3>/*95:0*/ __Vtemp935;
    VlWide<3>/*95:0*/ __Vtemp936;
    VlWide<3>/*95:0*/ __Vtemp937;
    VlWide<3>/*95:0*/ __Vtemp947;
    VlWide<3>/*95:0*/ __Vtemp959;
    VlWide<3>/*95:0*/ __Vtemp960;
    VlWide<3>/*95:0*/ __Vtemp961;
    VlWide<3>/*95:0*/ __Vtemp970;
    VlWide<3>/*95:0*/ __Vtemp971;
    VlWide<3>/*95:0*/ __Vtemp972;
    VlWide<3>/*95:0*/ __Vtemp982;
    VlWide<3>/*95:0*/ __Vtemp994;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<3>/*95:0*/ __Vtemp996;
    VlWide<3>/*95:0*/ __Vtemp1005;
    VlWide<3>/*95:0*/ __Vtemp1006;
    VlWide<3>/*95:0*/ __Vtemp1007;
    VlWide<3>/*95:0*/ __Vtemp1017;
    VlWide<3>/*95:0*/ __Vtemp1029;
    VlWide<3>/*95:0*/ __Vtemp1030;
    VlWide<3>/*95:0*/ __Vtemp1031;
    VlWide<3>/*95:0*/ __Vtemp1040;
    VlWide<3>/*95:0*/ __Vtemp1041;
    VlWide<3>/*95:0*/ __Vtemp1042;
    VlWide<3>/*95:0*/ __Vtemp1052;
    VlWide<3>/*95:0*/ __Vtemp1064;
    VlWide<3>/*95:0*/ __Vtemp1065;
    VlWide<3>/*95:0*/ __Vtemp1066;
    VlWide<3>/*95:0*/ __Vtemp1075;
    VlWide<3>/*95:0*/ __Vtemp1076;
    VlWide<3>/*95:0*/ __Vtemp1077;
    VlWide<3>/*95:0*/ __Vtemp1087;
    VlWide<3>/*95:0*/ __Vtemp1099;
    VlWide<3>/*95:0*/ __Vtemp1100;
    VlWide<3>/*95:0*/ __Vtemp1101;
    VlWide<3>/*95:0*/ __Vtemp1110;
    VlWide<3>/*95:0*/ __Vtemp1111;
    VlWide<3>/*95:0*/ __Vtemp1112;
    VlWide<3>/*95:0*/ __Vtemp1122;
    // Body
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u14__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u15__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u16__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u17__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u19__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u21__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u22__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u23__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u25__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u28__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u11__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u12__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u13__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__0__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__1__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__2__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__3__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__4__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__5__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__6__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__7__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__8__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__9__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c[0U] 
        = (0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__level1__BRA__10__KET____DOT__ux__c[0U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x20U] 
        = (1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
           [0x20U]);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x20U] 
        = (2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
           [0x20U]);
    vlSelf->isram_e = vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    vlSelf->isram_addr = vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg;
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg);
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[1U] = (IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg 
                                                             >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__if_to_id_bus[2U] = vlSelf->top__DOT__fslu__DOT__ifu__DOT__ce_reg;
    VL_EXTEND_WQ(65,64, __Vtemp3, (((QData)((IData)(
                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__dividend[2U]))));
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__divisor);
    VL_SUB_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[0U] 
        = __Vtemp5[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[1U] 
        = __Vtemp5[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_temp[2U] 
        = (1U & __Vtemp5[2U]);
    vlSelf->top__DOT__fslu__DOT__idu__DOT__inst_i = 
        ((1U & vlSelf->top__DOT__fslu__DOT__idu__DOT__if_to_id_bus_r[2U])
          ? ((IData)(vlSelf->top__DOT__fslu__DOT__idu__DOT__flag)
              ? vlSelf->top__DOT__fslu__DOT__idu__DOT__buf_inst
              : vlSelf->isram_rdata) : 0U);
    vlSelf->debug_wb_pc = (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U])) 
                            << 0x3aU) | (((QData)((IData)(
                                                          vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[3U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[2U])) 
                                            >> 6U)));
    vlSelf->bubble = (1U & (~ (vlSelf->top__DOT__fslu__DOT__wbu__DOT__mem_to_wb_bus_r[4U] 
                               >> 5U)));
    vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data 
        = ((0x80U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? (0xffU & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                        >> 0x14U)) : 0U);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data 
        = ((0x100U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? (0xffffU & ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] 
                           << 0xcU) | (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                                       >> 0x14U))) : 0U);
    vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data 
        = ((0x200U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
            ? ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U] 
                << 0xcU) | (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U] 
                            >> 0x14U)) : 0U);
    if ((1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                >> 0x10U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[9U] 
                             >> 1U)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__fslu__DOT__exu__DOT__ebreak_TOP();
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_S = 
        ((0xfe0U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                    >> 0x10U)) | (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                           >> 3U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_J = 
        ((0x100000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                       >> 7U)) | ((0xff000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                               << 4U)) 
                                  | ((0x800U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 5U)) 
                                     | (0x7feU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    vlSelf->dsram_e = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                             >> 8U));
    vlSelf->dsram_we = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                              >> 7U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | ((2U & (((0xffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 0xcU)) | (0x1ffffeU 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                   >> 0xbU))) 
                     | (0xffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                    >> 0xcU)))) | (1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                      >> 0xaU))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo 
        = ((3U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_mul_hilo)) 
           | (4U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xcU)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel 
        = ((2U & ((((0xffffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                   >> 4U)) | (0x1ffffffeU 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                 >> 3U))) 
                   | (0x3ffffffeU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                     >> 2U))) | (0x7ffffffeU 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                                    >> 1U)))) 
           | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 9U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 8U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                            >> 7U)) 
                    | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                       >> 6U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__ex_rd_last 
        = ((IData)(vlSelf->rst) ? 0U : (0x1fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B = 
        ((0x1000U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                     >> 0xfU)) | ((0x800U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                             << 8U)) 
                                  | ((0x7e0U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U)) 
                                     | (0x1eU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                 >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_signed 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 9U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 7U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 5U)) | 
                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 3U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_div_unsigned 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                              >> 6U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                         >> 4U)) | 
                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                  >> 2U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U] 
        = ((0xfffffffeU & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U]) 
           | (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                      >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                   >> 0x19U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                                 >> 0x18U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
        = ((0x4000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                << 0x24U) | (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                              << 4U) | ((QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                        >> 0x1cU)))
            : ((0x8000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? 0ULL : ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
                           ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
                           : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend 
        = (((- (QData)((IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                      >> 0x1bU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                  >> 0x10U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
        = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
        = ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs1_forward)
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_forward_data
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[2U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x12U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u18__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x14U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u20__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x18U][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u24__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1aU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u26__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1bU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u27__c[4U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][0U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[0U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][1U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[1U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][2U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[2U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][3U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[3U];
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__carry[0x1dU][4U] 
        = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u29__c[4U];
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
    vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
        = ((1U & ((vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                   >> 6U) & (vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U] 
                             >> 0xcU))) ? ((0x80000U 
                                            & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data) 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data)))
                                            : ((0x8000U 
                                                & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__b_data))
                                                : (
                                                   (0x40000U 
                                                    & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data) 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data)))
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                     ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__h_data))
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                       ? (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__w_data))
                                                       : 
                                                      ((0x10000U 
                                                        & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])
                                                        ? 
                                                       ((0x400U 
                                                         & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U])
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[6U])) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[5U])) 
                                                             << 0xcU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[4U])) 
                                                               >> 0x14U)))
                                                         : 0ULL)
                                                        : 0ULL)))))))
            : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[0U]))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__div_result_temp 
        = ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel))
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[0U])))
            : ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_res_sel))
                ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__div_ex__DOT__result_o[2U])))
                : 0ULL));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend 
        = (((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B) 
                                      >> 0xbU))))) 
            << 0xcU) | (QData)((IData)((0xfffU & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B)))));
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
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp 
        = (((0x100000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
             ? 0U : 1U) ? (((QData)((IData)((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1) 
                                              << 0x1fU) 
                                             | ((0x40000000U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                             >> 1U)) 
                                                    << 0x1eU)) 
                                                | ((0x20000000U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                >> 2U)) 
                                                       << 0x1dU)) 
                                                   | ((0x10000000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 3U)) 
                                                          << 0x1cU)) 
                                                      | ((0x8000000U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                      >> 4U)) 
                                                             << 0x1bU)) 
                                                         | ((0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 5U)) 
                                                                << 0x1aU)) 
                                                            | ((0x2000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 6U)) 
                                                                   << 0x19U)) 
                                                               | ((0x1000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 7U)) 
                                                                      << 0x18U)) 
                                                                  | ((0x800000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 8U)) 
                                                                         << 0x17U)) 
                                                                     | ((0x400000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 9U)) 
                                                                            << 0x16U)) 
                                                                        | ((0x200000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xaU)) 
                                                                               << 0x15U)) 
                                                                           | ((0x100000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xbU)) 
                                                                                << 0x14U)) 
                                                                              | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                   >> 0x20U)) 
                                                          << 0x1fU) 
                                                         | ((0x40000000U 
                                                             & ((IData)(
                                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                         >> 0x21U)) 
                                                                << 0x1eU)) 
                                                            | ((0x20000000U 
                                                                & ((IData)(
                                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                            >> 0x22U)) 
                                                                   << 0x1dU)) 
                                                               | ((0x10000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                               >> 0x23U)) 
                                                                      << 0x1cU)) 
                                                                  | ((0x8000000U 
                                                                      & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x24U)) 
                                                                         << 0x1bU)) 
                                                                     | ((0x4000000U 
                                                                         & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x25U)) 
                                                                            << 0x1aU)) 
                                                                        | ((0x2000000U 
                                                                            & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x26U)) 
                                                                               << 0x19U)) 
                                                                           | ((0x1000000U 
                                                                               & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x27U)) 
                                                                                << 0x18U)) 
                                                                              | ((0x800000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x28U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x29U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2aU)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2bU)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))))
            : vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1);
    VL_EXTEND_WI(65,32, __Vtemp7, (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1));
    VL_EXTEND_WQ(65,64, __Vtemp8, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src1);
    if ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp7[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp7[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp7[2U];
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
            = __Vtemp8[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
            = __Vtemp8[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[2U] 
            = __Vtemp8[2U];
    }
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2 
        = ((0x400U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
            ? vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend
            : ((0x800U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                ? (((QData)((IData)((- (IData)((1U 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                   >> 0x1bU)))))) 
                    << 0x20U) | (QData)((IData)((0xfffff000U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                    << 4U)))))
                : ((0x1000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U])
                    ? (QData)((IData)((0x3fU & (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U] 
                                                >> 0x10U))))
                    : ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__sel_rs2_forward)
                        ? vlSelf->top__DOT__fslu__DOT__exu__DOT__rs2_forward_data
                        : (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[0U])))))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
        = (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                >> 0xdU)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                             >> 0xaU)) 
                 & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2 
                            >> 0x3fU))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2 
        = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
            == vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
            ? 1U : 0U);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[2U] 
        = (1U & (((((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                 >> 0xdU)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                                              >> 0xcU)) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U] 
                     >> 0xaU)) & (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                          >> 0x3fU))));
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
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[0U] 
        = (IData)(vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata);
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[1U] 
        = (IData)((vlSelf->top__DOT__fslu__DOT__memu__DOT__rf_wdata 
                   >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__mem_to_rf_bus[2U] 
        = ((0x20U & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]) 
           | (0x1fU & vlSelf->top__DOT__fslu__DOT__memu__DOT__ex_to_mem_bus_r[2U]));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr 
        = ((0x20U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
            ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                         << 0x24U) | (((QData)((IData)(
                                                       vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                       + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
            : ((0x10U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                             << 0x24U) | (((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                           << 4U) | 
                                          ((QData)((IData)(
                                                           vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                           >> 0x1cU))) 
                           + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                : ((8U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                    ? (4ULL + ((((QData)((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                 << 0x24U) | (((QData)((IData)(
                                                               vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                 >> 0x1cU))) 
                               + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                    : ((4U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                        ? (4ULL + ((((QData)((IData)(
                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                     >> 0x1cU))) 
                                   + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                        : ((2U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                            ? (4ULL + ((((QData)((IData)(
                                                         vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                              >> 0x1cU))) 
                                       + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                            : ((1U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                ? (4ULL + ((((QData)((IData)(
                                                             vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                  >> 0x1cU))) 
                                           + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                : ((0x80U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                    ? (4ULL + ((((QData)((IData)(
                                                                 vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                 << 0x24U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                      >> 0x1cU))) 
                                               + vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_B_sign_extend))
                                    : ((0x40U & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op))
                                        ? (4ULL + (
                                                   (((QData)((IData)(
                                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[7U])) 
                                                     << 0x24U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[6U])) 
                                                        << 4U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[5U])) 
                                                          >> 0x1cU))) 
                                                   + 
                                                   (0xfffffffffffffffeULL 
                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__imm_I_sign_extend)))
                                        : 0ULL))))))));
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
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
        = VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_src_temp, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b 
        = ((1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                 >> 0x19U)) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[4U] 
                                               >> 0x18U)))
            ? (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2)
            : vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_src2);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                            >> 1U) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0U]) | (2U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              << 1U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 1U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 2U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 3U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 1U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 2U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[1U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [1U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 1U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 2U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 3U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 2U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 3U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 3U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 4U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 5U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 3U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 4U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 5U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[2U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [2U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 3U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 4U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 5U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 4U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 5U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 5U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 6U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 7U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 5U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 6U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 7U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[3U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [3U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 5U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 6U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 7U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 6U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 7U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 7U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 8U)) & (~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 9U))) 
                           + (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                   >> 7U)) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 8U))) 
                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 9U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[4U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [4U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 7U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 8U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 9U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 8U)) 
                                           & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                              >> 9U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 9U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                        >> 0xaU)) & 
                            (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU))) + (((~ (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 9U)) 
                                               & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xaU))) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[5U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [5U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 9U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0xaU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xbU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xaU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xbU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xbU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xcU)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU))) + (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xbU)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[6U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [6U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xbU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xcU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xdU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xcU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xdU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xdU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0xeU)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU))) + (((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xdU)) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[7U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [7U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xdU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0xeU)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0xfU)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0xeU)) 
                                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0xfU))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0xfU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                          >> 0x10U)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0xfU)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[8U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [8U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0xfU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                               >> 0x10U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x11U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x10U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x11U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                              >> 0x11U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                           >> 0x12U)) 
                            & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x13U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x11U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[9U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [9U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x11U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                >> 0x12U)) 
                             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x12U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                 >> 0x13U))) 
                           << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x13U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x14U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x13U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x14U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xaU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xaU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x13U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x15U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x14U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x15U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x15U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x16U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x15U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x16U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xbU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xbU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x15U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x17U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x16U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x17U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x17U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x18U)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x17U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x18U))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xcU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xcU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x17U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x19U)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x18U)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x19U))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x19U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1aU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x19U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1aU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xdU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xdU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x19U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1bU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1aU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1bU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1bU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1cU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1bU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1cU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xeU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xeU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1bU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1dU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1cU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1dU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                >> 0x1dU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                             >> 0x1eU)) 
                              & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1fU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1dU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                        >> 0x1eU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                      >> 0x1fU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0xfU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0xfU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                    >> 0x1dU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                  >> 0x1fU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                  >> 0x1eU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                   >> 0x1fU))) 
                             << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                 >> 0x1fU) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                                    >> 0x1fU)) 
                                                  & (~ 
                                                     vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U])) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x10U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x10U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                     >> 0x1fU)) & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 1U)) + ((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 1U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 1U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 2U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 1U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 2U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x11U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x11U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 1U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 2U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 3U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 3U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 3U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 4U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 3U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 4U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x12U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x12U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 3U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 4U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 5U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 5U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 5U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 6U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 5U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 6U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x13U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x13U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 5U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 6U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 7U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 7U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 7U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 8U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U))) + (((~ 
                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 7U)) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 8U))) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 9U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x14U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x14U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 7U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 8U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 9U)) + ((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                 >> 9U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 9U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                           >> 0xaU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xaU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x15U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x15U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 9U)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                >> 0xaU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xbU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xaU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xbU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xbU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xcU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xbU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xcU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x16U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x16U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xbU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xdU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xcU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xdU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xdU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0xeU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU))) + (
                                                   ((~ 
                                                     (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xdU)) 
                                                    & (~ 
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                        >> 0xeU))) 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                      >> 0xfU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x17U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x17U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xdU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0xfU)) + ((~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0xeU)) 
                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0xfU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0xfU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                             >> 0x10U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0xfU)) & (~ 
                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x11U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x18U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x18U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0xfU)) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                  >> 0x10U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x11U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x10U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x11U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x11U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x12U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x11U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x13U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x19U] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x19U]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x11U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x13U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x12U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x13U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x13U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x14U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x13U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x15U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1aU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1aU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x13U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x15U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x14U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x15U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x15U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x16U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x15U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x17U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1bU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1bU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x15U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x17U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x16U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x17U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x17U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x18U)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x17U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x19U)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1cU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1cU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x17U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x19U)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x18U)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x19U))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x19U) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1aU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x19U)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1bU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1dU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1dU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x19U)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1bU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1bU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1bU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1cU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1bU)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1dU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1eU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1eU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1bU)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1dU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1dU))) 
                              << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (1U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                 >> 0x1dU) & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                              >> 0x1eU)) 
                               & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1fU))) + 
                              (((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                    >> 0x1dU)) & (~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU))) 
                               & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                  >> 0x1fU)))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code[0x1fU] 
        = ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
            [0x1fU]) | (2U & (((((~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                     >> 0x1dU)) & (
                                                   vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                   >> 0x1fU)) + ((~ 
                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                   >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                                                    >> 0x1fU))) 
                              << 1U)));
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
    vlSelf->top__DOT__fslu__DOT__br_bus[0U] = (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr);
    vlSelf->top__DOT__fslu__DOT__br_bus[1U] = (IData)(
                                                      (vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_addr 
                                                       >> 0x20U));
    vlSelf->top__DOT__fslu__DOT__br_bus[2U] = (1U & 
                                               (((((((IData)(
                                                             (0U 
                                                              != 
                                                              (0xc0U 
                                                               & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op)))) 
                                                     | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                         >> 5U) 
                                                        & (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2))) 
                                                    | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                        >> 4U) 
                                                       & (~ (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__rs1_seq_rs2)))) 
                                                   | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                       >> 3U) 
                                                      & (VL_LTS_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                          ? 1U
                                                          : 0U))) 
                                                  | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                      >> 2U) 
                                                     & (VL_GTES_IQQ(1,64,64, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1, vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                         ? 1U
                                                         : 0U))) 
                                                 | (((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                     >> 1U) 
                                                    & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                        < vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                        ? 1U
                                                        : 0U))) 
                                                | ((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__bru_op) 
                                                   & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data1 
                                                       >= vlSelf->top__DOT__fslu__DOT__exu__DOT__real_data2)
                                                       ? 1U
                                                       : 0U))));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__sll_res 
        = (((QData)((IData)((((IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res) 
                              << 0x1fU) | ((0x40000000U 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                        >> 1U)) 
                                               << 0x1eU)) 
                                           | ((0x20000000U 
                                               & ((IData)(
                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                           >> 2U)) 
                                                  << 0x1dU)) 
                                              | ((0x10000000U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                              >> 3U)) 
                                                     << 0x1cU)) 
                                                 | ((0x8000000U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                 >> 4U)) 
                                                        << 0x1bU)) 
                                                    | ((0x4000000U 
                                                        & ((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                    >> 5U)) 
                                                           << 0x1aU)) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                       >> 6U)) 
                                                              << 0x19U)) 
                                                          | ((0x1000000U 
                                                              & ((IData)(
                                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                          >> 7U)) 
                                                                 << 0x18U)) 
                                                             | ((0x800000U 
                                                                 & ((IData)(
                                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                             >> 8U)) 
                                                                    << 0x17U)) 
                                                                | ((0x400000U 
                                                                    & ((IData)(
                                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 9U)) 
                                                                       << 0x16U)) 
                                                                   | ((0x200000U 
                                                                       & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xaU)) 
                                                                          << 0x15U)) 
                                                                      | ((0x100000U 
                                                                          & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xbU)) 
                                                                             << 0x14U)) 
                                                                         | ((0x80000U 
                                                                             & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xcU)) 
                                                                                << 0x13U)) 
                                                                            | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xdU)) 
                                                                                << 0x12U)) 
                                                                               | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xeU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0xfU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x10U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x11U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x12U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)((((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                   >> 0x20U)) 
                                          << 0x1fU) 
                                         | ((0x40000000U 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                         >> 0x21U)) 
                                                << 0x1eU)) 
                                            | ((0x20000000U 
                                                & ((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                            >> 0x22U)) 
                                                   << 0x1dU)) 
                                               | ((0x10000000U 
                                                   & ((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                               >> 0x23U)) 
                                                      << 0x1cU)) 
                                                  | ((0x8000000U 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                  >> 0x24U)) 
                                                         << 0x1bU)) 
                                                     | ((0x4000000U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                     >> 0x25U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                        >> 0x26U)) 
                                                               << 0x19U)) 
                                                           | ((0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                           >> 0x27U)) 
                                                                  << 0x18U)) 
                                                              | ((0x800000U 
                                                                  & ((IData)(
                                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                              >> 0x28U)) 
                                                                     << 0x17U)) 
                                                                 | ((0x400000U 
                                                                     & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x29U)) 
                                                                        << 0x16U)) 
                                                                    | ((0x200000U 
                                                                        & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2aU)) 
                                                                           << 0x15U)) 
                                                                       | ((0x100000U 
                                                                           & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2bU)) 
                                                                              << 0x14U)) 
                                                                          | ((0x80000U 
                                                                              & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2cU)) 
                                                                                << 0x13U)) 
                                                                             | ((0x40000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2dU)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2eU)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x2fU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x30U)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x31U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x32U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x33U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x34U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x35U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x36U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x37U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x38U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x39U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__shift_u__DOT__shift_res 
                                                                                >> 0x3fU)))))))))))))))))))))))))))))))))))));
    VL_EXTEND_WI(65,32, __Vtemp16, (IData)(vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b));
    VL_EXTEND_WQ(65,64, __Vtemp17, vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__adder_b);
    if ((0x4000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__id_to_ex_bus_r[8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp16[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp16[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp16[2U];
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
            = __Vtemp17[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
            = __Vtemp17[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[2U] 
            = __Vtemp17[2U];
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0U])) {
            __Vtemp21[0U] = 1U;
            __Vtemp21[1U] = 0U;
            __Vtemp21[2U] = 0U;
            __Vtemp22[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp22[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp22[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][0U] 
                = __Vtemp23[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][1U] 
                = __Vtemp23[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0U][2U] 
                = (1U & __Vtemp23[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U]))))) 
                    << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U]))))) 
                    >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0U][2U])))) 
                                          >> 0x20U)) 
                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((- (QData)((IData)((1U 
                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0U][2U])))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vtemp29[0U] = 1U;
            __Vtemp29[1U] = 0U;
            __Vtemp29[2U] = 0U;
            __Vtemp30[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp30[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp30[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp31, __Vtemp29, __Vtemp30);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][0U] 
                = (__Vtemp31[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][1U] 
                = ((__Vtemp31[0U] >> 0x1fU) | (__Vtemp31[1U] 
                                               << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0U][2U] 
                = ((__Vtemp31[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp31[2U] 
                                                << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U))))))) 
                    << 2U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
                = (((IData)((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U))))))) 
                    >> 0x1eU) | ((IData)(((0x7fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [0U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
                = ((IData)(((0x7fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [0U][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1eU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] 
            = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] 
            = (((IData)((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] 
            = (((IData)((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU))))) 
                >> 0x1fU) | ((IData)(((- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU)))) 
                                      >> 0x20U)) << 1U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] 
            = ((IData)(((- (QData)((IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                            >> 0x1fU)))) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0U][4U] = 0U;
    }
    if ((0U == vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x20U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]
                : 0U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]
                : 0U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] 
            = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U] 
                >> 0x1fU) ? vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]
                : 0U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][3U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x20U][4U] = 0U;
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [1U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [1U])) {
            __Vtemp49[0U] = 1U;
            __Vtemp49[1U] = 0U;
            __Vtemp49[2U] = 0U;
            __Vtemp50[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp50[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp50[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] 
                = (__Vtemp51[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] 
                = ((__Vtemp51[0U] >> 0x1fU) | (__Vtemp51[1U] 
                                               << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] 
                = ((__Vtemp51[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp51[2U] 
                                                << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [1U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [1U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [1U][1U] 
                                          << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    << 4U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [1U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U))))))) 
                    >> 0x1cU) | ((IData)(((0x1fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [1U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x1fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                      [1U][2U] 
                                                      >> 1U)))))) 
                            >> 0x20U)) >> 0x1cU);
        } else {
            __Vtemp60[0U] = 1U;
            __Vtemp60[1U] = 0U;
            __Vtemp60[2U] = 0U;
            __Vtemp61[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp61[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp61[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp62, __Vtemp60, __Vtemp61);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] 
                = __Vtemp62[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] 
                = __Vtemp62[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] 
                = (1U & __Vtemp62[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [1U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [1U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [1U][1U] 
                                          << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][1U] >> 0x1eU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [1U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [1U][2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                   [1U][2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [1U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp72, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
            = (__Vtemp72[0U] << 2U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
            = ((__Vtemp72[0U] >> 0x1eU) | (__Vtemp72[1U] 
                                           << 2U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                << 3U) | ((__Vtemp72[1U] >> 0x1eU) 
                          | (4U & (__Vtemp72[2U] << 2U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
            = (((IData)((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU)))))) 
                >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 3U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
            = ((IData)(((0x3fffffffffffffffULL & (- (QData)((IData)(
                                                                    (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                     >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1dU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[1U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[1U][2U] = 0U;
        if ((IData)((0U == (6U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][2U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][3U] 
                = (((IData)((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1dU) | ((IData)(((0x3fffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[1U][4U] 
                = ((IData)(((0x3fffffffffffffffULL 
                             & (- (QData)((IData)((1U 
                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1dU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [2U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [2U])) {
            __Vtemp84[0U] = 1U;
            __Vtemp84[1U] = 0U;
            __Vtemp84[2U] = 0U;
            __Vtemp85[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp85[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp85[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp86, __Vtemp84, __Vtemp85);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] 
                = (__Vtemp86[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] 
                = ((__Vtemp86[0U] >> 0x1fU) | (__Vtemp86[1U] 
                                               << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] 
                = ((__Vtemp86[1U] >> 0x1fU) | (2U & 
                                               (__Vtemp86[2U] 
                                                << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [2U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [2U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [2U][1U] 
                                          << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    << 6U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [2U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U))))))) 
                    >> 0x1aU) | ((IData)(((0x7ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [2U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0x7ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [2U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x1aU);
        } else {
            __Vtemp95[0U] = 1U;
            __Vtemp95[1U] = 0U;
            __Vtemp95[2U] = 0U;
            __Vtemp96[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp96[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp96[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp97, __Vtemp95, __Vtemp96);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] 
                = __Vtemp97[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] 
                = __Vtemp97[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] 
                = (1U & __Vtemp97[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [2U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [2U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [2U][1U] 
                                          << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][1U] >> 0x1cU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [2U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [2U][2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [2U][2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [2U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp107, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
            = (__Vtemp107[0U] << 4U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
            = ((__Vtemp107[0U] >> 0x1cU) | (__Vtemp107[1U] 
                                            << 4U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 5U) | ((__Vtemp107[1U] >> 0x1cU) 
                          | (0x10U & (__Vtemp107[2U] 
                                      << 4U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
            = (((IData)((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 5U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
            = ((IData)(((0xfffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x1bU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[2U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[2U][2U] = 0U;
        if ((IData)((0U == (0xcU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][2U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][3U] 
                = (((IData)((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x1bU) | ((IData)(((0xfffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[2U][4U] 
                = ((IData)(((0xfffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x1bU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [3U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [3U])) {
            __Vtemp119[0U] = 1U;
            __Vtemp119[1U] = 0U;
            __Vtemp119[2U] = 0U;
            __Vtemp120[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp120[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp120[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp121, __Vtemp119, __Vtemp120);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] 
                = (__Vtemp121[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] 
                = ((__Vtemp121[0U] >> 0x1fU) | (__Vtemp121[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] 
                = ((__Vtemp121[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp121[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [3U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [3U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [3U][1U] 
                                          << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    << 8U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [3U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U))))))) 
                    >> 0x18U) | ((IData)(((0x1ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [3U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x1ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [3U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x18U);
        } else {
            __Vtemp130[0U] = 1U;
            __Vtemp130[1U] = 0U;
            __Vtemp130[2U] = 0U;
            __Vtemp131[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp131[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp131[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp132, __Vtemp130, __Vtemp131);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] 
                = __Vtemp132[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] 
                = __Vtemp132[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] 
                = (1U & __Vtemp132[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [3U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [3U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [3U][1U] 
                                          << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][1U] >> 0x1aU) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [3U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [3U][2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [3U][2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [3U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp142, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
            = (__Vtemp142[0U] << 6U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
            = ((__Vtemp142[0U] >> 0x1aU) | (__Vtemp142[1U] 
                                            << 6U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                << 7U) | ((__Vtemp142[1U] >> 0x1aU) 
                          | (0x40U & (__Vtemp142[2U] 
                                      << 6U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
            = (((IData)((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU)))))) 
                >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 7U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
            = ((IData)(((0x3ffffffffffffffULL & (- (QData)((IData)(
                                                                   (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                    >> 0x1fU))))) 
                        >> 0x20U)) >> 0x19U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[3U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[3U][2U] = 0U;
        if ((IData)((0U == (0x18U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][2U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][3U] 
                = (((IData)((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x19U) | ((IData)(((0x3ffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 7U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[3U][4U] 
                = ((IData)(((0x3ffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x19U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [4U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [4U])) {
            __Vtemp154[0U] = 1U;
            __Vtemp154[1U] = 0U;
            __Vtemp154[2U] = 0U;
            __Vtemp155[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp155[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp155[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp156, __Vtemp154, __Vtemp155);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] 
                = (__Vtemp156[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] 
                = ((__Vtemp156[0U] >> 0x1fU) | (__Vtemp156[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] 
                = ((__Vtemp156[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp156[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [4U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [4U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [4U][1U] 
                                          << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    << 0xaU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [4U][1U] >> 0x18U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [4U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U))))))) 
                    >> 0x16U) | ((IData)(((0x7fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [4U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0x7fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [4U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x16U);
        } else {
            __Vtemp165[0U] = 1U;
            __Vtemp165[1U] = 0U;
            __Vtemp165[2U] = 0U;
            __Vtemp166[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp166[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp166[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp167, __Vtemp165, __Vtemp166);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] 
                = __Vtemp167[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] 
                = __Vtemp167[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] 
                = (1U & __Vtemp167[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [4U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [4U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [4U][1U] 
                                          << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][1U] >> 0x18U) | 
                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [4U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [4U][2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [4U][2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [4U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp177, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
            = (__Vtemp177[0U] << 8U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
            = ((__Vtemp177[0U] >> 0x18U) | (__Vtemp177[1U] 
                                            << 8U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 9U) | ((__Vtemp177[1U] >> 0x18U) 
                          | (0x100U & (__Vtemp177[2U] 
                                       << 8U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
            = (((IData)((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 9U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
            = ((IData)(((0xffffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x17U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[4U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[4U][2U] = 0U;
        if ((IData)((0U == (0x30U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][2U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][3U] 
                = (((IData)((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x17U) | ((IData)(((0xffffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 9U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[4U][4U] 
                = ((IData)(((0xffffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x17U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [5U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [5U])) {
            __Vtemp189[0U] = 1U;
            __Vtemp189[1U] = 0U;
            __Vtemp189[2U] = 0U;
            __Vtemp190[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp190[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp190[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp191, __Vtemp189, __Vtemp190);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] 
                = (__Vtemp191[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] 
                = ((__Vtemp191[0U] >> 0x1fU) | (__Vtemp191[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] 
                = ((__Vtemp191[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp191[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [5U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [5U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    << 0xcU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [5U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U))))))) 
                    >> 0x14U) | ((IData)(((0x1fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [5U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x1fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                    [5U][2U] 
                                                    >> 1U)))))) 
                            >> 0x20U)) >> 0x14U);
        } else {
            __Vtemp200[0U] = 1U;
            __Vtemp200[1U] = 0U;
            __Vtemp200[2U] = 0U;
            __Vtemp201[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp201[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp201[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp202, __Vtemp200, __Vtemp201);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] 
                = __Vtemp202[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] 
                = __Vtemp202[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] 
                = (1U & __Vtemp202[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [5U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [5U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [5U][1U] 
                                          << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [5U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [5U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [5U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                 [5U][2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [5U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp212, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
            = (__Vtemp212[0U] << 0xaU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
            = ((__Vtemp212[0U] >> 0x16U) | (__Vtemp212[1U] 
                                            << 0xaU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                << 0xbU) | ((__Vtemp212[1U] >> 0x16U) 
                            | (0x400U & (__Vtemp212[2U] 
                                         << 0xaU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
            = (((IData)((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU)))))) 
                >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
            = ((IData)(((0x3fffffffffffffULL & (- (QData)((IData)(
                                                                  (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                   >> 0x1fU))))) 
                        >> 0x20U)) >> 0x15U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[5U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[5U][2U] = 0U;
        if ((IData)((0U == (0x60U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][2U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][3U] 
                = (((IData)((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x15U) | ((IData)(((0x3fffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[5U][4U] 
                = ((IData)(((0x3fffffffffffffULL & 
                             (- (QData)((IData)((1U 
                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x15U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [6U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [6U])) {
            __Vtemp224[0U] = 1U;
            __Vtemp224[1U] = 0U;
            __Vtemp224[2U] = 0U;
            __Vtemp225[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp225[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp225[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp226, __Vtemp224, __Vtemp225);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] 
                = (__Vtemp226[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] 
                = ((__Vtemp226[0U] >> 0x1fU) | (__Vtemp226[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] 
                = ((__Vtemp226[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp226[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [6U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [6U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    << 0xeU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [6U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x12U) | ((IData)(((0x7ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [6U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0x7ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [6U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x12U);
        } else {
            __Vtemp235[0U] = 1U;
            __Vtemp235[1U] = 0U;
            __Vtemp235[2U] = 0U;
            __Vtemp236[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp236[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp236[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp237, __Vtemp235, __Vtemp236);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] 
                = __Vtemp237[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] 
                = __Vtemp237[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] 
                = (1U & __Vtemp237[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [6U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [6U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [6U][1U] 
                                          << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [6U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [6U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [6U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [6U][2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [6U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp247, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
            = (__Vtemp247[0U] << 0xcU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
            = ((__Vtemp247[0U] >> 0x14U) | (__Vtemp247[1U] 
                                            << 0xcU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xdU) | ((__Vtemp247[1U] >> 0x14U) 
                            | (0x1000U & (__Vtemp247[2U] 
                                          << 0xcU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
            = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xdU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
            = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x13U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[6U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[6U][2U] = 0U;
        if ((IData)((0U == (0xc0U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][2U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][3U] 
                = (((IData)((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x13U) | ((IData)(((0xfffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xdU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[6U][4U] 
                = ((IData)(((0xfffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x13U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [7U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [7U])) {
            __Vtemp259[0U] = 1U;
            __Vtemp259[1U] = 0U;
            __Vtemp259[2U] = 0U;
            __Vtemp260[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp260[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp260[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp261, __Vtemp259, __Vtemp260);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] 
                = (__Vtemp261[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] 
                = ((__Vtemp261[0U] >> 0x1fU) | (__Vtemp261[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] 
                = ((__Vtemp261[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp261[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [7U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [7U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    << 0x10U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [7U][1U] >> 0x12U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [7U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U))))))) 
                    >> 0x10U) | ((IData)(((0x1ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [7U][2U] 
                                                                    >> 1U)))))) 
                                          >> 0x20U)) 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                         [7U][2U] 
                                                                         >> 1U)))))) 
                            >> 0x20U)) >> 0x10U);
        } else {
            __Vtemp270[0U] = 1U;
            __Vtemp270[1U] = 0U;
            __Vtemp270[2U] = 0U;
            __Vtemp271[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp271[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp271[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp272, __Vtemp270, __Vtemp271);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] 
                = __Vtemp272[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] 
                = __Vtemp272[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] 
                = (1U & __Vtemp272[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [7U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [7U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [7U][1U] 
                                          << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                 [7U][1U] >> 0x12U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                   [7U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                 [7U][2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                      [7U][2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [7U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp282, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
            = (__Vtemp282[0U] << 0xeU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
            = ((__Vtemp282[0U] >> 0x12U) | (__Vtemp282[1U] 
                                            << 0xeU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                << 0xfU) | ((__Vtemp282[1U] >> 0x12U) 
                            | (0x4000U & (__Vtemp282[2U] 
                                          << 0xeU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
            = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU)))))) 
                >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                             >> 0x1fU))))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
            = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                 (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                  >> 0x1fU))))) 
                        >> 0x20U)) >> 0x11U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[7U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[7U][2U] = 0U;
        if ((IData)((0U == (0x180U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][2U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][3U] 
                = (((IData)((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0x11U) | ((IData)(((0x3ffffffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                          >> 0x20U)) 
                                 << 0xfU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[7U][4U] 
                = ((IData)(((0x3ffffffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0x11U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [8U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [8U])) {
            __Vtemp294[0U] = 1U;
            __Vtemp294[1U] = 0U;
            __Vtemp294[2U] = 0U;
            __Vtemp295[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp295[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp295[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp296, __Vtemp294, __Vtemp295);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] 
                = (__Vtemp296[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] 
                = ((__Vtemp296[0U] >> 0x1fU) | (__Vtemp296[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] 
                = ((__Vtemp296[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp296[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [8U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [8U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    << 0x12U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [8U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xeU) | ((IData)(((0x7fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [8U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0x7fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [8U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xeU);
        } else {
            __Vtemp305[0U] = 1U;
            __Vtemp305[1U] = 0U;
            __Vtemp305[2U] = 0U;
            __Vtemp306[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp306[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp306[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp307, __Vtemp305, __Vtemp306);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] 
                = __Vtemp307[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] 
                = __Vtemp307[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] 
                = (1U & __Vtemp307[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [8U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [8U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [8U][1U] 
                                          << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [8U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [8U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [8U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [8U][2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [8U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp317, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
            = (__Vtemp317[0U] << 0x10U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
            = ((__Vtemp317[0U] >> 0x10U) | (__Vtemp317[1U] 
                                            << 0x10U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x11U) | ((__Vtemp317[1U] >> 0x10U) 
                             | (0x10000U & (__Vtemp317[2U] 
                                            << 0x10U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
            = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x11U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
            = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xfU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[8U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[8U][2U] = 0U;
        if ((IData)((0U == (0x300U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][2U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][3U] 
                = (((IData)((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xfU) | ((IData)(((0xffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x11U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[8U][4U] 
                = ((IData)(((0xffffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xfU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [9U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [9U])) {
            __Vtemp329[0U] = 1U;
            __Vtemp329[1U] = 0U;
            __Vtemp329[2U] = 0U;
            __Vtemp330[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp330[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp330[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp331, __Vtemp329, __Vtemp330);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] 
                = (__Vtemp331[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] 
                = ((__Vtemp331[0U] >> 0x1fU) | (__Vtemp331[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] 
                = ((__Vtemp331[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp331[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [9U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [9U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [9U][1U] << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    << 0x14U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [9U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U))))))) 
                    >> 0xcU) | ((IData)(((0x1fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [9U][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x1fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                        [9U][2U] 
                                                                        >> 1U)))))) 
                            >> 0x20U)) >> 0xcU);
        } else {
            __Vtemp340[0U] = 1U;
            __Vtemp340[1U] = 0U;
            __Vtemp340[2U] = 0U;
            __Vtemp341[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp341[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp341[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp342, __Vtemp340, __Vtemp341);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] 
                = __Vtemp342[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] 
                = __Vtemp342[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] 
                = (1U & __Vtemp342[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [9U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [9U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [9U][1U] << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [9U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [9U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [9U][2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                     [9U][2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [9U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp352, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
            = (__Vtemp352[0U] << 0x12U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
            = ((__Vtemp352[0U] >> 0xeU) | (__Vtemp352[1U] 
                                           << 0x12U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                << 0x13U) | ((__Vtemp352[1U] >> 0xeU) 
                             | (0x40000U & (__Vtemp352[2U] 
                                            << 0x12U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
            = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU)))))) 
                >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x13U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
            = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                 >> 0x1fU))))) 
                        >> 0x20U)) >> 0xdU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[9U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[9U][2U] = 0U;
        if ((IData)((0U == (0x600U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][2U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][3U] 
                = (((IData)((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xdU) | ((IData)(((0x3fffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x13U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[9U][4U] 
                = ((IData)(((0x3fffffffffffULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xdU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xaU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xaU])) {
            __Vtemp364[0U] = 1U;
            __Vtemp364[1U] = 0U;
            __Vtemp364[2U] = 0U;
            __Vtemp365[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp365[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp365[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp366, __Vtemp364, __Vtemp365);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] 
                = (__Vtemp366[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] 
                = ((__Vtemp366[0U] >> 0x1fU) | (__Vtemp366[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] 
                = ((__Vtemp366[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp366[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xaU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xaU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    << 0x16U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xaU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U))))))) 
                    >> 0xaU) | ((IData)(((0x7ffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xaU][2U] 
                                                                   >> 1U)))))) 
                                         >> 0x20U)) 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0x7ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xaU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 0xaU);
        } else {
            __Vtemp375[0U] = 1U;
            __Vtemp375[1U] = 0U;
            __Vtemp375[2U] = 0U;
            __Vtemp376[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp376[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp376[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp377, __Vtemp375, __Vtemp376);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] 
                = __Vtemp377[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] 
                = __Vtemp377[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] 
                = (1U & __Vtemp377[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xaU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xaU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xaU][1U] 
                                           << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xaU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xaU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                [0xaU][2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xaU][2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xaU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp387, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
            = (__Vtemp387[0U] << 0x14U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
            = ((__Vtemp387[0U] >> 0xcU) | (__Vtemp387[1U] 
                                           << 0x14U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x15U) | ((__Vtemp387[1U] >> 0xcU) 
                             | (0x100000U & (__Vtemp387[2U] 
                                             << 0x14U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
            = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                      & (- (QData)((IData)(
                                                           (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                            >> 0x1fU))))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
            = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 0xbU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xaU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xaU][2U] = 0U;
        if ((IData)((0U == (0xc00U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][2U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][3U] 
                = (((IData)((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 0xbU) | ((IData)(((0xfffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                         >> 0x20U)) 
                                << 0x15U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xaU][4U] 
                = ((IData)(((0xfffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 0xbU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xbU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xbU])) {
            __Vtemp399[0U] = 1U;
            __Vtemp399[1U] = 0U;
            __Vtemp399[2U] = 0U;
            __Vtemp400[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp400[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp400[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp401, __Vtemp399, __Vtemp400);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] 
                = (__Vtemp401[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] 
                = ((__Vtemp401[0U] >> 0x1fU) | (__Vtemp401[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] 
                = ((__Vtemp401[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp401[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xbU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xbU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    << 0x18U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xbU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U))))))) 
                    >> 8U) | ((IData)(((0x1ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xbU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x1ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                       [0xbU][2U] 
                                                                       >> 1U)))))) 
                            >> 0x20U)) >> 8U);
        } else {
            __Vtemp410[0U] = 1U;
            __Vtemp410[1U] = 0U;
            __Vtemp410[2U] = 0U;
            __Vtemp411[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp411[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp411[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp412, __Vtemp410, __Vtemp411);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] 
                = __Vtemp412[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] 
                = __Vtemp412[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] 
                = (1U & __Vtemp412[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xbU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xbU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                           [0xbU][1U] 
                                           << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xbU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xbU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xbU][2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                    [0xbU][2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xbU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp422, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
            = (__Vtemp422[0U] << 0x16U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
            = ((__Vtemp422[0U] >> 0xaU) | (__Vtemp422[1U] 
                                           << 0x16U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                << 0x17U) | ((__Vtemp422[1U] >> 0xaU) 
                             | (0x400000U & (__Vtemp422[2U] 
                                             << 0x16U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
            = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU)))))) 
                >> 9U) | ((IData)(((0x3ffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x17U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
            = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                               (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                                >> 0x1fU))))) 
                        >> 0x20U)) >> 9U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xbU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xbU][2U] = 0U;
        if ((IData)((0U == (0x1800U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][2U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][3U] 
                = (((IData)((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 9U) | ((IData)(((0x3ffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x17U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xbU][4U] 
                = ((IData)(((0x3ffffffffffULL & (- (QData)((IData)(
                                                                   (1U 
                                                                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 9U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xcU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xcU])) {
            __Vtemp434[0U] = 1U;
            __Vtemp434[1U] = 0U;
            __Vtemp434[2U] = 0U;
            __Vtemp435[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp435[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp435[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp436, __Vtemp434, __Vtemp435);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] 
                = (__Vtemp436[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] 
                = ((__Vtemp436[0U] >> 0x1fU) | (__Vtemp436[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] 
                = ((__Vtemp436[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp436[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xcU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xcU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1aU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xcU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U))))))) 
                    >> 6U) | ((IData)(((0x7fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xcU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0x7fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xcU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 6U);
        } else {
            __Vtemp445[0U] = 1U;
            __Vtemp445[1U] = 0U;
            __Vtemp445[2U] = 0U;
            __Vtemp446[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp446[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp446[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp447, __Vtemp445, __Vtemp446);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] 
                = __Vtemp447[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] 
                = __Vtemp447[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] 
                = (1U & __Vtemp447[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xcU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xcU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xcU][1U] 
                                         << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xcU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xcU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xcU][2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xcU][2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xcU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp457, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
            = (__Vtemp457[0U] << 0x18U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
            = ((__Vtemp457[0U] >> 8U) | (__Vtemp457[1U] 
                                         << 0x18U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x19U) | ((__Vtemp457[1U] >> 8U) 
                             | (0x1000000U & (__Vtemp457[2U] 
                                              << 0x18U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
            = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 7U) | ((IData)(((0xffffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x19U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
            = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 7U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xcU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xcU][2U] = 0U;
        if ((IData)((0U == (0x3000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][2U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][3U] 
                = (((IData)((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 7U) | ((IData)(((0xffffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x19U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xcU][4U] 
                = ((IData)(((0xffffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 7U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xdU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xdU])) {
            __Vtemp469[0U] = 1U;
            __Vtemp469[1U] = 0U;
            __Vtemp469[2U] = 0U;
            __Vtemp470[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp470[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp470[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp471, __Vtemp469, __Vtemp470);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] 
                = (__Vtemp471[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] 
                = ((__Vtemp471[0U] >> 0x1fU) | (__Vtemp471[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] 
                = ((__Vtemp471[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp471[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xdU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xdU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    << 0x1cU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U))))))) 
                    >> 4U) | ((IData)(((0x1fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xdU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x1fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                      [0xdU][2U] 
                                                                      >> 1U)))))) 
                            >> 0x20U)) >> 4U);
        } else {
            __Vtemp480[0U] = 1U;
            __Vtemp480[1U] = 0U;
            __Vtemp480[2U] = 0U;
            __Vtemp481[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp481[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp481[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp482, __Vtemp480, __Vtemp481);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] 
                = __Vtemp482[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] 
                = __Vtemp482[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] 
                = (1U & __Vtemp482[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xdU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xdU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xdU][1U] 
                                         << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xdU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xdU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xdU][2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                   [0xdU][2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xdU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp492, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
            = (__Vtemp492[0U] << 0x1aU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
            = ((__Vtemp492[0U] >> 6U) | (__Vtemp492[1U] 
                                         << 0x1aU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                << 0x1bU) | ((__Vtemp492[1U] >> 6U) 
                             | (0x4000000U & (__Vtemp492[2U] 
                                              << 0x1aU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
            = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU)))))) 
                >> 5U) | ((IData)(((0x3fffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1bU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
            = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                              (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                               >> 0x1fU))))) 
                        >> 0x20U)) >> 5U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xdU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xdU][2U] = 0U;
        if ((IData)((0U == (0x6000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][2U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][3U] 
                = (((IData)((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 5U) | ((IData)(((0x3fffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1bU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xdU][4U] 
                = ((IData)(((0x3fffffffffULL & (- (QData)((IData)(
                                                                  (1U 
                                                                   & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 5U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xeU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xeU])) {
            __Vtemp504[0U] = 1U;
            __Vtemp504[1U] = 0U;
            __Vtemp504[2U] = 0U;
            __Vtemp505[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp505[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp505[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp506, __Vtemp504, __Vtemp505);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] 
                = (__Vtemp506[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] 
                = ((__Vtemp506[0U] >> 0x1fU) | (__Vtemp506[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] 
                = ((__Vtemp506[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp506[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xeU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xeU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    << 0x1eU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U))))))) 
                    >> 2U) | ((IData)(((0x7ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                 [0xeU][2U] 
                                                                 >> 1U)))))) 
                                       >> 0x20U)) << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0x7ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                     [0xeU][2U] 
                                                                     >> 1U)))))) 
                            >> 0x20U)) >> 2U);
        } else {
            __Vtemp515[0U] = 1U;
            __Vtemp515[1U] = 0U;
            __Vtemp515[2U] = 0U;
            __Vtemp516[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp516[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp516[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp517, __Vtemp515, __Vtemp516);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] 
                = __Vtemp517[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] 
                = __Vtemp517[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] 
                = (1U & __Vtemp517[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xeU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xeU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xeU][1U] 
                                         << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xeU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xeU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xeU][2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xeU][2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xeU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp527, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
            = (__Vtemp527[0U] << 0x1cU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
            = ((__Vtemp527[0U] >> 4U) | (__Vtemp527[1U] 
                                         << 0x1cU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1dU) | ((__Vtemp527[1U] >> 4U) 
                             | (0x10000000U & (__Vtemp527[2U] 
                                               << 0x1cU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
            = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 3U) | ((IData)(((0xfffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1dU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
            = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 3U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xeU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xeU][2U] = 0U;
        if ((IData)((0U == (0xc000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][2U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][3U] 
                = (((IData)((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 3U) | ((IData)(((0xfffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1dU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xeU][4U] 
                = ((IData)(((0xfffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 3U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0xfU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0xfU])) {
            __Vtemp539[0U] = 1U;
            __Vtemp539[1U] = 0U;
            __Vtemp539[2U] = 0U;
            __Vtemp540[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp540[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp540[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp541, __Vtemp539, __Vtemp540);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] 
                = (__Vtemp541[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] 
                = ((__Vtemp541[0U] >> 0x1fU) | (__Vtemp541[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] 
                = ((__Vtemp541[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp541[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0xfU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0xfU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                         [0xfU][2U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                   [0xfU][2U] 
                                                                   >> 1U)))))));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                                                    [0xfU][2U] 
                                                                    >> 1U)))))) 
                           >> 0x20U));
        } else {
            __Vtemp550[0U] = 1U;
            __Vtemp550[1U] = 0U;
            __Vtemp550[2U] = 0U;
            __Vtemp551[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp551[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp551[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp552, __Vtemp550, __Vtemp551);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] 
                = __Vtemp552[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] 
                = __Vtemp552[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] 
                = (1U & __Vtemp552[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0xfU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0xfU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                         [0xfU][1U] 
                                         << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                  [0xfU][1U] >> 2U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                    [0xfU][2U] << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                              [0xfU][2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                                  [0xfU][2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0xfU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp562, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
            = (__Vtemp562[0U] << 0x1eU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
            = ((__Vtemp562[0U] >> 2U) | (__Vtemp562[1U] 
                                         << 0x1eU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                << 0x1fU) | ((__Vtemp562[1U] >> 2U) 
                             | (0x40000000U & (__Vtemp562[2U] 
                                               << 0x1eU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
            = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU)))))) 
                >> 1U) | ((IData)(((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                          >> 0x1fU))))) 
                                   >> 0x20U)) << 0x1fU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
            = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                             (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                                              >> 0x1fU))))) 
                        >> 0x20U)) >> 1U);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0xfU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0xfU][2U] = 0U;
        if ((IData)((0U == (0x18000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][0U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][1U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][2U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][3U] 
                = (((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U])))))) 
                    >> 1U) | ((IData)(((0x3ffffffffULL 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                                       >> 0x20U)) << 0x1fU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0xfU][4U] 
                = ((IData)(((0x3ffffffffULL & (- (QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))))) 
                            >> 0x20U)) >> 1U);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x10U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x10U])) {
            __Vtemp574[0U] = 1U;
            __Vtemp574[1U] = 0U;
            __Vtemp574[2U] = 0U;
            __Vtemp575[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp575[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp575[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp576, __Vtemp574, __Vtemp575);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] 
                = (__Vtemp576[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] 
                = ((__Vtemp576[0U] >> 0x1fU) | (__Vtemp576[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] 
                = ((__Vtemp576[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp576[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                [0x10U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x10U][2U] >> 1U)))) 
                    << 2U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x10U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x10U][2U] 
                                           >> 1U)))) 
                         >> 0x1eU));
        } else {
            __Vtemp585[0U] = 1U;
            __Vtemp585[1U] = 0U;
            __Vtemp585[2U] = 0U;
            __Vtemp586[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp586[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp586[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp587, __Vtemp585, __Vtemp586);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] 
                = __Vtemp587[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] 
                = __Vtemp587[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] 
                = (1U & __Vtemp587[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                [0x10U][1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x10U][2U]))) << 1U) 
                   | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x10U][2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                               [0x10U][2U]))) >> 0x1fU);
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x10U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp597, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
            = __Vtemp597[0U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
            = __Vtemp597[1U];
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 1U) | (1U 
                                                  & __Vtemp597[2U]));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
            = ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                           >> 0x1fU))) >> 0x1fU);
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x10U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][0U] = 0U;
        if ((IData)((0U == (0x30000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][1U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][2U] 
                = vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 1U) | vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x10U][4U] 
                = ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                   >> 0x1fU);
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x11U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x11U])) {
            __Vtemp609[0U] = 1U;
            __Vtemp609[1U] = 0U;
            __Vtemp609[2U] = 0U;
            __Vtemp610[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp610[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp610[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp611, __Vtemp609, __Vtemp610);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] 
                = (__Vtemp611[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] 
                = ((__Vtemp611[0U] >> 0x1fU) | (__Vtemp611[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] 
                = ((__Vtemp611[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp611[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x11U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x11U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x11U][2U] >> 1U)))) 
                    << 4U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x11U][1U] >> 0x1eU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x11U][2U] << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x11U][2U] 
                                           >> 1U)))) 
                         >> 0x1cU));
        } else {
            __Vtemp620[0U] = 1U;
            __Vtemp620[1U] = 0U;
            __Vtemp620[2U] = 0U;
            __Vtemp621[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp621[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp621[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp622, __Vtemp620, __Vtemp621);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] 
                = __Vtemp622[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] 
                = __Vtemp622[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] 
                = (1U & __Vtemp622[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x11U][0U] << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x11U][0U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x11U][1U] 
                                             << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x11U][2U]))) << 3U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x11U][1U] >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x11U][2U] 
                                                << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x11U][2U]))) 
                         >> 0x1dU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x11U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp632, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
            = (__Vtemp632[0U] << 2U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
            = ((__Vtemp632[0U] >> 0x1eU) | (__Vtemp632[1U] 
                                            << 2U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 3U) | ((
                                                   __Vtemp632[1U] 
                                                   >> 0x1eU) 
                                                  | (4U 
                                                     & (__Vtemp632[2U] 
                                                        << 2U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1dU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x11U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][0U] = 0U;
        if ((IData)((0U == (0x60000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 2U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 2U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 3U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1eU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 2U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x11U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1dU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x12U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x12U])) {
            __Vtemp644[0U] = 1U;
            __Vtemp644[1U] = 0U;
            __Vtemp644[2U] = 0U;
            __Vtemp645[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp645[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp645[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp646, __Vtemp644, __Vtemp645);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] 
                = (__Vtemp646[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] 
                = ((__Vtemp646[0U] >> 0x1fU) | (__Vtemp646[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] 
                = ((__Vtemp646[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp646[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x12U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x12U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x12U][2U] >> 1U)))) 
                    << 6U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x12U][1U] >> 0x1cU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x12U][2U] << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x12U][2U] 
                                           >> 1U)))) 
                         >> 0x1aU));
        } else {
            __Vtemp655[0U] = 1U;
            __Vtemp655[1U] = 0U;
            __Vtemp655[2U] = 0U;
            __Vtemp656[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp656[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp656[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp657, __Vtemp655, __Vtemp656);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] 
                = __Vtemp657[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] 
                = __Vtemp657[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] 
                = (1U & __Vtemp657[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x12U][0U] << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x12U][0U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x12U][1U] 
                                             << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x12U][2U]))) << 5U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x12U][1U] >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x12U][2U] 
                                                << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x12U][2U]))) 
                         >> 0x1bU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x12U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp667, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
            = (__Vtemp667[0U] << 4U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
            = ((__Vtemp667[0U] >> 0x1cU) | (__Vtemp667[1U] 
                                            << 4U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 5U) | ((
                                                   __Vtemp667[1U] 
                                                   >> 0x1cU) 
                                                  | (0x10U 
                                                     & (__Vtemp667[2U] 
                                                        << 4U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x1bU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x12U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][0U] = 0U;
        if ((IData)((0U == (0xc0000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 4U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 4U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 5U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1cU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 4U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x12U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x1bU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x13U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x13U])) {
            __Vtemp679[0U] = 1U;
            __Vtemp679[1U] = 0U;
            __Vtemp679[2U] = 0U;
            __Vtemp680[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp680[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp680[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp681, __Vtemp679, __Vtemp680);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] 
                = (__Vtemp681[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] 
                = ((__Vtemp681[0U] >> 0x1fU) | (__Vtemp681[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] 
                = ((__Vtemp681[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp681[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x13U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x13U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x13U][2U] >> 1U)))) 
                    << 8U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                               [0x13U][1U] >> 0x1aU) 
                              | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x13U][2U] << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x13U][2U] 
                                           >> 1U)))) 
                         >> 0x18U));
        } else {
            __Vtemp690[0U] = 1U;
            __Vtemp690[1U] = 0U;
            __Vtemp690[2U] = 0U;
            __Vtemp691[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp691[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp691[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp692, __Vtemp690, __Vtemp691);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] 
                = __Vtemp692[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] 
                = __Vtemp692[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] 
                = (1U & __Vtemp692[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x13U][0U] << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x13U][0U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x13U][1U] 
                                             << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x13U][2U]))) << 7U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x13U][1U] >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x13U][2U] 
                                                << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x13U][2U]))) 
                         >> 0x19U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x13U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp702, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
            = (__Vtemp702[0U] << 6U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
            = ((__Vtemp702[0U] >> 0x1aU) | (__Vtemp702[1U] 
                                            << 6U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 7U) | ((
                                                   __Vtemp702[1U] 
                                                   >> 0x1aU) 
                                                  | (0x40U 
                                                     & (__Vtemp702[2U] 
                                                        << 6U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x19U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x13U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][0U] = 0U;
        if ((IData)((0U == (0x180000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 6U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 6U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 7U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x1aU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 6U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x13U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x19U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x14U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x14U])) {
            __Vtemp714[0U] = 1U;
            __Vtemp714[1U] = 0U;
            __Vtemp714[2U] = 0U;
            __Vtemp715[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp715[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp715[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp716, __Vtemp714, __Vtemp715);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] 
                = (__Vtemp716[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] 
                = ((__Vtemp716[0U] >> 0x1fU) | (__Vtemp716[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] 
                = ((__Vtemp716[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp716[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x14U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x14U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x14U][2U] >> 1U)))) 
                    << 0xaU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x14U][1U] >> 0x18U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x14U][2U] << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x14U][2U] 
                                           >> 1U)))) 
                         >> 0x16U));
        } else {
            __Vtemp725[0U] = 1U;
            __Vtemp725[1U] = 0U;
            __Vtemp725[2U] = 0U;
            __Vtemp726[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp726[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp726[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp727, __Vtemp725, __Vtemp726);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] 
                = __Vtemp727[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] 
                = __Vtemp727[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] 
                = (1U & __Vtemp727[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x14U][0U] << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x14U][0U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x14U][1U] 
                                             << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x14U][2U]))) << 9U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x14U][1U] >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x14U][2U] 
                                                << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x14U][2U]))) 
                         >> 0x17U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x14U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp737, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
            = (__Vtemp737[0U] << 8U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
            = ((__Vtemp737[0U] >> 0x18U) | (__Vtemp737[1U] 
                                            << 8U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 9U) | ((
                                                   __Vtemp737[1U] 
                                                   >> 0x18U) 
                                                  | (0x100U 
                                                     & (__Vtemp737[2U] 
                                                        << 8U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x17U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x14U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][0U] = 0U;
        if ((IData)((0U == (0x300000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 8U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 8U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 9U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                               >> 0x18U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 8U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x14U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x17U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x15U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x15U])) {
            __Vtemp749[0U] = 1U;
            __Vtemp749[1U] = 0U;
            __Vtemp749[2U] = 0U;
            __Vtemp750[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp750[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp750[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp751, __Vtemp749, __Vtemp750);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] 
                = (__Vtemp751[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] 
                = ((__Vtemp751[0U] >> 0x1fU) | (__Vtemp751[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] 
                = ((__Vtemp751[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp751[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x15U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x15U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x15U][2U] >> 1U)))) 
                    << 0xcU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x15U][1U] >> 0x16U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x15U][2U] << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x15U][2U] 
                                           >> 1U)))) 
                         >> 0x14U));
        } else {
            __Vtemp760[0U] = 1U;
            __Vtemp760[1U] = 0U;
            __Vtemp760[2U] = 0U;
            __Vtemp761[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp761[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp761[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp762, __Vtemp760, __Vtemp761);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] 
                = __Vtemp762[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] 
                = __Vtemp762[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] 
                = (1U & __Vtemp762[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x15U][0U] << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x15U][0U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x15U][1U] 
                                             << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x15U][2U]))) << 0xbU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x15U][1U] >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x15U][2U] 
                                                << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x15U][2U]))) 
                         >> 0x15U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x15U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp772, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
            = (__Vtemp772[0U] << 0xaU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
            = ((__Vtemp772[0U] >> 0x16U) | (__Vtemp772[1U] 
                                            << 0xaU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xbU) | 
               ((__Vtemp772[1U] >> 0x16U) | (0x400U 
                                             & (__Vtemp772[2U] 
                                                << 0xaU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x15U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x15U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][0U] = 0U;
        if ((IData)((0U == (0x600000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xaU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xaU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xbU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x16U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xaU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x15U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x15U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x16U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x16U])) {
            __Vtemp784[0U] = 1U;
            __Vtemp784[1U] = 0U;
            __Vtemp784[2U] = 0U;
            __Vtemp785[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp785[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp785[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp786, __Vtemp784, __Vtemp785);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] 
                = (__Vtemp786[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] 
                = ((__Vtemp786[0U] >> 0x1fU) | (__Vtemp786[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] 
                = ((__Vtemp786[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp786[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x16U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x16U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x16U][2U] >> 1U)))) 
                    << 0xeU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                 [0x16U][1U] >> 0x14U) 
                                | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                   [0x16U][2U] << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x16U][2U] 
                                           >> 1U)))) 
                         >> 0x12U));
        } else {
            __Vtemp795[0U] = 1U;
            __Vtemp795[1U] = 0U;
            __Vtemp795[2U] = 0U;
            __Vtemp796[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp796[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp796[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp797, __Vtemp795, __Vtemp796);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] 
                = __Vtemp797[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] 
                = __Vtemp797[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] 
                = (1U & __Vtemp797[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x16U][0U] << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x16U][0U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x16U][1U] 
                                             << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x16U][2U]))) << 0xdU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x16U][1U] >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x16U][2U] 
                                                << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x16U][2U]))) 
                         >> 0x13U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x16U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp807, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
            = (__Vtemp807[0U] << 0xcU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
            = ((__Vtemp807[0U] >> 0x14U) | (__Vtemp807[1U] 
                                            << 0xcU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xdU) | 
               ((__Vtemp807[1U] >> 0x14U) | (0x1000U 
                                             & (__Vtemp807[2U] 
                                                << 0xcU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x13U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x16U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][0U] = 0U;
        if ((IData)((0U == (0xc00000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xcU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xcU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xdU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x14U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xcU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x16U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x13U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x17U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x17U])) {
            __Vtemp819[0U] = 1U;
            __Vtemp819[1U] = 0U;
            __Vtemp819[2U] = 0U;
            __Vtemp820[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp820[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp820[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp821, __Vtemp819, __Vtemp820);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] 
                = (__Vtemp821[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] 
                = ((__Vtemp821[0U] >> 0x1fU) | (__Vtemp821[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] 
                = ((__Vtemp821[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp821[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x17U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x17U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x17U][2U] >> 1U)))) 
                    << 0x10U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x17U][1U] >> 0x12U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x17U][2U] << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x17U][2U] 
                                           >> 1U)))) 
                         >> 0x10U));
        } else {
            __Vtemp830[0U] = 1U;
            __Vtemp830[1U] = 0U;
            __Vtemp830[2U] = 0U;
            __Vtemp831[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp831[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp831[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp832, __Vtemp830, __Vtemp831);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] 
                = __Vtemp832[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] 
                = __Vtemp832[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] 
                = (1U & __Vtemp832[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x17U][0U] << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x17U][0U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x17U][1U] 
                                             << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x17U][2U]))) << 0xfU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x17U][1U] >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x17U][2U] 
                                                << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x17U][2U]))) 
                         >> 0x11U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x17U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp842, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
            = (__Vtemp842[0U] << 0xeU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
            = ((__Vtemp842[0U] >> 0x12U) | (__Vtemp842[1U] 
                                            << 0xeU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0xfU) | 
               ((__Vtemp842[1U] >> 0x12U) | (0x4000U 
                                             & (__Vtemp842[2U] 
                                                << 0xeU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0x11U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x17U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][0U] = 0U;
        if ((IData)((0U == (0x1800000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0xeU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0xeU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0xfU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x12U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0xeU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x17U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0x11U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x18U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x18U])) {
            __Vtemp854[0U] = 1U;
            __Vtemp854[1U] = 0U;
            __Vtemp854[2U] = 0U;
            __Vtemp855[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp855[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp855[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp856, __Vtemp854, __Vtemp855);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] 
                = (__Vtemp856[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] 
                = ((__Vtemp856[0U] >> 0x1fU) | (__Vtemp856[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] 
                = ((__Vtemp856[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp856[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x18U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x18U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x18U][2U] >> 1U)))) 
                    << 0x12U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x18U][1U] >> 0x10U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x18U][2U] << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x18U][2U] 
                                           >> 1U)))) 
                         >> 0xeU));
        } else {
            __Vtemp865[0U] = 1U;
            __Vtemp865[1U] = 0U;
            __Vtemp865[2U] = 0U;
            __Vtemp866[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp866[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp866[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp867, __Vtemp865, __Vtemp866);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] 
                = __Vtemp867[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] 
                = __Vtemp867[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] 
                = (1U & __Vtemp867[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x18U][0U] << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x18U][0U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x18U][1U] 
                                             << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x18U][2U]))) << 0x11U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x18U][1U] >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                                [0x18U][2U] 
                                                << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x18U][2U]))) 
                         >> 0xfU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x18U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp877, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
            = (__Vtemp877[0U] << 0x10U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
            = ((__Vtemp877[0U] >> 0x10U) | (__Vtemp877[1U] 
                                            << 0x10U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x11U) | 
               ((__Vtemp877[1U] >> 0x10U) | (0x10000U 
                                             & (__Vtemp877[2U] 
                                                << 0x10U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xfU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x18U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][0U] = 0U;
        if ((IData)((0U == (0x3000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x10U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 << 0x10U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x11U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0x10U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                               << 0x10U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x18U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xfU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x19U])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x19U])) {
            __Vtemp889[0U] = 1U;
            __Vtemp889[1U] = 0U;
            __Vtemp889[2U] = 0U;
            __Vtemp890[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp890[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp890[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp891, __Vtemp889, __Vtemp890);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] 
                = (__Vtemp891[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] 
                = ((__Vtemp891[0U] >> 0x1fU) | (__Vtemp891[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] 
                = ((__Vtemp891[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp891[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x19U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x19U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x19U][2U] >> 1U)))) 
                    << 0x14U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x19U][1U] >> 0xeU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x19U][2U] << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x19U][2U] 
                                           >> 1U)))) 
                         >> 0xcU));
        } else {
            __Vtemp900[0U] = 1U;
            __Vtemp900[1U] = 0U;
            __Vtemp900[2U] = 0U;
            __Vtemp901[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp901[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp901[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp902, __Vtemp900, __Vtemp901);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] 
                = __Vtemp902[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] 
                = __Vtemp902[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] 
                = (1U & __Vtemp902[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x19U][0U] << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x19U][0U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x19U][1U] 
                                            << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x19U][2U]))) << 0x13U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x19U][1U] >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x19U][2U] 
                                               << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x19U][2U]))) 
                         >> 0xdU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x19U])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp912, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
            = (__Vtemp912[0U] << 0x12U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
            = ((__Vtemp912[0U] >> 0xeU) | (__Vtemp912[1U] 
                                           << 0x12U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x13U) | 
               ((__Vtemp912[1U] >> 0xeU) | (0x40000U 
                                            & (__Vtemp912[2U] 
                                               << 0x12U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xdU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x19U][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][0U] = 0U;
        if ((IData)((0U == (0x6000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x12U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x12U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x13U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xeU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x12U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x19U][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xdU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1aU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1aU])) {
            __Vtemp924[0U] = 1U;
            __Vtemp924[1U] = 0U;
            __Vtemp924[2U] = 0U;
            __Vtemp925[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp925[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp925[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp926, __Vtemp924, __Vtemp925);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] 
                = (__Vtemp926[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] 
                = ((__Vtemp926[0U] >> 0x1fU) | (__Vtemp926[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] 
                = ((__Vtemp926[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp926[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1aU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1aU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1aU][2U] >> 1U)))) 
                    << 0x16U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1aU][1U] >> 0xcU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1aU][2U] << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1aU][2U] 
                                           >> 1U)))) 
                         >> 0xaU));
        } else {
            __Vtemp935[0U] = 1U;
            __Vtemp935[1U] = 0U;
            __Vtemp935[2U] = 0U;
            __Vtemp936[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp936[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp936[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp937, __Vtemp935, __Vtemp936);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] 
                = __Vtemp937[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] 
                = __Vtemp937[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] 
                = (1U & __Vtemp937[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1aU][0U] << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1aU][0U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1aU][1U] 
                                            << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1aU][2U]))) << 0x15U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1aU][1U] >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1aU][2U] 
                                               << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1aU][2U]))) 
                         >> 0xbU));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1aU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp947, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
            = (__Vtemp947[0U] << 0x14U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
            = ((__Vtemp947[0U] >> 0xcU) | (__Vtemp947[1U] 
                                           << 0x14U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x15U) | 
               ((__Vtemp947[1U] >> 0xcU) | (0x100000U 
                                            & (__Vtemp947[2U] 
                                               << 0x14U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 0xbU));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1aU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][0U] = 0U;
        if ((IData)((0U == (0xc000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x14U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x14U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x15U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xcU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x14U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1aU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 0xbU));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1bU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1bU])) {
            __Vtemp959[0U] = 1U;
            __Vtemp959[1U] = 0U;
            __Vtemp959[2U] = 0U;
            __Vtemp960[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp960[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp960[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp961, __Vtemp959, __Vtemp960);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] 
                = (__Vtemp961[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] 
                = ((__Vtemp961[0U] >> 0x1fU) | (__Vtemp961[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] 
                = ((__Vtemp961[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp961[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1bU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1bU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1bU][2U] >> 1U)))) 
                    << 0x18U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1bU][1U] >> 0xaU) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1bU][2U] << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1bU][2U] 
                                           >> 1U)))) 
                         >> 8U));
        } else {
            __Vtemp970[0U] = 1U;
            __Vtemp970[1U] = 0U;
            __Vtemp970[2U] = 0U;
            __Vtemp971[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp971[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp971[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp972, __Vtemp970, __Vtemp971);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] 
                = __Vtemp972[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] 
                = __Vtemp972[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] 
                = (1U & __Vtemp972[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1bU][0U] << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1bU][0U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                            [0x1bU][1U] 
                                            << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1bU][2U]))) << 0x17U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1bU][1U] >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                               [0x1bU][2U] 
                                               << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1bU][2U]))) 
                         >> 9U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1bU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp982, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
            = (__Vtemp982[0U] << 0x16U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
            = ((__Vtemp982[0U] >> 0xaU) | (__Vtemp982[1U] 
                                           << 0x16U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x17U) | 
               ((__Vtemp982[1U] >> 0xaU) | (0x400000U 
                                            & (__Vtemp982[2U] 
                                               << 0x16U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 9U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1bU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][0U] = 0U;
        if ((IData)((0U == (0x18000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x16U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                << 0x16U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x17U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 0xaU) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                              << 0x16U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1bU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 9U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1cU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1cU])) {
            __Vtemp994[0U] = 1U;
            __Vtemp994[1U] = 0U;
            __Vtemp994[2U] = 0U;
            __Vtemp995[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp995[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp995[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp996, __Vtemp994, __Vtemp995);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] 
                = (__Vtemp996[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] 
                = ((__Vtemp996[0U] >> 0x1fU) | (__Vtemp996[1U] 
                                                << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] 
                = ((__Vtemp996[1U] >> 0x1fU) | (2U 
                                                & (__Vtemp996[2U] 
                                                   << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1cU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1cU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1cU][2U] >> 1U)))) 
                    << 0x1aU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1cU][1U] >> 8U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1cU][2U] << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1cU][2U] 
                                           >> 1U)))) 
                         >> 6U));
        } else {
            __Vtemp1005[0U] = 1U;
            __Vtemp1005[1U] = 0U;
            __Vtemp1005[2U] = 0U;
            __Vtemp1006[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1006[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1006[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1007, __Vtemp1005, __Vtemp1006);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] 
                = __Vtemp1007[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] 
                = __Vtemp1007[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] 
                = (1U & __Vtemp1007[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1cU][0U] << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1cU][0U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1cU][1U] 
                                          << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1cU][2U]))) << 0x19U) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1cU][1U] >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1cU][2U] 
                                             << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1cU][2U]))) 
                         >> 7U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1cU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1017, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
            = (__Vtemp1017[0U] << 0x18U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
            = ((__Vtemp1017[0U] >> 8U) | (__Vtemp1017[1U] 
                                          << 0x18U));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x19U) | 
               ((__Vtemp1017[1U] >> 8U) | (0x1000000U 
                                           & (__Vtemp1017[2U] 
                                              << 0x18U))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 7U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1cU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][0U] = 0U;
        if ((IData)((0U == (0x30000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x18U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x18U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x19U) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 8U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x18U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1cU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 7U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1dU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1dU])) {
            __Vtemp1029[0U] = 1U;
            __Vtemp1029[1U] = 0U;
            __Vtemp1029[2U] = 0U;
            __Vtemp1030[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1030[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1030[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1031, __Vtemp1029, __Vtemp1030);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] 
                = (__Vtemp1031[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] 
                = ((__Vtemp1031[0U] >> 0x1fU) | (__Vtemp1031[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] 
                = ((__Vtemp1031[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1031[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1dU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1dU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1dU][2U] >> 1U)))) 
                    << 0x1cU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1dU][1U] >> 6U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1dU][2U] << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1dU][2U] 
                                           >> 1U)))) 
                         >> 4U));
        } else {
            __Vtemp1040[0U] = 1U;
            __Vtemp1040[1U] = 0U;
            __Vtemp1040[2U] = 0U;
            __Vtemp1041[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1041[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1041[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1042, __Vtemp1040, __Vtemp1041);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] 
                = __Vtemp1042[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] 
                = __Vtemp1042[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] 
                = (1U & __Vtemp1042[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1dU][0U] << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1dU][0U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1dU][1U] 
                                          << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1dU][2U]))) << 0x1bU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1dU][1U] >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1dU][2U] 
                                             << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1dU][2U]))) 
                         >> 5U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1dU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1052, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
            = (__Vtemp1052[0U] << 0x1aU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
            = ((__Vtemp1052[0U] >> 6U) | (__Vtemp1052[1U] 
                                          << 0x1aU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1bU) | 
               ((__Vtemp1052[1U] >> 6U) | (0x4000000U 
                                           & (__Vtemp1052[2U] 
                                              << 0x1aU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 5U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1dU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][0U] = 0U;
        if ((IData)((0U == (0x60000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1aU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1aU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1bU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 6U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1aU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1dU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 5U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1eU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1eU])) {
            __Vtemp1064[0U] = 1U;
            __Vtemp1064[1U] = 0U;
            __Vtemp1064[2U] = 0U;
            __Vtemp1065[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1065[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1065[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1066, __Vtemp1064, __Vtemp1065);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] 
                = (__Vtemp1066[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] 
                = ((__Vtemp1066[0U] >> 0x1fU) | (__Vtemp1066[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] 
                = ((__Vtemp1066[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1066[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1eU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1eU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                      [0x1eU][2U] >> 1U)))) 
                    << 0x1eU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                  [0x1eU][1U] >> 4U) 
                                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                    [0x1eU][2U] << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                           [0x1eU][2U] 
                                           >> 1U)))) 
                         >> 2U));
        } else {
            __Vtemp1075[0U] = 1U;
            __Vtemp1075[1U] = 0U;
            __Vtemp1075[2U] = 0U;
            __Vtemp1076[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1076[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1076[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1077, __Vtemp1075, __Vtemp1076);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] 
                = __Vtemp1077[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] 
                = __Vtemp1077[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] 
                = (1U & __Vtemp1077[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1eU][0U] << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1eU][0U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1eU][1U] 
                                          << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1eU][2U]))) << 0x1dU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1eU][1U] >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1eU][2U] 
                                             << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1eU][2U]))) 
                         >> 3U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1eU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1087, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
            = (__Vtemp1087[0U] << 0x1cU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
            = ((__Vtemp1087[0U] >> 4U) | (__Vtemp1087[1U] 
                                          << 0x1cU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1dU) | 
               ((__Vtemp1087[1U] >> 4U) | (0x10000000U 
                                           & (__Vtemp1087[2U] 
                                              << 0x1cU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 3U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1eU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][0U] = 0U;
        if ((IData)((0U == (0xc0000000U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U])))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1cU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1cU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1dU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 4U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1cU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1eU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 3U));
        }
    }
    if ((2U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
         [0x1fU])) {
        if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
             [0x1fU])) {
            __Vtemp1099[0U] = 1U;
            __Vtemp1099[1U] = 0U;
            __Vtemp1099[2U] = 0U;
            __Vtemp1100[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1100[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1100[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1101, __Vtemp1099, __Vtemp1100);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] 
                = (__Vtemp1101[0U] << 1U);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] 
                = ((__Vtemp1101[0U] >> 0x1fU) | (__Vtemp1101[1U] 
                                                 << 1U));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] 
                = ((__Vtemp1101[1U] >> 0x1fU) | (2U 
                                                 & (__Vtemp1101[2U] 
                                                    << 1U)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                   [0x1fU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                    [0x1fU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                                          [0x1fU][2U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet
                         [0x1fU][2U] >> 1U));
        } else {
            __Vtemp1110[0U] = 1U;
            __Vtemp1110[1U] = 0U;
            __Vtemp1110[2U] = 0U;
            __Vtemp1111[0U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U]);
            __Vtemp1111[1U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U]);
            __Vtemp1111[2U] = (~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]);
            VL_ADD_W(3, __Vtemp1112, __Vtemp1110, __Vtemp1111);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] 
                = __Vtemp1112[0U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] 
                = __Vtemp1112[1U];
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] 
                = (1U & __Vtemp1112[2U]);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                   [0x1fU][0U] << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                    [0x1fU][0U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                          [0x1fU][1U] 
                                          << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                [0x1fU][2U]))) << 0x1fU) 
                   | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                       [0x1fU][1U] >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                             [0x1fU][2U] 
                                             << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1
                                     [0x1fU][2U]))) 
                         >> 1U));
        }
    } else if ((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__code
                [0x1fU])) {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        VL_SHIFTL_WWI(65,65,32, __Vtemp1122, vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb, 1U);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
            = (__Vtemp1122[0U] << 0x1eU);
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
            = ((__Vtemp1122[0U] >> 2U) | (__Vtemp1122[1U] 
                                          << 0x1eU));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
            = (((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                            >> 0x1fU))) << 0x1fU) | 
               ((__Vtemp1122[1U] >> 2U) | (0x40000000U 
                                           & (__Vtemp1122[2U] 
                                              << 0x1eU))));
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
            = (1U & ((- (IData)((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                 >> 0x1fU))) >> 1U));
    } else {
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][0U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][1U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__complemet1[0x1fU][2U] = 0U;
        vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][0U] = 0U;
        if ((1U & (((~ vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[1U]) 
                    & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                          >> 0x1fU))) & (~ (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_ina[0U] 
                                            >> 0x1fU))))) {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] = 0U;
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] = 0U;
        } else {
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][1U] 
                = (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                   << 0x1eU);
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][2U] 
                = ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[0U] 
                    >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                              << 0x1eU));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][3U] 
                = (((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                    << 0x1fU) | ((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[1U] 
                                  >> 2U) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U] 
                                            << 0x1eU)));
            vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp[0x1fU][4U] 
                = (1U & ((- (IData)((1U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__ext_inb[2U]))) 
                         >> 1U));
        }
    }
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
    vlSelf->top__DOT__fslu__DOT__ifu__DOT__next_pc 
        = ((1U & vlSelf->top__DOT__fslu__DOT__br_bus[2U])
            ? (((QData)((IData)(vlSelf->top__DOT__fslu__DOT__br_bus[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__fslu__DOT__br_bus[0U])))
            : (4ULL + vlSelf->top__DOT__fslu__DOT__ifu__DOT__pc_reg));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__0__KET____DOT__bitx__c 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__1__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 1U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__2__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 2U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__3__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 3U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__4__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 4U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__5__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 5U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__6__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 6U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__7__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 7U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__8__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 8U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__9__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 9U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__10__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xaU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__11__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xbU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__12__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xcU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__13__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xdU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__14__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xeU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__15__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0xfU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__16__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x10U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__17__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x11U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__18__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x12U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__19__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x13U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__20__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x14U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__21__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x15U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__22__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x16U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__23__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x17U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__24__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x18U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__25__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x19U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__26__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1aU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__27__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1bU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__28__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1cU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__29__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1dU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__30__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
                 >> 0x1eU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__31__KET____DOT__bitx__c 
        = (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[0U] 
             & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
                | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[0U] 
               & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[0U])) 
           >> 0x1fU);
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__32__KET____DOT__bitx__c 
        = (1U & ((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                  & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                    & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__33__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 1U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__34__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 2U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__35__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 3U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__36__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 4U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__37__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 5U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__38__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 6U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__39__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 7U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__40__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 8U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__41__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 9U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__42__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xaU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__43__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xbU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__44__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xcU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__45__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xdU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__46__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xeU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__47__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0xfU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__48__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x10U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__49__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x11U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__50__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x12U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__51__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x13U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__52__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x14U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__53__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x15U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__54__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x16U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__55__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x17U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__56__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x18U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__57__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x19U));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__58__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1aU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__59__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1bU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__60__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1cU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__61__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1dU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__62__KET____DOT__bitx__c 
        = (1U & (((vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__ina[1U] 
                   & (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                      | vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                  | (vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__inb[1U] 
                     & vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT__c[1U])) 
                 >> 0x1eU));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__alu_ex__DOT__add_u__DOT____Vcellout__faloop__BRA__63__KET____DOT__bitx__c 
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
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffffdU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (2U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffffbU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (4U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffff7U & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (8U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                       [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x20U][0U] 
                                       & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                       [0x1eU][0U])) 
                     | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                        [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffefU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x10U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffdfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x20U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffffbfU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x40U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffff7fU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x80U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                          [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x20U][0U] 
                                          & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                          [0x1eU][0U])) 
                        | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffeffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x100U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffdffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x200U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffffbffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x400U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffff7ffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x800U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                           [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x20U][0U] 
                                           & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                           [0x1eU][0U])) 
                         | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffefffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x1000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffdfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x2000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffffbfffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x4000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffff7fffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x8000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                            [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x20U][0U] 
                                            & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                            [0x1eU][0U])) 
                          | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffeffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x10000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffdffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x20000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfffbffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x40000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xfff7ffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x80000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                             [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x20U][0U] 
                                             & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                             [0x1eU][0U])) 
                           | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U])) << 1U)));
    vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U] 
        = ((0xffefffffU & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT____Vcellout__u0__c[0U]) 
           | (0x100000U & ((((vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1fU][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                              [0x1eU][0U]) | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x20U][0U] 
                                              & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                                              [0x1eU][0U])) 
                            | (vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x20U][0U] & vlSelf->top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__mul_temp
                               [0x1fU][0U])) << 1U)));
}
