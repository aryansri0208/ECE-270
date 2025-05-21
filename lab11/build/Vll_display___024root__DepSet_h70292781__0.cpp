// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_display.h for the primary calling header

#include "Vll_display__pch.h"
#include "Vll_display___024root.h"

extern const VlUnpacked<CData/*3:0*/, 16> Vll_display__ConstPool__TABLE_h05577678_0;

VL_INLINE_OPT void Vll_display___024root___ico_sequent__TOP__0(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___ico_sequent__TOP__0\n"); );
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
    vlSelf->green = vlSelf->land;
    vlSelf->red = vlSelf->crash;
    vlSelf->ll_display__DOT__display_value = ((8U & (IData)(vlSelf->ll_display__DOT__current_mode))
                                               ? ((4U 
                                                   & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                     ? 0U
                                                     : (IData)(vlSelf->alt))))
                                               : ((4U 
                                                   & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                     ? 0U
                                                     : (IData)(vlSelf->vel)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                     ? 0U
                                                     : (IData)(vlSelf->fuel))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->ll_display__DOT__current_mode))
                                                     ? (IData)(vlSelf->thrust)
                                                     : 0U))));
    vlSelf->ll_display__DOT____Vcellout__dec3__out 
        = ((0U != (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                           >> 0xcU))) ? vlSelf->ll_display__DOT__dec3__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 0xcU))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec2__out 
        = ((0x64U <= (IData)(vlSelf->ll_display__DOT__display_value))
            ? vlSelf->ll_display__DOT__dec2__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 8U))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec1__out 
        = ((0xaU <= (IData)(vlSelf->ll_display__DOT__display_value))
            ? vlSelf->ll_display__DOT__dec1__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 4U))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec0__out 
        = vlSelf->ll_display__DOT__dec0__DOT__SEG7[
        (0xfU & (IData)(vlSelf->ll_display__DOT__display_value))];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 0xcU));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx4];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 8U));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx3];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 4U));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx2];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->ll_display__DOT__display_value));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx1];
    vlSelf->ss3 = ((0x80U & (IData)(vlSelf->ss3)) | 
                   ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                     ? 0x40U : (IData)(vlSelf->ll_display__DOT____Vcellout__dec3__out)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2 
        = (IData)((3U == (3U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & (~ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                                  ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                                  ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__negative_value = (((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                                  ^ 
                                                  (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                                    & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                   | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                                       | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                                      & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                                                 << 0xfU) 
                                                | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                                     ^ 
                                                     ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                                      ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                                    << 0xeU) 
                                                   | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                                        ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                       << 0xdU) 
                                                      | (0x1000U 
                                                         & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                            << 0xcU))))) 
                                               | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1))));
    vlSelf->ll_display__DOT__out1 = ((0xfe00000U & vlSelf->ll_display__DOT__out1) 
                                     | ((((0x64U <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                           ? vlSelf->ll_display__DOT__dec6__DOT__SEG7
                                          [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3]
                                           : 0U) << 0xeU) 
                                        | ((((0xaU 
                                              <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                              ? vlSelf->ll_display__DOT__dec5__DOT__SEG7
                                             [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2]
                                              : 0U) 
                                            << 7U) 
                                           | vlSelf->ll_display__DOT__dec4__DOT__SEG7
                                           [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1])));
    vlSelf->ss2 = ((0x80U & (IData)(vlSelf->ss2)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? (vlSelf->ll_display__DOT__out1 
                                 >> 0xeU) : (IData)(vlSelf->ll_display__DOT____Vcellout__dec2__out))));
    vlSelf->ss1 = ((0x80U & (IData)(vlSelf->ss1)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? (vlSelf->ll_display__DOT__out1 
                                 >> 7U) : (IData)(vlSelf->ll_display__DOT____Vcellout__dec1__out))));
    vlSelf->ss0 = ((0x80U & (IData)(vlSelf->ss0)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? vlSelf->ll_display__DOT__out1
                              : (IData)(vlSelf->ll_display__DOT____Vcellout__dec0__out))));
}

