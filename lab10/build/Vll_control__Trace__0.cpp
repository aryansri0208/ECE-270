// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vll_control___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ll_control__DOT__land_temp));
        bufp->chgBit(oldp+1,(vlSelf->ll_control__DOT__crash_temp));
        bufp->chgSData(oldp+2,(vlSelf->ll_control__DOT__sum),16);
        bufp->chgSData(oldp+3,((((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c3__out) 
                                 << 0xcU) | (((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c2__out) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c1__out) 
                                                 << 4U) 
                                                | (IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c0__out))))),16);
        bufp->chgCData(oldp+4,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c0__out),4);
        bufp->chgCData(oldp+5,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c1__out),4);
        bufp->chgCData(oldp+6,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c2__out),4);
        bufp->chgCData(oldp+7,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c3__out),4);
        bufp->chgBit(oldp+8,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
        bufp->chgBit(oldp+9,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
        bufp->chgBit(oldp+10,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
        bufp->chgBit(oldp+11,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                               & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+13,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a));
        bufp->chgBit(oldp+14,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a));
        bufp->chgBit(oldp+15,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a));
        bufp->chgBit(oldp+16,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_1));
        bufp->chgBit(oldp+17,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2));
        bufp->chgBit(oldp+18,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3));
        bufp->chgCData(oldp+19,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+20,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+22,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+23,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2));
        bufp->chgBit(oldp+24,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+25,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                               & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+26,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a));
        bufp->chgBit(oldp+27,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a));
        bufp->chgBit(oldp+28,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a));
        bufp->chgBit(oldp+29,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1));
        bufp->chgBit(oldp+30,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2));
        bufp->chgBit(oldp+31,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3));
        bufp->chgCData(oldp+32,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+33,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))));
        bufp->chgBit(oldp+34,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+35,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+36,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2));
        bufp->chgBit(oldp+37,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                               & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+39,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a));
        bufp->chgBit(oldp+40,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a));
        bufp->chgBit(oldp+41,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a));
        bufp->chgBit(oldp+42,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1));
        bufp->chgBit(oldp+43,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2));
        bufp->chgBit(oldp+44,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3));
        bufp->chgCData(oldp+45,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+46,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+49,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2));
        bufp->chgBit(oldp+50,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+51,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                               & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+52,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a));
        bufp->chgBit(oldp+53,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a));
        bufp->chgBit(oldp+54,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a));
        bufp->chgBit(oldp+55,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1));
        bufp->chgBit(oldp+56,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2));
        bufp->chgBit(oldp+57,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3));
        bufp->chgCData(oldp+58,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+59,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
        bufp->chgBit(oldp+61,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
        bufp->chgBit(oldp+62,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2));
        bufp->chgBit(oldp+63,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
    }
    bufp->chgBit(oldp+64,(vlSelf->clk));
    bufp->chgBit(oldp+65,(vlSelf->rst));
    bufp->chgSData(oldp+66,(vlSelf->alt),16);
    bufp->chgSData(oldp+67,(vlSelf->vel),16);
    bufp->chgBit(oldp+68,(vlSelf->land));
    bufp->chgBit(oldp+69,(vlSelf->crash));
    bufp->chgBit(oldp+70,(vlSelf->wen));
    bufp->chgCData(oldp+71,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->chgCData(oldp+72,((0xfU & ((IData)(vlSelf->vel) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+73,((0xfU & ((IData)(vlSelf->vel) 
                                     >> 8U))),4);
    bufp->chgCData(oldp+74,((0xfU & ((IData)(vlSelf->vel) 
                                     >> 0xcU))),4);
    bufp->chgCData(oldp+75,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))) 
                              << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                          ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->alt) 
                                                         ^ (IData)(vlSelf->vel))))))),4);
    bufp->chgCData(oldp+76,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))) 
                              << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                          ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->alt) 
                                                          >> 4U) 
                                                         ^ 
                                                         (((IData)(vlSelf->vel) 
                                                           >> 4U) 
                                                          ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgCData(oldp+77,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))) 
                              << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                          ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->alt) 
                                                          >> 8U) 
                                                         ^ 
                                                         (((IData)(vlSelf->vel) 
                                                           >> 8U) 
                                                          ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgCData(oldp+78,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                   & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                      | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                              << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                          ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->alt) 
                                                          >> 0xcU) 
                                                         ^ 
                                                         (((IData)(vlSelf->vel) 
                                                           >> 0xcU) 
                                                          ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgCData(oldp+79,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->chgCData(oldp+80,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                              << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->alt) 
                                                         ^ (IData)(vlSelf->vel))))))),4);
    bufp->chgBit(oldp+81,((1U & ((((IData)(vlSelf->alt) 
                                   & (IData)(vlSelf->vel)) 
                                  >> 3U) | ((((IData)(vlSelf->vel) 
                                              | (IData)(vlSelf->alt)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3))))));
    bufp->chgBit(oldp+82,((1U & ((IData)(vlSelf->alt) 
                                 ^ (IData)(vlSelf->vel)))));
    bufp->chgBit(oldp+83,((1U & (IData)(vlSelf->alt))));
    bufp->chgBit(oldp+84,((1U & (IData)(vlSelf->vel))));
    bufp->chgBit(oldp+85,((1U & ((IData)(vlSelf->alt) 
                                 >> 1U))));
    bufp->chgBit(oldp+86,((1U & ((IData)(vlSelf->vel) 
                                 >> 1U))));
    bufp->chgBit(oldp+87,((1U & ((IData)(vlSelf->alt) 
                                 >> 2U))));
    bufp->chgBit(oldp+88,((1U & ((IData)(vlSelf->vel) 
                                 >> 2U))));
    bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->alt) 
                                 >> 3U))));
    bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->vel) 
                                 >> 3U))));
    bufp->chgCData(oldp+91,((0xfU & ((IData)(vlSelf->alt) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+92,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                              << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                                    << 1U) 
                                                   | (1U 
                                                      & (((IData)(vlSelf->alt) 
                                                          >> 4U) 
                                                         ^ 
                                                         (((IData)(vlSelf->vel) 
                                                           >> 4U) 
                                                          ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgBit(oldp+93,((1U & ((((IData)(vlSelf->alt) 
                                   & (IData)(vlSelf->vel)) 
                                  >> 7U) | ((((IData)(vlSelf->vel) 
                                              | (IData)(vlSelf->alt)) 
                                             >> 7U) 
                                            & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3))))));
    bufp->chgBit(oldp+94,((1U & (((IData)(vlSelf->alt) 
                                  >> 4U) ^ (((IData)(vlSelf->vel) 
                                             >> 4U) 
                                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->alt) 
                                 >> 4U))));
    bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->vel) 
                                 >> 4U))));
    bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->alt) 
                                 >> 5U))));
    bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->vel) 
                                 >> 5U))));
    bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->alt) 
                                 >> 6U))));
    bufp->chgBit(oldp+100,((1U & ((IData)(vlSelf->vel) 
                                  >> 6U))));
    bufp->chgBit(oldp+101,((1U & ((IData)(vlSelf->alt) 
                                  >> 7U))));
    bufp->chgBit(oldp+102,((1U & ((IData)(vlSelf->vel) 
                                  >> 7U))));
    bufp->chgCData(oldp+103,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 8U))),4);
    bufp->chgCData(oldp+104,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 8U) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 8U) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgBit(oldp+105,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 0xbU) | ((((IData)(vlSelf->vel) 
                                                 | (IData)(vlSelf->alt)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3))))));
    bufp->chgBit(oldp+106,((1U & (((IData)(vlSelf->alt) 
                                   >> 8U) ^ (((IData)(vlSelf->vel) 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->chgBit(oldp+107,((1U & ((IData)(vlSelf->alt) 
                                  >> 8U))));
    bufp->chgBit(oldp+108,((1U & ((IData)(vlSelf->vel) 
                                  >> 8U))));
    bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->alt) 
                                  >> 9U))));
    bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->vel) 
                                  >> 9U))));
    bufp->chgBit(oldp+111,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+112,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+113,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+114,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xbU))));
    bufp->chgCData(oldp+115,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+116,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 0xcU) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 0xcU) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->chgBit(oldp+117,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 0xfU) | ((((IData)(vlSelf->vel) 
                                                 | (IData)(vlSelf->alt)) 
                                                >> 0xfU) 
                                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3))))));
    bufp->chgBit(oldp+118,((1U & (((IData)(vlSelf->alt) 
                                   >> 0xcU) ^ (((IData)(vlSelf->vel) 
                                                >> 0xcU) 
                                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->chgBit(oldp+119,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+120,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+122,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+123,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+124,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+126,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xfU))));
}

void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_cleanup\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
