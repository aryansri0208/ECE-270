// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_display.h for the primary calling header

#include "Vll_display__pch.h"
#include "Vll_display__Syms.h"
#include "Vll_display___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__stl(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vll_display___024root___eval_triggers__stl(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vll_display___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
