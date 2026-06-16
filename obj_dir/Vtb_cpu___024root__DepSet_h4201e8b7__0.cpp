// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf);
VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf);

void Vtb_cpu___024root___eval_initial(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_cpu___024root___eval_initial__TOP(vlSelf);
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 
        = vlSelf->tb_cpu__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       14);
    vlSelf->tb_cpu__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_h605b3eaf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_cpu.clk)", 
                                                       "tb/tb_cpu.sv", 
                                                       16);
    VL_WRITEF("Simulation done!\n");
    VL_FINISH_MT("tb/tb_cpu.sv", 18, "");
}

VL_INLINE_OPT VlCoroutine Vtb_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/tb_cpu.sv", 
                                           5);
        vlSelf->tb_cpu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_cpu__DOT__clk)));
    }
}

void Vtb_cpu___024root___eval_act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_cpu___024root___nba_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__rd1;
    tb_cpu__DOT__DUT__DOT__rd1 = 0;
    CData/*3:0*/ tb_cpu__DOT__DUT__DOT__alu_ctrl;
    tb_cpu__DOT__DUT__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_cpu__DOT__DUT__DOT__alu_b;
    tb_cpu__DOT__DUT__DOT__alu_b = 0;
    CData/*0:0*/ tb_cpu__DOT__DUT__DOT__alu_zero;
    tb_cpu__DOT__DUT__DOT__alu_zero = 0;
    CData/*0:0*/ tb_cpu__DOT__DUT__DOT__alu_src;
    tb_cpu__DOT__DUT__DOT__alu_src = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0;
    __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0;
    __Vdlyvval__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0;
    __Vdlyvset__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 = 0;
    CData/*5:0*/ __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0;
    __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0;
    __Vdlyvval__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0;
    __Vdlyvset__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_cpu__DOT__DUT__DOT__reg_we) 
                     & (0U != (0x1fU & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                        >> 7U)))))) {
        VL_WRITEF("t=%0t | rd=x%0# | wd=0x%08x\n",64,
                  VL_TIME_UNITED_Q(1),-12,5,(0x1fU 
                                             & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                >> 7U)),
                  32,((IData)(vlSelf->tb_cpu__DOT__DUT__DOT__mem_to_reg)
                       ? vlSelf->tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem
                      [(0x3fU & (vlSelf->tb_cpu__DOT__DUT__DOT__alu_result 
                                 >> 2U))] : vlSelf->tb_cpu__DOT__DUT__DOT__alu_result));
    }
    __Vdlyvset__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 = 0U;
    VL_WRITEF("t=%0t | pc=0x%08x | instr=0x%08x\n",
              64,VL_TIME_UNITED_Q(1),-12,32,vlSelf->tb_cpu__DOT__DUT__DOT__pc,
              32,vlSelf->tb_cpu__DOT__DUT__DOT__instr);
    if (((IData)(vlSelf->tb_cpu__DOT__DUT__DOT__reg_we) 
         & (0U != (0x1fU & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                            >> 7U))))) {
        __Vdlyvval__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 
            = ((IData)(vlSelf->tb_cpu__DOT__DUT__DOT__mem_to_reg)
                ? vlSelf->tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem
               [(0x3fU & (vlSelf->tb_cpu__DOT__DUT__DOT__alu_result 
                          >> 2U))] : vlSelf->tb_cpu__DOT__DUT__DOT__alu_result);
        __Vdlyvset__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 = 1U;
        __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0 
            = (0x1fU & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                        >> 7U));
    }
    if (vlSelf->tb_cpu__DOT__DUT__DOT__mem_we) {
        __Vdlyvval__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 
            = vlSelf->tb_cpu__DOT__DUT__DOT__rd2;
        __Vdlyvset__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 = 1U;
        __Vdlyvdim0__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0 
            = (0x3fU & (vlSelf->tb_cpu__DOT__DUT__DOT__alu_result 
                        >> 2U));
    }
    if (__Vdlyvset__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0) {
        vlSelf->tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem[__Vdlyvdim0__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0] 
            = __Vdlyvval__tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem__v0;
    }
    if (__Vdlyvset__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0) {
        vlSelf->tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs[__Vdlyvdim0__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0] 
            = __Vdlyvval__tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs__v0;
    }
    vlSelf->tb_cpu__DOT__DUT__DOT__pc = ((IData)(vlSelf->tb_cpu__DOT__rst)
                                          ? 0U : vlSelf->tb_cpu__DOT__DUT__DOT__pc_next);
    vlSelf->tb_cpu__DOT__DUT__DOT__instr = vlSelf->tb_cpu__DOT__DUT__DOT__IMEM__DOT__mem
        [(0x3fU & (vlSelf->tb_cpu__DOT__DUT__DOT__pc 
                   >> 2U))];
    vlSelf->tb_cpu__DOT__DUT__DOT__mem_to_reg = 0U;
    if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                            if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                                vlSelf->tb_cpu__DOT__DUT__DOT__mem_to_reg = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
    vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
    tb_cpu__DOT__DUT__DOT__alu_ctrl = 0U;
    tb_cpu__DOT__DUT__DOT__rd1 = ((0U == (0x1fU & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                   >> 0xfU)))
                                   ? 0U : vlSelf->tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs
                                  [(0x1fU & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                             >> 0xfU))]);
    tb_cpu__DOT__DUT__DOT__alu_src = 0U;
    vlSelf->tb_cpu__DOT__DUT__DOT__rd2 = ((0U == (0x1fU 
                                                  & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                     >> 0x14U)))
                                           ? 0U : vlSelf->tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs
                                          [(0x1fU & 
                                            (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                             >> 0x14U))]);
    if ((0x40U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
        if ((0x20U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            if ((0x10U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            } else if ((8U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            } else if ((4U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            } else if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                if ((1U & (~ vlSelf->tb_cpu__DOT__DUT__DOT__instr))) {
                    vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                    vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
                }
            } else {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            }
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                            if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                                tb_cpu__DOT__DUT__DOT__alu_ctrl = 1U;
                                tb_cpu__DOT__DUT__DOT__alu_src = 0U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
        }
    } else if ((0x20U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
        if ((0x10U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            if ((8U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            } else if ((4U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            } else if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                if ((1U & (~ vlSelf->tb_cpu__DOT__DUT__DOT__instr))) {
                    vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
                }
            } else {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            }
            vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 
                ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                           >> 3U))) && ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                  >> 2U))) 
                                        && ((1U & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelf->tb_cpu__DOT__DUT__DOT__instr))));
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                        if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                            tb_cpu__DOT__DUT__DOT__alu_ctrl 
                                = ((0x40000000U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                    ? ((0x4000U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                        ? 0U : ((0x2000U 
                                                 & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                                  ? 0U
                                                  : 1U)))
                                    : ((0x4000U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                        ? ((0x2000U 
                                            & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                            ? ((0x1000U 
                                                & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                                ? 2U
                                                : 3U)
                                            : ((0x1000U 
                                                & vlSelf->tb_cpu__DOT__DUT__DOT__instr)
                                                ? 0U
                                                : 4U))
                                        : 0U));
                            tb_cpu__DOT__DUT__DOT__alu_src = 0U;
                        }
                    }
                }
            }
        } else {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 
                ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                           >> 3U))) && ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                  >> 2U))) 
                                        && ((1U & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                   >> 1U)) 
                                            && (1U 
                                                & vlSelf->tb_cpu__DOT__DUT__DOT__instr))));
            if ((8U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            } else if ((4U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            } else if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                if ((1U & (~ vlSelf->tb_cpu__DOT__DUT__DOT__instr))) {
                    vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
                }
            } else {
                vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = 0U;
            }
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                        if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                            tb_cpu__DOT__DUT__DOT__alu_ctrl = 0U;
                            tb_cpu__DOT__DUT__DOT__alu_src = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
        if ((8U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        } else if ((4U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        } else if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            if ((1U & (~ vlSelf->tb_cpu__DOT__DUT__DOT__instr))) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            }
        } else {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        }
        vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = ((1U 
                                                  & (~ 
                                                     (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & vlSelf->tb_cpu__DOT__DUT__DOT__instr))));
        if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                    if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                        tb_cpu__DOT__DUT__DOT__alu_ctrl 
                            = ((0U == (7U & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                             >> 0xcU)))
                                ? 0U : ((7U == (7U 
                                                & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                   >> 0xcU)))
                                         ? 2U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 0U)));
                        tb_cpu__DOT__DUT__DOT__alu_src = 1U;
                    }
                }
            }
        }
    } else {
        if ((8U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        } else if ((4U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        } else if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            if ((1U & (~ vlSelf->tb_cpu__DOT__DUT__DOT__instr))) {
                vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
            }
        } else {
            vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = 0U;
        }
        vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = ((1U 
                                                  & (~ 
                                                     (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                      >> 3U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                          >> 2U))) 
                                                     && ((1U 
                                                          & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                             >> 1U)) 
                                                         && (1U 
                                                             & vlSelf->tb_cpu__DOT__DUT__DOT__instr))));
        if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                    if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                        tb_cpu__DOT__DUT__DOT__alu_ctrl = 0U;
                        tb_cpu__DOT__DUT__DOT__alu_src = 1U;
                    }
                }
            }
        }
    }
    tb_cpu__DOT__DUT__DOT__alu_b = ((IData)(tb_cpu__DOT__DUT__DOT__alu_src)
                                     ? (((- (IData)(
                                                    (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                         >> 0x14U))
                                     : vlSelf->tb_cpu__DOT__DUT__DOT__rd2);
    vlSelf->tb_cpu__DOT__DUT__DOT__alu_result = ((8U 
                                                  & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    (VL_LTS_III(32, tb_cpu__DOT__DUT__DOT__rd1, tb_cpu__DOT__DUT__DOT__alu_b)
                                                      ? 1U
                                                      : 0U))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, tb_cpu__DOT__DUT__DOT__rd1, 
                                                                   (0x1fU 
                                                                    & tb_cpu__DOT__DUT__DOT__alu_b))
                                                     : 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     >> 
                                                     (0x1fU 
                                                      & tb_cpu__DOT__DUT__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     << 
                                                     (0x1fU 
                                                      & tb_cpu__DOT__DUT__DOT__alu_b))
                                                     : 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     ^ tb_cpu__DOT__DUT__DOT__alu_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     | tb_cpu__DOT__DUT__DOT__alu_b)
                                                     : 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     & tb_cpu__DOT__DUT__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu__DOT__DUT__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     - tb_cpu__DOT__DUT__DOT__alu_b)
                                                     : 
                                                    (tb_cpu__DOT__DUT__DOT__rd1 
                                                     + tb_cpu__DOT__DUT__DOT__alu_b)))));
    tb_cpu__DOT__DUT__DOT__alu_zero = (0U == vlSelf->tb_cpu__DOT__DUT__DOT__alu_result);
    vlSelf->tb_cpu__DOT__DUT__DOT__pc_next = ((IData)(4U) 
                                              + vlSelf->tb_cpu__DOT__DUT__DOT__pc);
    if ((0x40U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
        if ((0x20U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
            if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                            if ((1U & vlSelf->tb_cpu__DOT__DUT__DOT__instr)) {
                                if (tb_cpu__DOT__DUT__DOT__alu_zero) {
                                    vlSelf->tb_cpu__DOT__DUT__DOT__pc_next 
                                        = (vlSelf->tb_cpu__DOT__DUT__DOT__pc 
                                           + (((- (IData)(
                                                          (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((0x1000U 
                                                  & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                     >> 0x13U)) 
                                                 | ((0x800U 
                                                     & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->tb_cpu__DOT__DUT__DOT__instr 
                                                             >> 7U)))))));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void Vtb_cpu___024root___eval_nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_cpu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_cpu___024root___timing_resume(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h605b3eaf__0.resume("@(posedge tb_cpu.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_cpu___024root___timing_commit(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h605b3eaf__0.commit("@(posedge tb_cpu.clk)");
    }
}

void Vtb_cpu___024root___eval_triggers__act(Vtb_cpu___024root* vlSelf);

bool Vtb_cpu___024root___eval_phase__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__act(vlSelf);
    Vtb_cpu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_cpu___024root___timing_resume(vlSelf);
        Vtb_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cpu___024root___eval_phase__nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cpu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu___024root___eval(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_cpu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_cpu.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cpu___024root___eval_debug_assertions(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
