// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hc52109ef_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT____Vcellinp__ssr__button = (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaaaaaU 
                                                          & vlSelf->pb)));
    vlSelf->__VdfgTmp_he62d57a5__0 = (0U != (0xfU & 
                                             ((vlSelf->pb 
                                               >> 4U) 
                                              | (vlSelf->pb 
                                                 >> 0xcU))));
    vlSelf->__VdfgTmp_ha783dcf3__0 = (IData)((0U != 
                                              (0xcccccU 
                                               & vlSelf->pb)));
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT____Vcellinp__ssr__button) 
                      == (1U & ((IData)(vlSelf->top__DOT__ssr__DOT__next_s) 
                                >> (7U & (~ (IData)(vlSelf->top__DOT__f__DOT__lockstate)))))) 
                     << 5U) | (((0x10U == (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->pb 
                                                         >> 0x10U)))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->pb 
                                                            >> 8U)))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__VdfgTmp_he62d57a5__0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_ha783dcf3__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__ssr__button)))))) 
                                << 4U) | (IData)(vlSelf->top__DOT__f__DOT__lockstate)));
    vlSelf->top__DOT__f__DOT__n_lockstate = Vtop__ConstPool__TABLE_hc52109ef_0
        [__Vtableidx1];
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->top__DOT__sk1__DOT__d = 0U;
        vlSelf->top__DOT__psc__DOT__temp = 0U;
    } else {
        vlSelf->top__DOT__sk1__DOT__d = (3U & (VL_SHIFTL_III(2,2,32, (IData)(vlSelf->top__DOT__sk1__DOT__d), 1U) 
                                               | (0U 
                                                  != 
                                                  (0xfffffU 
                                                   & vlSelf->pb))));
        vlSelf->top__DOT__psc__DOT__temp = vlSelf->top__DOT__psc__DOT__ntemp;
    }
    vlSelf->top__DOT__psc__DOT__noclk = ((1U & (~ (IData)(vlSelf->reset))) 
                                         && (IData)(vlSelf->top__DOT__psc__DOT__oclk));
    vlSelf->top__DOT__keyclk = (1U & ((IData)(vlSelf->top__DOT__sk1__DOT__d) 
                                      >> 1U));
    if ((0x31U == (IData)(vlSelf->top__DOT__psc__DOT__temp))) {
        vlSelf->top__DOT__psc__DOT__ntemp = 0U;
        vlSelf->top__DOT__psc__DOT__oclk = (1U & (~ (IData)(vlSelf->top__DOT__psc__DOT__noclk)));
    } else {
        vlSelf->top__DOT__psc__DOT__ntemp = (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__psc__DOT__temp)));
        vlSelf->top__DOT__psc__DOT__oclk = (1U & (IData)(vlSelf->top__DOT__psc__DOT__noclk));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __Vdly__top__DOT__ssr__DOT__next_s;
    __Vdly__top__DOT__ssr__DOT__next_s = 0;
    // Body
    __Vdly__top__DOT__ssr__DOT__next_s = vlSelf->top__DOT__ssr__DOT__next_s;
    if (vlSelf->reset) {
        __Vdly__top__DOT__ssr__DOT__next_s = 0U;
        vlSelf->top__DOT__f__DOT__lockstate = 8U;
    } else {
        if (((~ (IData)((((0U != (0xfff00U & vlSelf->pb)) 
                          | (IData)(vlSelf->__VdfgTmp_he62d57a5__0)) 
                         | (IData)(vlSelf->__VdfgTmp_ha783dcf3__0)))) 
             & (8U == (IData)(vlSelf->top__DOT__f__DOT__lockstate)))) {
            __Vdly__top__DOT__ssr__DOT__next_s = ((0xfeU 
                                                   & ((IData)(vlSelf->top__DOT__ssr__DOT__next_s) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->top__DOT____Vcellinp__ssr__button));
        }
        vlSelf->top__DOT__f__DOT__lockstate = vlSelf->top__DOT__f__DOT__n_lockstate;
    }
    vlSelf->top__DOT__ssr__DOT__next_s = __Vdly__top__DOT__ssr__DOT__next_s;
    vlSelf->right = vlSelf->top__DOT__ssr__DOT__next_s;
}

extern const VlUnpacked<QData/*63:0*/, 32> Vtop__ConstPool__TABLE_h27ba938f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h58c203c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hf6f357f4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h99fcc2d9_0;

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__psc__DOT__noclk) 
                     << 4U) | (IData)(vlSelf->top__DOT__f__DOT__lockstate));
    vlSelf->top__DOT____Vcellout__d__ss = Vtop__ConstPool__TABLE_h27ba938f_0
        [__Vtableidx2];
    vlSelf->red = Vtop__ConstPool__TABLE_h58c203c7_0
        [__Vtableidx2];
    vlSelf->green = Vtop__ConstPool__TABLE_hf6f357f4_0
        [__Vtableidx2];
    vlSelf->blue = Vtop__ConstPool__TABLE_h99fcc2d9_0
        [__Vtableidx2];
    vlSelf->ss7 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x38U)));
    vlSelf->ss6 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x30U)));
    vlSelf->ss5 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x28U)));
    vlSelf->ss4 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x20U)));
    vlSelf->ss3 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x18U)));
    vlSelf->ss2 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 0x10U)));
    vlSelf->ss1 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__d__ss 
                                    >> 8U)));
    vlSelf->ss0 = (0xffU & (IData)(vlSelf->top__DOT____Vcellout__d__ss));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelf->top__DOT____Vcellinp__ssr__button) 
                      == (1U & ((IData)(vlSelf->top__DOT__ssr__DOT__next_s) 
                                >> (7U & (~ (IData)(vlSelf->top__DOT__f__DOT__lockstate)))))) 
                     << 5U) | (((0x10U == (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSelf->pb 
                                                         >> 0x10U)))) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (vlSelf->pb 
                                                            >> 8U)))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__VdfgTmp_he62d57a5__0) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_ha783dcf3__0) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->top__DOT____Vcellinp__ssr__button)))))) 
                                << 4U) | (IData)(vlSelf->top__DOT__f__DOT__lockstate)));
    vlSelf->top__DOT__f__DOT__n_lockstate = Vtop__ConstPool__TABLE_hc52109ef_0
        [__Vtableidx1];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->hz100 & 0xfeU))) {
        Verilated::overWidthError("hz100");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->pb & 0xffe00000U))) {
        Verilated::overWidthError("pb");}
    if (VL_UNLIKELY((vlSelf->txready & 0xfeU))) {
        Verilated::overWidthError("txready");}
    if (VL_UNLIKELY((vlSelf->rxready & 0xfeU))) {
        Verilated::overWidthError("rxready");}
}
#endif  // VL_DEBUG
