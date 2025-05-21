// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vll_display.h for the primary calling header

#ifndef VERILATED_VLL_DISPLAY___024ROOT_H_
#define VERILATED_VLL_DISPLAY___024ROOT_H_  // guard

#include "verilated.h"


class Vll_display__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vll_display___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(land,0,0);
        VL_IN8(crash,0,0);
        VL_IN8(disp_ctrl,3,0);
        VL_OUT8(ss7,7,0);
        VL_OUT8(ss6,7,0);
        VL_OUT8(ss5,7,0);
        VL_OUT8(ss3,7,0);
        VL_OUT8(ss2,7,0);
        VL_OUT8(ss1,7,0);
        VL_OUT8(ss0,7,0);
        VL_OUT8(red,0,0);
        VL_OUT8(green,0,0);
        CData/*3:0*/ ll_display__DOT__current_mode;
        CData/*6:0*/ ll_display__DOT____Vcellout__dec0__out;
        CData/*6:0*/ ll_display__DOT____Vcellout__dec1__out;
        CData/*6:0*/ ll_display__DOT____Vcellout__dec2__out;
        CData/*6:0*/ ll_display__DOT____Vcellout__dec3__out;
        CData/*3:0*/ ll_display__DOT__a__DOT____Vcellout__c0__out;
        CData/*3:0*/ ll_display__DOT__a__DOT____Vcellout__c1__out;
        CData/*3:0*/ ll_display__DOT__a__DOT____Vcellout__c2__out;
        CData/*3:0*/ ll_display__DOT__a__DOT____Vcellout__c3__out;
        CData/*3:0*/ ll_display__DOT__a__DOT__u0__DOT__sum_1;
        CData/*3:0*/ ll_display__DOT__a__DOT__u0__DOT__sum_2;
        CData/*3:0*/ ll_display__DOT__a__DOT__u0__DOT__sum_3;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a;
        CData/*0:0*/ ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(alt,15,0);
        VL_IN16(vel,15,0);
    };
    struct {
        VL_IN16(fuel,15,0);
        VL_IN16(thrust,15,0);
        SData/*15:0*/ ll_display__DOT__display_value;
        SData/*15:0*/ ll_display__DOT__negative_value;
        IData/*27:0*/ ll_display__DOT__out1;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*3:0*/, 4> ll_display__DOT__bcd;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec0__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec1__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec2__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec3__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec4__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec5__DOT__SEG7;
        VlUnpacked<CData/*6:0*/, 16> ll_display__DOT__dec6__DOT__SEG7;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vll_display__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vll_display___024root(Vll_display__Syms* symsp, const char* v__name);
    ~Vll_display___024root();
    VL_UNCOPYABLE(Vll_display___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
