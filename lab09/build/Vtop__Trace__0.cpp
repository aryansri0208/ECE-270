// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__psc__DOT__noclk));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__keyclk));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__psc__DOT__temp),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__psc__DOT__ntemp),8);
        bufp->chgBit(oldp+4,((1U & ((0x31U == (IData)(vlSelf->top__DOT__psc__DOT__temp))
                                     ? (~ (IData)(vlSelf->top__DOT__psc__DOT__noclk))
                                     : (IData)(vlSelf->top__DOT__psc__DOT__noclk)))));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__sk1__DOT__d),2);
    }
    bufp->chgBit(oldp+6,(vlSelf->hz100));
    bufp->chgBit(oldp+7,(vlSelf->reset));
    bufp->chgIData(oldp+8,(vlSelf->pb),21);
    bufp->chgCData(oldp+9,(vlSelf->left),8);
    bufp->chgCData(oldp+10,(vlSelf->right),8);
    bufp->chgCData(oldp+11,(vlSelf->ss7),8);
    bufp->chgCData(oldp+12,(vlSelf->ss6),8);
    bufp->chgCData(oldp+13,(vlSelf->ss5),8);
    bufp->chgCData(oldp+14,(vlSelf->ss4),8);
    bufp->chgCData(oldp+15,(vlSelf->ss3),8);
    bufp->chgCData(oldp+16,(vlSelf->ss2),8);
    bufp->chgCData(oldp+17,(vlSelf->ss1),8);
    bufp->chgCData(oldp+18,(vlSelf->ss0),8);
    bufp->chgBit(oldp+19,(vlSelf->red));
    bufp->chgBit(oldp+20,(vlSelf->green));
    bufp->chgBit(oldp+21,(vlSelf->blue));
    bufp->chgCData(oldp+22,(vlSelf->txdata),8);
    bufp->chgCData(oldp+23,(vlSelf->rxdata),8);
    bufp->chgBit(oldp+24,(vlSelf->txclk));
    bufp->chgBit(oldp+25,(vlSelf->rxclk));
    bufp->chgBit(oldp+26,(vlSelf->txready));
    bufp->chgBit(oldp+27,(vlSelf->rxready));
    bufp->chgCData(oldp+28,((((IData)((0U != (0xfU 
                                              & (vlSelf->pb 
                                                 >> 0x10U)))) 
                              << 4U) | (((IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->pb 
                                                      >> 8U)))) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->__VdfgTmp_he62d57a5__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_ha783dcf3__0) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->top__DOT____Vcellinp__ssr__button)))))),5);
    bufp->chgCData(oldp+29,(vlSelf->top__DOT__f__DOT__lockstate),4);
    bufp->chgQData(oldp+30,(vlSelf->top__DOT____Vcellout__d__ss),64);
    bufp->chgCData(oldp+32,(vlSelf->top__DOT__f__DOT__n_lockstate),4);
    bufp->chgBit(oldp+33,(((IData)(vlSelf->top__DOT____Vcellinp__ssr__button) 
                           == (1U & ((IData)(vlSelf->top__DOT__ssr__DOT__next_s) 
                                     >> (7U & (~ (IData)(vlSelf->top__DOT__f__DOT__lockstate))))))));
    bufp->chgBit(oldp+34,((0x10U == (((IData)((0U != 
                                               (0xfU 
                                                & (vlSelf->pb 
                                                   >> 0x10U)))) 
                                      << 4U) | (((IData)(
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
                                                      | (IData)(vlSelf->top__DOT____Vcellinp__ssr__button))))))));
    bufp->chgIData(oldp+35,((0xfffffU & vlSelf->pb)),20);
    bufp->chgBit(oldp+36,(((~ (IData)((((0U != (0xfff00U 
                                                & vlSelf->pb)) 
                                        | (IData)(vlSelf->__VdfgTmp_he62d57a5__0)) 
                                       | (IData)(vlSelf->__VdfgTmp_ha783dcf3__0)))) 
                           & (8U == (IData)(vlSelf->top__DOT__f__DOT__lockstate)))));
    bufp->chgBit(oldp+37,(vlSelf->top__DOT____Vcellinp__ssr__button));
    bufp->chgCData(oldp+38,(vlSelf->top__DOT__ssr__DOT__next_s),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
