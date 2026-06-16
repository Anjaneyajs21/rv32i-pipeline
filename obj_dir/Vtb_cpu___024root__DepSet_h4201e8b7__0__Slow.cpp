// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu.h for the primary calling header

#include "Vtb_cpu__pch.h"
#include "Vtb_cpu___024root.h"

VL_ATTR_COLD void Vtb_cpu___024root___eval_static(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_initial__TOP(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->tb_cpu__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x2f70726fU;
    __Vtemp_1[3U] = 0x7377U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->tb_cpu__DOT__DUT__DOT__IMEM__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs[0U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_final(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_cpu___024root___eval_settle(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_cpu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___stl_sequent__TOP__0(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___stl_sequent__TOP__0\n"); );
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
    // Body
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

VL_ATTR_COLD void Vtb_cpu___024root___eval_stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_cpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_cpu___024root___eval_triggers__stl(Vtb_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cpu___024root___eval_phase__stl(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__act(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu___024root___dump_triggers__nba(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_cpu.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cpu___024root___ctor_var_reset(Vtb_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__DUT__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__DUT__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__DUT__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__DUT__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__DUT__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__DUT__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_cpu__DOT__DUT__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_cpu__DOT__DUT__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_cpu__DOT__DUT__DOT__IMEM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_cpu__DOT__DUT__DOT__REGFILE__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_cpu__DOT__DUT__DOT__DMEM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_cpu__DOT__clk__0 = VL_RAND_RESET_I(1);
}