void Vll_display___024root___eval_ico(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vll_display___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vll_display___024root___eval_triggers__ico(Vll_display___024root* vlSelf);

bool Vll_display___024root___eval_phase__ico(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vll_display___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vll_display___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vll_display___024root___eval_act(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vll_display___024root___nba_sequent__TOP__0(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___nba_sequent__TOP__0\n"); );
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
    if (vlSelf->rst) {
        vlSelf->ll_display__DOT__current_mode = 8U;
    } else if ((0U != (IData)(vlSelf->disp_ctrl))) {
        vlSelf->ll_display__DOT__current_mode = vlSelf->disp_ctrl;
    }
    vlSelf->ss6 = 0x38U;
    vlSelf->ss5 = 0x78U;
    vlSelf->ss7 = 0x77U;
    if ((8U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
        if ((4U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else if ((2U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else if ((1U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else {
            vlSelf->ss6 = 0x38U;
            vlSelf->ss5 = 0x78U;
            vlSelf->ss7 = 0x77U;
            vlSelf->ll_display__DOT__display_value 
                = vlSelf->alt;
        }
    } else if ((4U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
        if ((2U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else if ((1U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else {
            vlSelf->ss6 = 0x79U;
            vlSelf->ss5 = 0x38U;
            vlSelf->ss7 = 0x3eU;
            vlSelf->ll_display__DOT__display_value 
                = vlSelf->vel;
        }
    } else if ((2U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
        if ((1U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
            vlSelf->ss6 = 0U;
            vlSelf->ss5 = 0U;
            vlSelf->ss7 = 0U;
            vlSelf->ll_display__DOT__display_value = 0U;
        } else {
            vlSelf->ss6 = 0x77U;
            vlSelf->ss5 = 0x6dU;
            vlSelf->ss7 = 0x6fU;
            vlSelf->ll_display__DOT__display_value 
                = vlSelf->fuel;
        }
    } else if ((1U & (IData)(vlSelf->ll_display__DOT__current_mode))) {
        vlSelf->ss6 = 0x76U;
        vlSelf->ss5 = 0x50U;
        vlSelf->ss7 = 0x78U;
        vlSelf->ll_display__DOT__display_value = vlSelf->thrust;
    } else {
        vlSelf->ss6 = 0U;
        vlSelf->ss5 = 0U;
        vlSelf->ss7 = 0U;
        vlSelf->ll_display__DOT__display_value = 0U;
    }
    vlSelf->ll_display__DOT____Vcellout__dec3__out 
        = ((0U != (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                           >> 0xcU))) ? vlSelf->ll_display__DOT__dec3__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 0xcU))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec2__out 
        = ((0x64U <= (IData)(vlSelf->ll_display__DOT__display_value))
            ? vlSelf->ll_display__DOT__dec2__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 8U))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec1__out 
        = ((0xaU <= (IData)(vlSelf->ll_display__DOT__display_value))
            ? vlSelf->ll_display__DOT__dec1__DOT__SEG7
           [(0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                     >> 4U))] : 0U);
    vlSelf->ll_display__DOT____Vcellout__dec0__out 
        = vlSelf->ll_display__DOT__dec0__DOT__SEG7[
        (0xfU & (IData)(vlSelf->ll_display__DOT__display_value))];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 0xcU));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx4];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 8U));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx3];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                            >> 4U));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx2];
    __Vtableidx1 = (0xfU & (IData)(vlSelf->ll_display__DOT__display_value));
    vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out 
        = Vll_display__ConstPool__TABLE_h05577678_0
        [__Vtableidx1];
    vlSelf->ss3 = ((0x80U & (IData)(vlSelf->ss3)) | 
                   ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                     ? 0x40U : (IData)(vlSelf->ll_display__DOT____Vcellout__dec3__out)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2 
        = (IData)((3U == (3U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & (~ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                                  ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))) 
            << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                        ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                           ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))) 
                       << 2U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  << 1U) | (1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                                  ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                  >> 1U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
            >> 1U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a 
        = (1U & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                  >> 2U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3 
        = (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
            >> 2U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a 
        = (IData)((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                    >> 3U) ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3)));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b 
        = ((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
             >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3)) 
           | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
              & ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a))));
    vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2 
        = ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
           & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
    vlSelf->ll_display__DOT__negative_value = (((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                                  ^ 
                                                  (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                                    & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                   | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                                       | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                                      & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                                                 << 0xfU) 
                                                | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                                     ^ 
                                                     ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                                      ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                                    << 0xeU) 
                                                   | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                                        ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                       << 0xdU) 
                                                      | (0x1000U 
                                                         & (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                            << 0xcU))))) 
                                               | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2) 
                                                      << 4U) 
                                                     | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1))));
    vlSelf->ll_display__DOT__out1 = ((0xfe00000U & vlSelf->ll_display__DOT__out1) 
                                     | ((((0x64U <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                           ? vlSelf->ll_display__DOT__dec6__DOT__SEG7
                                          [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3]
                                           : 0U) << 0xeU) 
                                        | ((((0xaU 
                                              <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                              ? vlSelf->ll_display__DOT__dec5__DOT__SEG7
                                             [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2]
                                              : 0U) 
                                            << 7U) 
                                           | vlSelf->ll_display__DOT__dec4__DOT__SEG7
                                           [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1])));
    vlSelf->ss2 = ((0x80U & (IData)(vlSelf->ss2)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? (vlSelf->ll_display__DOT__out1 
                                 >> 0xeU) : (IData)(vlSelf->ll_display__DOT____Vcellout__dec2__out))));
    vlSelf->ss1 = ((0x80U & (IData)(vlSelf->ss1)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? (vlSelf->ll_display__DOT__out1 
                                 >> 7U) : (IData)(vlSelf->ll_display__DOT____Vcellout__dec1__out))));
    vlSelf->ss0 = ((0x80U & (IData)(vlSelf->ss0)) | 
                   (0x7fU & ((0x8000U & (IData)(vlSelf->ll_display__DOT__display_value))
                              ? vlSelf->ll_display__DOT__out1
                              : (IData)(vlSelf->ll_display__DOT____Vcellout__dec0__out))));
}

void Vll_display___024root___eval_nba(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vll_display___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vll_display___024root___eval_triggers__act(Vll_display___024root* vlSelf);

bool Vll_display___024root___eval_phase__act(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vll_display___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vll_display___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vll_display___024root___eval_phase__nba(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vll_display___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__ico(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__nba(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_display___024root___dump_triggers__act(Vll_display___024root* vlSelf);
#endif  // VL_DEBUG

void Vll_display___024root___eval(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval\n"); );
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
            Vll_display___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 351, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vll_display___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vll_display___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 351, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vll_display___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 351, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vll_display___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vll_display___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vll_display___024root___eval_debug_assertions(Vll_display___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->land & 0xfeU))) {
        Verilated::overWidthError("land");}
    if (VL_UNLIKELY((vlSelf->crash & 0xfeU))) {
        Verilated::overWidthError("crash");}
    if (VL_UNLIKELY((vlSelf->disp_ctrl & 0xf0U))) {
        Verilated::overWidthError("disp_ctrl");}
}
#endif  // VL_DEBUG
