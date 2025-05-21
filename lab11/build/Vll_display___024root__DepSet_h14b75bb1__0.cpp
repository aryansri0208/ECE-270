// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_display.h for the primary calling header

#include "Vll_display__pch.h"
#include "Vll_display__Syms.h"
#include "Vll_display___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__ico(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG

void Vll_display___024root___eval_triggers__ico(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vll_display___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__act(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG

void Vll_display___024root___eval_triggers__act(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vll_display___024root___dump_triggers__act(vlSelf);
    }
#endif
}
