// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest.h"
#include "Vtest__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtest::Vtest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtest__Syms(_vcontextp__, _vcname__, this)}
    , addr_i{vlSymsp->TOP.addr_i}
    , addr_o{vlSymsp->TOP.addr_o}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , isram_e{vlSymsp->TOP.isram_e}
    , isram_addr{vlSymsp->TOP.isram_addr}
    , isram_rdata{vlSymsp->TOP.isram_rdata}
    , dsram_e{vlSymsp->TOP.dsram_e}
    , dsram_we{vlSymsp->TOP.dsram_we}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , bubble{vlSymsp->TOP.bubble}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u0}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u11}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u12}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u13}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u14}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u15}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u16}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u17}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u18}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u19}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u20}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u21}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u22}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u23}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u24}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u25}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u26}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u27}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u28}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u29}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__u30}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__0__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__1__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__2__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__3__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__4__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__5__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__6__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__7__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__8__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__9__KET____DOT__ux}
    , __PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux{vlSymsp->TOP.__PVT__top__DOT__fslu__DOT__exu__DOT__mul_ex__DOT__level1__BRA__10__KET____DOT__ux}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtest::Vtest(const char* _vcname__)
    : Vtest(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtest::~Vtest() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtest___024root___eval_initial(Vtest___024root* vlSelf);
void Vtest___024root___eval_settle(Vtest___024root* vlSelf);
void Vtest___024root___eval(Vtest___024root* vlSelf);
QData Vtest___024root___change_request(Vtest___024root* vlSelf);
#ifdef VL_DEBUG
void Vtest___024root___eval_debug_assertions(Vtest___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest___024root___final(Vtest___024root* vlSelf);

static void _eval_initial_loop(Vtest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtest___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtest___024root___eval_settle(&(vlSymsp->TOP));
        Vtest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lff/ysyx-workbench/npc/vsrc/mmu.v", 6, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtest___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtest___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lff/ysyx-workbench/npc/vsrc/mmu.v", 6, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtest___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtest::final() {
    Vtest___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtest::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtest::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtest___024root__traceInitTop(Vtest___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtest___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtest___024root__traceRegister(Vtest___024root* vlSelf, VerilatedVcd* tracep);

void Vtest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtest___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
