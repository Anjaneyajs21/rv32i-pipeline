// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cpu.h for the primary calling header

#ifndef VERILATED_VTB_CPU___024ROOT_H_
#define VERILATED_VTB_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cpu__DOT__clk;
    CData/*0:0*/ tb_cpu__DOT__rst;
    CData/*0:0*/ tb_cpu__DOT__DUT__DOT__reg_we;
    CData/*0:0*/ tb_cpu__DOT__DUT__DOT__mem_we;
    CData/*0:0*/ tb_cpu__DOT__DUT__DOT__mem_to_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__pc;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__pc_next;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__instr;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__rd2;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__alu_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 64> tb_cpu__DOT__DUT__DOT__IMEM__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs;
    VlUnpacked<IData/*31:0*/, 64> tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h605b3eaf__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cpu___024root(Vtb_cpu__Syms* symsp, const char* v__name);
    ~Vtb_cpu___024root();
    VL_UNCOPYABLE(Vtb_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
