// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


VL_ATTR_COLD void Vll_control___024root__trace_init_sub__TOP__0(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ll_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+69,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"land_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"crash_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"wen_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+129,0,"onground",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"onground_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+131,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,0,"ans",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"ans1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+131,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("c0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+7,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("c3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+67,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+9,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+78,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+80,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+72,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+84,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+86,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+88,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+90,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+81,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+83,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+92,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+96,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+102,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+93,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+106,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+11,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+106,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+112,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+114,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+46,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+39,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+107,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+40,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+41,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"sum_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"carry_orr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"universal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+12,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+118,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+120,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+122,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+124,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+117,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+52,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"sum_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"sum_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sum_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"sum_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"carry_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"carry_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"carry_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+119,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+54,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("add4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vll_control___024root__trace_init_top(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_top\n"); );
    // Body
    Vll_control___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vll_control___024root__trace_register(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vll_control___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vll_control___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vll_control___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vll_control___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+128,(vlSelf->ll_control__DOT__wen_temp));
    bufp->fullBit(oldp+129,(vlSelf->ll_control__DOT__onground));
    bufp->fullBit(oldp+130,(vlSelf->ll_control__DOT__onground_temp));
    bufp->fullBit(oldp+131,(0U));
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ll_control__DOT__land_temp));
    bufp->fullBit(oldp+2,(vlSelf->ll_control__DOT__crash_temp));
    bufp->fullSData(oldp+3,(vlSelf->ll_control__DOT__sum),16);
    bufp->fullSData(oldp+4,((((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c3__out) 
                              << 0xcU) | (((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c2__out) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c1__out) 
                                            << 4U) 
                                           | (IData)(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c0__out))))),16);
    bufp->fullCData(oldp+5,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c0__out),4);
    bufp->fullCData(oldp+6,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c1__out),4);
    bufp->fullCData(oldp+7,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c2__out),4);
    bufp->fullCData(oldp+8,(vlSelf->ll_control__DOT__u0__DOT____Vcellout__c3__out),4);
    bufp->fullBit(oldp+9,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+10,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+11,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+12,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                            & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+14,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+15,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+16,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+17,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+18,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+19,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3));
    bufp->fullCData(oldp+20,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+21,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+23,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+24,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+25,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                            & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+27,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+28,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+29,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+30,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+31,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+32,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3));
    bufp->fullCData(oldp+33,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+37,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+38,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                            & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+40,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+41,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+42,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+43,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+44,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+45,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3));
    bufp->fullCData(oldp+46,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+50,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+51,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+52,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                            & (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+53,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a));
    bufp->fullBit(oldp+54,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a));
    bufp->fullBit(oldp+55,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a));
    bufp->fullBit(oldp+56,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_1));
    bufp->fullBit(oldp+57,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_2));
    bufp->fullBit(oldp+58,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3));
    bufp->fullCData(oldp+59,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                   | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))))));
    bufp->fullBit(oldp+63,(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2));
    bufp->fullBit(oldp+64,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                               & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))));
    bufp->fullBit(oldp+65,(vlSelf->clk));
    bufp->fullBit(oldp+66,(vlSelf->rst));
    bufp->fullSData(oldp+67,(vlSelf->alt),16);
    bufp->fullSData(oldp+68,(vlSelf->vel),16);
    bufp->fullBit(oldp+69,(vlSelf->land));
    bufp->fullBit(oldp+70,(vlSelf->crash));
    bufp->fullBit(oldp+71,(vlSelf->wen));
    bufp->fullCData(oldp+72,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->fullCData(oldp+73,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+74,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 8U))),4);
    bufp->fullCData(oldp+75,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 0xcU))),4);
    bufp->fullCData(oldp+76,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                    & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT__carry_2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->alt) 
                                                 ^ (IData)(vlSelf->vel))))))),4);
    bufp->fullCData(oldp+77,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                    & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT__carry_2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 4U) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 4U) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullCData(oldp+78,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                    & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT__carry_2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 8U) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 8U) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullCData(oldp+79,(((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                    & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                       | (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT__carry_2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__b)) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 0xcU) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 0xcU) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullCData(oldp+80,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->fullCData(oldp+81,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add4__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add3__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__a) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->alt) 
                                                 ^ (IData)(vlSelf->vel))))))),4);
    bufp->fullBit(oldp+82,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 3U) | ((((IData)(vlSelf->vel) 
                                               | (IData)(vlSelf->alt)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u0__DOT__carry_3))))));
    bufp->fullBit(oldp+83,((1U & ((IData)(vlSelf->alt) 
                                  ^ (IData)(vlSelf->vel)))));
    bufp->fullBit(oldp+84,((1U & (IData)(vlSelf->alt))));
    bufp->fullBit(oldp+85,((1U & (IData)(vlSelf->vel))));
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->alt) 
                                  >> 1U))));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->vel) 
                                  >> 1U))));
    bufp->fullBit(oldp+88,((1U & ((IData)(vlSelf->alt) 
                                  >> 2U))));
    bufp->fullBit(oldp+89,((1U & ((IData)(vlSelf->vel) 
                                  >> 2U))));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->alt) 
                                  >> 3U))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->vel) 
                                  >> 3U))));
    bufp->fullCData(oldp+92,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+93,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add4__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add3__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__a) 
                                           << 1U) | 
                                          (1U & (((IData)(vlSelf->alt) 
                                                  >> 4U) 
                                                 ^ 
                                                 (((IData)(vlSelf->vel) 
                                                   >> 4U) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullBit(oldp+94,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 7U) | ((((IData)(vlSelf->vel) 
                                               | (IData)(vlSelf->alt)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u0__DOT__carry_3))))));
    bufp->fullBit(oldp+95,((1U & (((IData)(vlSelf->alt) 
                                   >> 4U) ^ (((IData)(vlSelf->vel) 
                                              >> 4U) 
                                             ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u0__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelf->alt) 
                                  >> 4U))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->vel) 
                                  >> 4U))));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->alt) 
                                  >> 5U))));
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelf->vel) 
                                  >> 5U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelf->alt) 
                                   >> 6U))));
    bufp->fullBit(oldp+101,((1U & ((IData)(vlSelf->vel) 
                                   >> 6U))));
    bufp->fullBit(oldp+102,((1U & ((IData)(vlSelf->alt) 
                                   >> 7U))));
    bufp->fullBit(oldp+103,((1U & ((IData)(vlSelf->vel) 
                                   >> 7U))));
    bufp->fullCData(oldp+104,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+105,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              (((IData)(vlSelf->alt) 
                                                >> 8U) 
                                               ^ (((IData)(vlSelf->vel) 
                                                   >> 8U) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullBit(oldp+106,((1U & ((((IData)(vlSelf->alt) 
                                     & (IData)(vlSelf->vel)) 
                                    >> 0xbU) | ((((IData)(vlSelf->vel) 
                                                  | (IData)(vlSelf->alt)) 
                                                 >> 0xbU) 
                                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u0__DOT__carry_3))))));
    bufp->fullBit(oldp+107,((1U & (((IData)(vlSelf->alt) 
                                    >> 8U) ^ (((IData)(vlSelf->vel) 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u1__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->fullBit(oldp+108,((1U & ((IData)(vlSelf->alt) 
                                   >> 8U))));
    bufp->fullBit(oldp+109,((1U & ((IData)(vlSelf->vel) 
                                   >> 8U))));
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSelf->alt) 
                                   >> 9U))));
    bufp->fullBit(oldp+111,((1U & ((IData)(vlSelf->vel) 
                                   >> 9U))));
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+113,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+116,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+117,((((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add4__a) 
                                << 3U) | (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add3__a) 
                                           << 2U) | 
                                          (((IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u1__DOT____Vcellinp__add2__a) 
                                            << 1U) 
                                           | (1U & 
                                              (((IData)(vlSelf->alt) 
                                                >> 0xcU) 
                                               ^ (((IData)(vlSelf->vel) 
                                                   >> 0xcU) 
                                                  ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b)))))))),4);
    bufp->fullBit(oldp+118,((1U & ((((IData)(vlSelf->alt) 
                                     & (IData)(vlSelf->vel)) 
                                    >> 0xfU) | ((((IData)(vlSelf->vel) 
                                                  | (IData)(vlSelf->alt)) 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u3__DOT__u0__DOT__carry_3))))));
    bufp->fullBit(oldp+119,((1U & (((IData)(vlSelf->alt) 
                                    >> 0xcU) ^ (((IData)(vlSelf->vel) 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->ll_control__DOT__u0__DOT__u0__DOT__u2__DOT__u1__DOT____Vcellinp__add2__b))))));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+121,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+123,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+125,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xfU))));
}
