// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_control.h for the primary calling header

#include "Vll_control__pch.h"
#include "Vll_control___024root.h"

extern const VlUnpacked<CData/*3:0*/, 16> Vll_control__ConstPool__TABLE_h05577678_0;

VL_INLINE_OPT void Vll_control___024root___ico_sequent__TOP__0(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx1 = (0xfU & (IData)(vlSelf->vel));
    vlSelf->ll_control__DOT__u0__DOT____Vcellout__c0__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->vel) >> 4U));
    vlSelf->ll_control__DOT__u0__DOT____Vcellout__c1__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->vel) >> 8U));
    vlSelf->ll_control__DOT__u0__DOT____Vcellout__c2__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->vel) >> 0xcU));
    vlSelf->ll_control__DOT__u0__DOT____Vcellout__c3__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx4];
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_1 
        = (1U & ((IData)(vlSelf->alt) & (IData)(vlSelf->vel)));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->alt) >> 1U) ^ (((IData)(vlSelf->vel) 
                                                  >> 1U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 1U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 1U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->alt) >> 2U) ^ (((IData)(vlSelf->vel) 
                                                  >> 2U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 2U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 2U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a 
        = (1U & (((IData)(vlSelf->alt) >> 3U) ^ (((IData)(vlSelf->vel) 
                                                  >> 3U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 3U) | ((((IData)(vlSelf->vel) 
                               | (IData)(vlSelf->alt)) 
                              >> 3U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3))) 
                 | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                    & ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a)))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 4U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 4U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->alt) >> 5U) ^ (((IData)(vlSelf->vel) 
                                                  >> 5U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 5U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 5U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->alt) >> 6U) ^ (((IData)(vlSelf->vel) 
                                                  >> 6U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 6U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 6U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a 
        = (1U & (((IData)(vlSelf->alt) >> 7U) ^ (((IData)(vlSelf->vel) 
                                                  >> 7U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 7U) | ((((IData)(vlSelf->vel) 
                               | (IData)(vlSelf->alt)) 
                              >> 7U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3))) 
                 | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                    & ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a)))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 8U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 8U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->alt) >> 9U) ^ (((IData)(vlSelf->vel) 
                                                  >> 9U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 9U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 9U) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xaU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xaU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xaU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xaU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xbU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xbU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 0xbU) | ((((IData)(vlSelf->vel) 
                                 | (IData)(vlSelf->alt)) 
                                >> 0xbU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3))) 
                 | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                    & ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a)))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xcU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xcU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xdU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xdU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xdU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xdU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xeU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xeU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xeU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xeU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)(((((IData)(vlSelf->alt) ^ (IData)(vlSelf->vel)) 
                    >> 0xfU) ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3)));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 0xfU) | ((((IData)(vlSelf->vel) 
                                 | (IData)(vlSelf->alt)) 
                                >> 0xfU) & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3))) 
                 | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                    & ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a)))));
    vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_control__DOT__sum = (((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                       ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                           & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                          | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                              | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                                      << 0xfU) | ((
                                                   ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                                    ^ 
                                                    ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                                   << 0xeU) 
                                                  | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                                       ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                      << 0xdU) 
                                                     | (0x1000U 
                                                        & ((0xfffff000U 
                                                            & (IData)(vlSelf->alt)) 
                                                           ^ 
                                                           ((0xfffff000U 
                                                             & (IData)(vlSelf->vel)) 
                                                            ^ 
                                                            ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                                             << 0xcU))))))) 
                                    | (((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                                          ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                              & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                             | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                                 | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))) 
                                         << 0xbU) | 
                                        ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))) 
                                          << 0xaU) 
                                         | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                             << 9U) 
                                            | (0x100U 
                                               & ((0xffffff00U 
                                                   & (IData)(vlSelf->alt)) 
                                                  ^ 
                                                  ((0xffffff00U 
                                                    & (IData)(vlSelf->vel)) 
                                                   ^ 
                                                   ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                                    << 8U))))))) 
                                       | (((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                                             ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                                 & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                                    | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))) 
                                            << 7U) 
                                           | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                                ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))) 
                                               << 6U) 
                                              | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                  << 5U) 
                                                 | (0x10U 
                                                    & ((0xfffffff0U 
                                                        & (IData)(vlSelf->alt)) 
                                                       ^ 
                                                       ((0xfffffff0U 
                                                         & (IData)(vlSelf->vel)) 
                                                        ^ 
                                                        ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                                         << 4U))))))) 
                                          | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))) 
                                              << 3U) 
                                             | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                                  ^ 
                                                  ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->alt) 
                                                         ^ (IData)(vlSelf->vel)))))))));
    vlSelf->ll_control__DOT__land_temp = ((IData)((
                                                   ((IData)(vlSelf->ll_control__DOT__sum) 
                                                    >> 0xfU) 
                                                   | (0U 
                                                      == (IData)(vlSelf->ll_control__DOT__sum)))) 
                                          && (1U & 
                                              (~ ((0x9970U 
                                                   > (IData)(vlSelf->vel)) 
                                                  & ((IData)(vlSelf->vel) 
                                                     >> 0xfU)))));
    vlSelf->ll_control__DOT__crash_temp = ((IData)(
                                                   (((IData)(vlSelf->ll_control__DOT__sum) 
                                                     >> 0xfU) 
                                                    | (0U 
                                                       == (IData)(vlSelf->ll_control__DOT__sum)))) 
                                           && ((0x9970U 
                                                > (IData)(vlSelf->vel)) 
                                               & ((IData)(vlSelf->vel) 
                                                  >> 0xfU)));
}

void Vll_control___024root___eval_ico(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vll_control___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vll_control___024root___eval_triggers__ico(Vll_control___024root* vlSelf);

bool Vll_control___024root___eval_phase__ico(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vll_control___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vll_control___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vll_control___024root___eval_act(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vll_control___024root___nba_sequent__TOP__0(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->crash = ((1U & (~ (IData)(vlSelf->rst))) 
                     && (IData)(vlSelf->ll_control__DOT__crash_temp));
    vlSelf->land = ((1U & (~ (IData)(vlSelf->rst))) 
                    && (IData)(vlSelf->ll_control__DOT__land_temp));
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->wen = (1U & ((~ (IData)(vlSelf->ll_control__DOT__land_temp)) 
                             & (~ (IData)(vlSelf->ll_control__DOT__crash_temp))));
    }
}

void Vll_control___024root___eval_nba(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vll_control___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vll_control___024root___eval_triggers__act(Vll_control___024root* vlSelf);

bool Vll_control___024root___eval_phase__act(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vll_control___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vll_control___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vll_control___024root___eval_phase__nba(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vll_control___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__ico(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__nba(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__act(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG

void Vll_control___024root___eval(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval\n"); );
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
            Vll_control___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 209, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vll_control___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vll_control___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 209, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vll_control___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 209, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vll_control___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vll_control___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vll_control___024root___eval_debug_assertions(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
