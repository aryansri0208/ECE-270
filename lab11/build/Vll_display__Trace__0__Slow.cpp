// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_display__Syms.h"


VL_ATTR_COLD void Vll_display___024root__trace_init_sub__TOP__0(Vll_display___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"crash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"disp_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+231,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"fuel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+233,0,"thrust",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+234,0,"ss7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"ss6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"ss5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"ss3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"ss2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"ss1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"ss0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+241,0,"red",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"green",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ll_display", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+225,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"land",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"crash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"disp_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+230,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+231,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+232,0,"fuel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+233,0,"thrust",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+234,0,"ss7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"ss6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"ss5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"ss3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"ss2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"ss1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"ss0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+241,0,"red",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"green",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+244,0,"MSG_ALT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+245,0,"MSG_VEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+246,0,"MSG_GAS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+247,0,"MSG_THR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+113,0,"display_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bcd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+248+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+243,0,"current_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+115,0,"out1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+116,0,"negative_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("a", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+113,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"ans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"ans1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("c0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+252,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+126,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+253,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+253,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+134,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+134,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+147,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+136,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+137,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+138,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+139,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+140,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+152,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+121,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+154,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+167,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+155,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+156,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+157,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+158,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+159,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+132,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+174,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+173,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+187,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+175,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+176,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+177,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+178,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+179,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+126,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+133,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+193,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+194,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+197,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+193,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+207,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+195,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+196,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+198,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+199,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+253,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+214,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+122,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+216,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+217,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+218,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+49+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+253,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+128,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+221,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+222,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+81+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dec6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+129,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+223,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("SEG7", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vll_display___024root__trace_init_top(Vll_display___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_init_top\n"); );
    // Body
    Vll_display___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vll_display___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vll_display___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_display___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_display___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vll_display___024root__trace_register(Vll_display___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vll_display___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vll_display___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vll_display___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vll_display___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vll_display___024root__trace_const_0_sub_0(Vll_display___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_display___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_const_0\n"); );
    // Init
    Vll_display___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_display___024root*>(voidSelf);
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_display___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_display___024root__trace_const_0_sub_0(Vll_display___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+244,(0x773878U),24);
    bufp->fullIData(oldp+245,(0x3e7938U),24);
    bufp->fullIData(oldp+246,(0x6f776dU),24);
    bufp->fullIData(oldp+247,(0x787650U),24);
    bufp->fullCData(oldp+248,(vlSelf->ll_display__DOT__bcd[0]),4);
    bufp->fullCData(oldp+249,(vlSelf->ll_display__DOT__bcd[1]),4);
    bufp->fullCData(oldp+250,(vlSelf->ll_display__DOT__bcd[2]),4);
    bufp->fullCData(oldp+251,(vlSelf->ll_display__DOT__bcd[3]),4);
    bufp->fullSData(oldp+252,(0U),16);
    bufp->fullBit(oldp+253,(1U));
    bufp->fullCData(oldp+254,(0U),4);
    bufp->fullBit(oldp+255,(0U));
}

VL_ATTR_COLD void Vll_display___024root__trace_full_0_sub_0(Vll_display___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_display___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_full_0\n"); );
    // Init
    Vll_display___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_display___024root*>(voidSelf);
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_display___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_display___024root__trace_full_0_sub_0(Vll_display___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_display__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_display___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+9,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+10,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+11,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+12,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+13,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+14,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+15,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+16,(vlSelf->ll_display__DOT__dec0__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+17,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+18,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+19,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+20,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+21,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+22,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+23,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+24,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+25,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+26,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+27,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+28,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+29,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+30,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+31,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+32,(vlSelf->ll_display__DOT__dec1__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+33,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+34,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+35,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+36,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+37,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+38,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+39,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+40,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+41,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+42,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+43,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+44,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+45,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+46,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+47,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+48,(vlSelf->ll_display__DOT__dec2__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+49,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+50,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+51,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+52,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+53,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+54,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+55,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+56,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+57,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+58,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+59,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+60,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+61,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+62,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+63,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+64,(vlSelf->ll_display__DOT__dec3__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+65,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+66,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+67,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+68,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+69,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+70,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+71,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+72,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+73,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+74,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+75,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+76,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+77,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+78,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+79,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+80,(vlSelf->ll_display__DOT__dec4__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+81,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+82,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+83,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+84,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+85,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+86,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+87,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+88,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+89,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+90,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+91,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+92,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+93,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+94,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+95,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+96,(vlSelf->ll_display__DOT__dec5__DOT__SEG7[15]),7);
    bufp->fullCData(oldp+97,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[0]),7);
    bufp->fullCData(oldp+98,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[1]),7);
    bufp->fullCData(oldp+99,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[2]),7);
    bufp->fullCData(oldp+100,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[3]),7);
    bufp->fullCData(oldp+101,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[4]),7);
    bufp->fullCData(oldp+102,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[5]),7);
    bufp->fullCData(oldp+103,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[6]),7);
    bufp->fullCData(oldp+104,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[7]),7);
    bufp->fullCData(oldp+105,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[8]),7);
    bufp->fullCData(oldp+106,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[9]),7);
    bufp->fullCData(oldp+107,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[10]),7);
    bufp->fullCData(oldp+108,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[11]),7);
    bufp->fullCData(oldp+109,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[12]),7);
    bufp->fullCData(oldp+110,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[13]),7);
    bufp->fullCData(oldp+111,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[14]),7);
    bufp->fullCData(oldp+112,(vlSelf->ll_display__DOT__dec6__DOT__SEG7[15]),7);
    bufp->fullSData(oldp+113,(vlSelf->ll_display__DOT__display_value),16);
    bufp->fullIData(oldp+114,((((IData)(vlSelf->ll_display__DOT____Vcellout__dec3__out) 
                                << 0x15U) | (((IData)(vlSelf->ll_display__DOT____Vcellout__dec2__out) 
                                              << 0xeU) 
                                             | (((IData)(vlSelf->ll_display__DOT____Vcellout__dec1__out) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ll_display__DOT____Vcellout__dec0__out))))),28);
    bufp->fullIData(oldp+115,(vlSelf->ll_display__DOT__out1),28);
    bufp->fullSData(oldp+116,(vlSelf->ll_display__DOT__negative_value),16);
    bufp->fullSData(oldp+117,((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                << 0xcU) | (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                                << 4U) 
                                               | (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))))),16);
    bufp->fullCData(oldp+118,((0xfU & (IData)(vlSelf->ll_display__DOT__display_value))),4);
    bufp->fullCData(oldp+119,(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out),4);
    bufp->fullCData(oldp+120,((0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+121,(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out),4);
    bufp->fullCData(oldp+122,((0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+123,(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out),4);
    bufp->fullCData(oldp+124,((0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+125,(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out),4);
    bufp->fullBit(oldp+126,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullCData(oldp+127,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1),4);
    bufp->fullCData(oldp+128,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2),4);
    bufp->fullCData(oldp+129,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3),4);
    bufp->fullCData(oldp+130,(((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                 ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                     & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                    | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                        | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                       & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                                << 3U) | ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                            ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                               ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                               ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))))))),4);
    bufp->fullBit(oldp+131,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+132,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+133,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullCData(oldp+134,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))))))),4);
    bufp->fullBit(oldp+135,((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                              >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3))));
    bufp->fullBit(oldp+136,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                             & (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+137,((1U & (~ (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out)))));
    bufp->fullBit(oldp+138,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+139,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+140,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+141,((1U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out))));
    bufp->fullBit(oldp+142,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+143,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3));
    bufp->fullBit(oldp+144,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+145,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                                   >> 2U))));
    bufp->fullBit(oldp+146,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c0__out) 
                                   >> 3U))));
    bufp->fullCData(oldp+147,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                << 2U) | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                          << 1U))),4);
    bufp->fullBit(oldp+148,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+149,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                             ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+150,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+151,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+152,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                              & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                             | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
    bufp->fullCData(oldp+153,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                               ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))))))),4);
    bufp->fullBit(oldp+154,((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                              >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3))));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                             & (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+156,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)))));
    bufp->fullBit(oldp+157,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+158,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+159,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+160,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+161,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+162,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3));
    bufp->fullBit(oldp+163,((1U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out))));
    bufp->fullBit(oldp+164,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+165,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                   >> 2U))));
    bufp->fullBit(oldp+166,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c1__out) 
                                   >> 3U))));
    bufp->fullCData(oldp+167,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                << 2U) | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                          << 1U))),4);
    bufp->fullBit(oldp+168,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+169,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                             ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+170,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+171,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+172,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                              & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                             | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
    bufp->fullCData(oldp+173,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                               ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))))))),4);
    bufp->fullBit(oldp+174,((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                              >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3))));
    bufp->fullBit(oldp+175,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                             & (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+176,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)))));
    bufp->fullBit(oldp+177,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+178,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+179,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+180,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+181,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+182,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3));
    bufp->fullBit(oldp+183,((1U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out))));
    bufp->fullBit(oldp+184,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+185,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                   >> 2U))));
    bufp->fullBit(oldp+186,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c2__out) 
                                   >> 3U))));
    bufp->fullCData(oldp+187,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                << 2U) | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                          << 1U))),4);
    bufp->fullBit(oldp+188,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+189,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                             ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+190,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+191,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+192,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                              & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                             | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
    bufp->fullCData(oldp+193,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                               ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))))))),4);
    bufp->fullBit(oldp+194,((((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                              >> 3U) & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3))));
    bufp->fullBit(oldp+195,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                             & (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+196,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                   ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)))));
    bufp->fullBit(oldp+197,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+198,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+199,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+200,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+201,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+202,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3));
    bufp->fullBit(oldp+203,((1U & (IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out))));
    bufp->fullBit(oldp+204,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                   >> 1U))));
    bufp->fullBit(oldp+205,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                   >> 2U))));
    bufp->fullBit(oldp+206,((1U & ((IData)(vlSelf->ll_display__DOT__a__DOT____Vcellout__c3__out) 
                                   >> 3U))));
    bufp->fullCData(oldp+207,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                << 2U) | ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                          << 1U))),4);
    bufp->fullBit(oldp+208,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                             ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+209,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                             ^ ((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                ^ (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+210,(((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                             ^ (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                 & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                    | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                   & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+211,(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+212,((((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                              & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                             | (((IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                 | (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                & (IData)(vlSelf->ll_display__DOT__a__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
    bufp->fullCData(oldp+213,(vlSelf->ll_display__DOT____Vcellout__dec0__out),7);
    bufp->fullBit(oldp+214,((0xaU <= (IData)(vlSelf->ll_display__DOT__display_value))));
    bufp->fullCData(oldp+215,(vlSelf->ll_display__DOT____Vcellout__dec1__out),7);
    bufp->fullBit(oldp+216,((0x64U <= (IData)(vlSelf->ll_display__DOT__display_value))));
    bufp->fullCData(oldp+217,(vlSelf->ll_display__DOT____Vcellout__dec2__out),7);
    bufp->fullBit(oldp+218,((0U != (0xfU & ((IData)(vlSelf->ll_display__DOT__display_value) 
                                            >> 0xcU)))));
    bufp->fullCData(oldp+219,(vlSelf->ll_display__DOT____Vcellout__dec3__out),7);
    bufp->fullCData(oldp+220,(vlSelf->ll_display__DOT__dec4__DOT__SEG7
                              [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_1]),7);
    bufp->fullBit(oldp+221,((0xaU <= (IData)(vlSelf->ll_display__DOT__negative_value))));
    bufp->fullCData(oldp+222,(((0xaU <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                ? vlSelf->ll_display__DOT__dec5__DOT__SEG7
                               [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_2]
                                : 0U)),7);
    bufp->fullBit(oldp+223,((0x64U <= (IData)(vlSelf->ll_display__DOT__negative_value))));
    bufp->fullCData(oldp+224,(((0x64U <= (IData)(vlSelf->ll_display__DOT__negative_value))
                                ? vlSelf->ll_display__DOT__dec6__DOT__SEG7
                               [vlSelf->ll_display__DOT__a__DOT__u0__DOT__sum_3]
                                : 0U)),7);
    bufp->fullBit(oldp+225,(vlSelf->clk));
    bufp->fullBit(oldp+226,(vlSelf->rst));
    bufp->fullBit(oldp+227,(vlSelf->land));
    bufp->fullBit(oldp+228,(vlSelf->crash));
    bufp->fullCData(oldp+229,(vlSelf->disp_ctrl),4);
    bufp->fullSData(oldp+230,(vlSelf->alt),16);
    bufp->fullSData(oldp+231,(vlSelf->vel),16);
    bufp->fullSData(oldp+232,(vlSelf->fuel),16);
    bufp->fullSData(oldp+233,(vlSelf->thrust),16);
    bufp->fullCData(oldp+234,(vlSelf->ss7),8);
    bufp->fullCData(oldp+235,(vlSelf->ss6),8);
    bufp->fullCData(oldp+236,(vlSelf->ss5),8);
    bufp->fullCData(oldp+237,(vlSelf->ss3),8);
    bufp->fullCData(oldp+238,(vlSelf->ss2),8);
    bufp->fullCData(oldp+239,(vlSelf->ss1),8);
    bufp->fullCData(oldp+240,(vlSelf->ss0),8);
    bufp->fullBit(oldp+241,(vlSelf->red));
    bufp->fullBit(oldp+242,(vlSelf->green));
    bufp->fullCData(oldp+243,(vlSelf->ll_display__DOT__current_mode),4);
}
