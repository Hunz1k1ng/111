// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyriscv.h for the primary calling header

#include "Vtinyriscv___024root.h"
#include "Vtinyriscv__Syms.h"

//==========


void Vtinyriscv___024root___ctor_var_reset(Vtinyriscv___024root* vlSelf);

Vtinyriscv___024root::Vtinyriscv___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtinyriscv___024root___ctor_var_reset(this);
}

void Vtinyriscv___024root::__Vconfigure(Vtinyriscv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtinyriscv___024root::~Vtinyriscv___024root() {
}

void Vtinyriscv___024root___settle__TOP__2(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->tinyriscv__DOT__u_div__DOT__op_div = (4U 
                                                  == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__op_divu = (5U 
                                                   == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__op_rem = (6U 
                                                  == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__dividend_invert 
        = (- vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r);
    vlSelf->tinyriscv__DOT__u_div__DOT__divisor_invert 
        = (- vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    vlSelf->jtag_reg_data_o = ((0U == (IData)(vlSelf->jtag_reg_addr_i))
                                ? 0U : vlSelf->tinyriscv__DOT__u_regs__DOT__regs
                               [vlSelf->jtag_reg_addr_i]);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res 
        = (vlSelf->tinyriscv__DOT__u_div__DOT__minuend 
           - vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor 
        = (vlSelf->tinyriscv__DOT__u_div__DOT__minuend 
           >= vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res 
        = (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r 
           + vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2 = 
        (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
         == vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res 
        = (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
           + vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed 
        = VL_GTES_III(1,32,32, vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r, vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned 
        = (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
           >= vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r);
    vlSelf->tinyriscv__DOT__ex_csr_we_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                           & (IData)(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r));
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 0U;
    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                if ((0U == (7U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                  >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                                } else if ((1U == (7U 
                                                   & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                                } else if ((2U == (7U 
                                                   & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                             >> 4U)))) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                              >> 2U)))) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xdU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                                }
                            } else if ((0x2000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                                }
                            } else {
                                vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
            }
        } else {
            vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = 0U;
    }
    vlSelf->tinyriscv__DOT__ex_csr_wdata_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                    if ((0x2000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                        vlSelf->tinyriscv__DOT__ex_csr_wdata_o 
                                            = ((0x1000U 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                ? (
                                                   (~ 
                                                    (0x1fU 
                                                     & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                        >> 0xfU))) 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r)
                                                : (
                                                   (0x1fU 
                                                    & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                       >> 0xfU)) 
                                                   | vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r));
                                    } else if ((0x1000U 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                        vlSelf->tinyriscv__DOT__ex_csr_wdata_o 
                                            = (0x1fU 
                                               & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                  >> 0xfU));
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                    vlSelf->tinyriscv__DOT__ex_csr_wdata_o 
                                        = ((0x1000U 
                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                            ? (vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r 
                                               & (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))
                                            : (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                               | vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r));
                                } else if ((0x1000U 
                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                                    vlSelf->tinyriscv__DOT__ex_csr_wdata_o 
                                        = vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index 
        = (3U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                 + (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                    >> 7U)));
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
            }
        } else {
            vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = (IData)(
                                                            ((0x23U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                             & ((0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                     >> 0xcU))) 
                                                                | ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                        >> 0xcU))) 
                                                                   | (2U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                          >> 0xcU)))))));
    }
    vlSelf->tinyriscv__DOT__ex_div_start_o = (1U & 
                                              ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                               & (((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                       >> 0x19U)))
                                                   ? 
                                                  (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0xeU)
                                                   : (IData)(vlSelf->tinyriscv__DOT__div_busy_o))));
    vlSelf->tinyriscv__DOT__ex_reg_we_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                           & ((IData)(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r) 
                                              | ((~ 
                                                  ((0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                   & (1U 
                                                      == 
                                                      (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                       >> 0x19U)))) 
                                                 & ((~ (IData)(vlSelf->tinyriscv__DOT__div_busy_o)) 
                                                    & (IData)(vlSelf->tinyriscv__DOT__div_ready_o)))));
    vlSelf->tinyriscv__DOT__ex_reg_waddr_o = ((IData)(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r) 
                                              | (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                  & (1U 
                                                     == 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0x19U)))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                    ? (IData)(vlSelf->tinyriscv__DOT__div_reg_waddr_o)
                                                    : 0U))));
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index 
        = (3U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                 + (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                    >> 0x14U)));
    vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp = ((QData)((IData)(
                                                                   (((0x33U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                                     & (1U 
                                                                        == 
                                                                        (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                         >> 0x19U)))
                                                                     ? 
                                                                    ((0x4000U 
                                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                      ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                       ? 
                                                                      ((0x1000U 
                                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                        ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r
                                                                        : 
                                                                       ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                                         >> 0x1fU)
                                                                         ? 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))
                                                                         : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))
                                                                       : 
                                                                      ((0x1000U 
                                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                        ? 
                                                                       ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                                         >> 0x1fU)
                                                                         ? 
                                                                        ((IData)(1U) 
                                                                         + 
                                                                         (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))
                                                                         : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r)
                                                                        : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r)))
                                                                     : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))) 
                                                   * (QData)((IData)(
                                                                     (((0x33U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                                       & (1U 
                                                                          == 
                                                                          (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                           >> 0x19U)))
                                                                       ? 
                                                                      ((0x4000U 
                                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                        ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                                                        : 
                                                                       ((0x2000U 
                                                                         & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                         ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                                                         : 
                                                                        ((0x1000U 
                                                                          & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                                          ? 
                                                                         ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                                           >> 0x1fU)
                                                                           ? 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))
                                                                           : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)
                                                                          : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)))
                                                                       : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))));
    vlSelf->rib_pc_addr_o = vlSelf->tinyriscv__DOT__pc_pc_o;
    vlSelf->tinyriscv__DOT__id_csr_we_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_csr_we_o 
                                    = (1U & ((0x4000U 
                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                              ? (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))
                                              : (IData)(
                                                        (0U 
                                                         != 
                                                         (0x3000U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tinyriscv__DOT__id_csr_waddr_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_csr_waddr_o 
                                    = (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                       >> 0x14U);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tinyriscv__DOT__id_op2_jump_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 4U)))) {
                if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_op2_jump_o 
                                    = (((- (IData)(
                                                   (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x1fU))) 
                                        << 0x14U) | 
                                       ((0xff000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r) 
                                        | ((0x800U 
                                            & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                 >> 0x14U)))));
                            }
                        }
                    }
                } else if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op2_jump_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x14U));
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op2_jump_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                         >> 7U)))));
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op2_jump_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                         >> 7U)))));
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                              >> 2U)))) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ ((0U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                  >> 0x19U)) 
                                          | (0x20U 
                                             == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                 >> 0x19U)))))) {
                                if ((1U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0x19U))) {
                                    if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                        vlSelf->tinyriscv__DOT__id_op2_jump_o = 4U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                         >> 4U)))) {
        if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__id_op2_jump_o = 4U;
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        vlSelf->tinyriscv__DOT__id_reg_we_o = (1U & 
                                               ((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                    ? (IData)(
                                                              ((3U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) 
                                                               & ((0x4000U 
                                                                   & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                                   ? (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3000U 
                                                                               & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))
                                                                   : (IData)(
                                                                             (0U 
                                                                              != 
                                                                              (0x3000U 
                                                                               & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r))))))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                     ? (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))
                                                     : (IData)(
                                                               (7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))))));
        vlSelf->tinyriscv__DOT__id_reg_waddr_o = (0x1fU 
                                                  & ((0x20U 
                                                      & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((0x4000U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x2000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 7U)
                                                             : 
                                                            ((0x1000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 7U)
                                                              : 0U))
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 7U)
                                                             : 
                                                            ((0x1000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 7U)
                                                              : 0U)))
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U)))
                                                      : 0U));
    } else {
        vlSelf->tinyriscv__DOT__id_reg_we_o = (1U & 
                                               ((0x20U 
                                                 & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                 ? (IData)(
                                                           ((0x10U 
                                                             == 
                                                             (0x18U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) 
                                                            & ((4U 
                                                                & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                                ? 
                                                               ((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                 >> 1U) 
                                                                & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                                : 
                                                               ((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                 >> 1U) 
                                                                & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                   & (((0U 
                                                                        == 
                                                                        (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                         >> 0x19U)) 
                                                                       | (0x20U 
                                                                          == 
                                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                           >> 0x19U))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                           >> 0x19U)) 
                                                                         & (~ 
                                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                             >> 0xeU)))))))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                  ? 
                                                 ((~ 
                                                   (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    >> 3U)) 
                                                  & ((4U 
                                                      & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                       >> 1U) 
                                                      & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                      : 
                                                     ((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                       >> 1U) 
                                                      & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))
                                                  : (IData)(
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) 
                                                             & ((0x4000U 
                                                                 & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                                 ? 
                                                                (~ 
                                                                 (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                  >> 0xdU))
                                                                 : (IData)(
                                                                           (0x3000U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)))))))));
        vlSelf->tinyriscv__DOT__id_reg_waddr_o = (0x1fU 
                                                  & ((0x20U 
                                                      & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0x10U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (((0U 
                                                             == 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0x19U)) 
                                                            | (0x20U 
                                                               == 
                                                               (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                >> 0x19U)))
                                                            ? 
                                                           (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                            >> 7U)
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0x19U))
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 7U)
                                                             : 0U))
                                                           : 0U)
                                                          : 0U)))
                                                       : 0U)
                                                      : 
                                                     ((0x10U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((8U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                           >> 7U)
                                                           : 0U)
                                                          : 0U)))
                                                       : 
                                                      ((8U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 0U
                                                        : 
                                                       ((4U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((2U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((1U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((0x4000U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x2000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 0U
                                                             : 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 7U))
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            ((0x1000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 0U
                                                              : 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 7U))
                                                             : 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 7U)))
                                                           : 0U)
                                                          : 0U))))));
    }
    vlSelf->tinyriscv__DOT__csr_clint_data_o = ((((0xfffU 
                                                   & vlSelf->tinyriscv__DOT__clint_waddr_o) 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->tinyriscv__DOT__clint_raddr_o)) 
                                                 & (IData)(vlSelf->tinyriscv__DOT__clint_we_o))
                                                 ? vlSelf->tinyriscv__DOT__clint_data_o
                                                 : 
                                                (((((((((0xc00U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->tinyriscv__DOT__clint_raddr_o)) 
                                                        | (0xc80U 
                                                           == 
                                                           (0xfffU 
                                                            & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                       | (0x305U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                      | (0x342U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                     | (0x341U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                    | (0x304U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                   | (0x300U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->tinyriscv__DOT__clint_raddr_o))) 
                                                  | (0x340U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->tinyriscv__DOT__clint_raddr_o)))
                                                  ? 
                                                 ((0xc00U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                   ? (IData)(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle)
                                                   : 
                                                  ((0xc80U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                    ? (IData)(
                                                              (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle 
                                                               >> 0x20U))
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                     ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                      ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause
                                                      : 
                                                     ((0x341U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                       ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                        ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie
                                                        : 
                                                       ((0x300U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->tinyriscv__DOT__clint_raddr_o))
                                                         ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus
                                                         : vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch)))))))
                                                  : 0U));
    vlSelf->tinyriscv__DOT__id_csr_raddr_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_csr_raddr_o 
                                    = (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                       >> 0x14U);
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        vlSelf->tinyriscv__DOT__id_reg2_raddr_o = (0x1fU 
                                                   & ((0x20U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 0U
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0x14U)
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 0U
                                                              : 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0x14U)))
                                                            : 0U)
                                                           : 0U))))
                                                       : 0U));
        vlSelf->tinyriscv__DOT__id_reg1_raddr_o = (0x1fU 
                                                   & ((0x20U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 0U
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xfU)
                                                              : 
                                                             ((0x1000U 
                                                               & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                               ? 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0xfU)
                                                               : 0U)))
                                                            : 0U)
                                                           : 0U)))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                            >> 0xfU)
                                                            : 0U)
                                                           : 0U)
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xfU)
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 0U
                                                              : 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xfU)))
                                                            : 0U)
                                                           : 0U))))
                                                       : 0U));
    } else {
        vlSelf->tinyriscv__DOT__id_reg2_raddr_o = (0x1fU 
                                                   & ((0x20U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           (((0U 
                                                              == 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0x19U)) 
                                                             | (0x20U 
                                                                == 
                                                                (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                 >> 0x19U)))
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0x14U)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0x19U))
                                                              ? 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0x14U)
                                                              : 0U))
                                                            : 0U)
                                                           : 0U)))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                   >> 0xcU))) 
                                                              | (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                     >> 0xcU)))) 
                                                             | (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                    >> 0xcU))))
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0x14U)
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))))
                                                       : 0U));
        vlSelf->tinyriscv__DOT__id_reg1_raddr_o = (0x1fU 
                                                   & ((0x20U 
                                                       & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((0x10U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           (((0U 
                                                              == 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0x19U)) 
                                                             | (0x20U 
                                                                == 
                                                                (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                 >> 0x19U)))
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xfU)
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0x19U))
                                                              ? 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xfU)
                                                              : 0U))
                                                            : 0U)
                                                           : 0U)))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                   >> 0xcU))) 
                                                              | (2U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                     >> 0xcU)))) 
                                                             | (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                                    >> 0xcU))))
                                                             ? 
                                                            (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xfU)
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))))
                                                       : 
                                                      ((0x10U 
                                                        & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                            >> 0xfU)
                                                            : 0U)
                                                           : 0U)))
                                                        : 
                                                       ((8U 
                                                         & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                         ? 0U
                                                         : 
                                                        ((4U 
                                                          & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : 
                                                         ((2U 
                                                           & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                           ? 
                                                          ((1U 
                                                            & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                            ? 
                                                           ((0x4000U 
                                                             & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                             ? 
                                                            ((0x2000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 0U
                                                              : 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xfU))
                                                             : 
                                                            ((0x2000U 
                                                              & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                              ? 
                                                             ((0x1000U 
                                                               & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                                               ? 0U
                                                               : 
                                                              (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                               >> 0xfU))
                                                              : 
                                                             (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xfU)))
                                                            : 0U)
                                                           : 0U))))));
    }
    if (vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor) {
        vlSelf->tinyriscv__DOT__u_div__DOT__div_result_tmp 
            = (1U | (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
                     << 1U));
        vlSelf->tinyriscv__DOT__u_div__DOT__minuend_tmp 
            = (0x7fffffffU & vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res);
    } else {
        vlSelf->tinyriscv__DOT__u_div__DOT__div_result_tmp 
            = (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
               << 1U);
        vlSelf->tinyriscv__DOT__u_div__DOT__minuend_tmp 
            = (0x7fffffffU & vlSelf->tinyriscv__DOT__u_div__DOT__minuend);
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
            }
        } else {
            vlSelf->tinyriscv__DOT__ex_mem_raddr_o = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__ex_mem_raddr_o = ((0x20U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xcU)))
                                                         ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xcU)))
                                                          ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                               >> 0xcU)))
                                                           ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                          ? 0U
                                                          : vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res)
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                           ? 0U
                                                           : vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res)
                                                          : vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res))
                                                        : 0U)
                                                       : 0U)))));
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
            }
        } else {
            vlSelf->tinyriscv__DOT__ex_mem_waddr_o = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__ex_mem_waddr_o = ((0x20U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xcU)))
                                                         ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xcU)))
                                                          ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                               >> 0xcU)))
                                                           ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U);
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr 
                    = ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                        ? ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                            ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                    ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                    : 0U) : 0U) : 0U)
                        : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                            ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                    ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                    : 0U) : 0U) : (
                                                   (2U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    ((0x4000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((- (IData)((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res)
                                                        : 
                                                       ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned))))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((- (IData)((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res)
                                                        : 
                                                       ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed))))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 0U
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2))))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res)
                                                        : 
                                                       ((- (IData)((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2))) 
                                                        & vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res))))
                                                     : 0U)
                                                    : 0U)));
            }
        } else {
            vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr 
            = ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                ? 0U : ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                         ? 0U : ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                  ? ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                      ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                              ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                              : 0U)
                                          : 0U) : 0U)
                                  : 0U)));
    }
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag 
                    = (1U & ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                              ? (IData)((7U == (7U 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)))
                              : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                  ? ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                      >> 1U) & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                  : ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                      >> 1U) & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                & ((0x4000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned)
                                                      : 
                                                     (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned)))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed)
                                                      : 
                                                     (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed))))
                                                    : 
                                                   ((~ 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0xdU)) 
                                                    & ((0x1000U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2))
                                                        : (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2)))))))));
            }
        } else {
            vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag 
            = (IData)((0xfU == (0x3fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)));
    }
    vlSelf->rib_ex_req_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                            & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req));
    if ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
            if ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                if ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                } else if ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                } else if ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) {
                                    vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU)))) {
                                vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                            }
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                    }
                } else {
                    vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
                }
            } else {
                vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
            }
        } else {
            vlSelf->tinyriscv__DOT__ex_mem_wdata_o = 0U;
        }
    } else {
        vlSelf->tinyriscv__DOT__ex_mem_wdata_o = ((0x20U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((0U 
                                                          == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index))
                                                          ? 
                                                         ((0xffffff00U 
                                                           & vlSelf->rib_ex_data_i) 
                                                          | (0xffU 
                                                             & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index))
                                                           ? 
                                                          ((0xffff0000U 
                                                            & vlSelf->rib_ex_data_i) 
                                                           | ((0xff00U 
                                                               & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                                  << 8U)) 
                                                              | (0xffU 
                                                                 & vlSelf->rib_ex_data_i)))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index))
                                                            ? 
                                                           ((0xff000000U 
                                                             & vlSelf->rib_ex_data_i) 
                                                            | ((0xff0000U 
                                                                & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                                   << 0x10U)) 
                                                               | (0xffffU 
                                                                  & vlSelf->rib_ex_data_i)))
                                                            : 
                                                           ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                             << 0x18U) 
                                                            | (0xffffffU 
                                                               & vlSelf->rib_ex_data_i)))))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index))
                                                           ? 
                                                          ((0xffff0000U 
                                                            & vlSelf->rib_ex_data_i) 
                                                           | (0xffffU 
                                                              & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))
                                                           : 
                                                          ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & vlSelf->rib_ex_data_i)))
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                               >> 0xcU)))
                                                           ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U))))
                                                   : 0U);
    }
    vlSelf->tinyriscv__DOT__ex_mem_we_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                           & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we));
    vlSelf->tinyriscv__DOT__u_clint__DOT__int_state 
        = ((IData)(vlSelf->rst) ? (((0x73U == vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r) 
                                    | (0x100073U == vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r))
                                    ? ((IData)(vlSelf->tinyriscv__DOT__ex_div_start_o)
                                        ? 1U : 2U) : 
                                   (((0U != (IData)(vlSelf->tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r)) 
                                     & (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                        >> 3U)) ? 4U
                                     : ((0x30200073U 
                                         == vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                         ? 8U : 1U)))
            : 1U);
    vlSelf->tinyriscv__DOT__u_ex__DOT__reg_wdata = 
        ((0x40U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
          ? ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
              ? ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                  ? ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                      ? 0U : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                               ? 0U : ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                        ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                            ? ((0x4000U 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r
                                                     : 0U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r
                                                     : 0U)))
                                            : 0U) : 0U)))
                  : ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                      ? ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                          ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                              ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                  ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                  : 0U) : 0U) : 0U)
                      : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                          ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                              ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                  ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                  : 0U) : 0U) : 0U)))
              : 0U) : ((0x20U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                        ? ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                            ? ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                ? 0U : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                         ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                             ? ((1U 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                 ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                              ? (((0U 
                                                   == 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x19U)) 
                                                  | (0x20U 
                                                     == 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0x19U)))
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r)
                                                     : 
                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                     | vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     (((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)) 
                                                       & (0xffffffffU 
                                                          >> 
                                                          (0x1fU 
                                                           & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))) 
                                                      | ((- (IData)(
                                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                                     >> 0x1fU))) 
                                                         & (~ 
                                                            (0xffffffffU 
                                                             >> 
                                                             (0x1fU 
                                                              & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)))))
                                                      : 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)))
                                                     : 
                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                     ^ vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    (1U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned))))))
                                                     : 
                                                    (1U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed)))))))
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r))
                                                     : 
                                                    ((0x40000000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                      - vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r)
                                                      : vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x19U))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? (IData)(
                                                                (vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp 
                                                                 >> 0x20U))
                                                      : 
                                                     ((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                       >> 0x1fU)
                                                       ? (IData)(
                                                                 ((1ULL 
                                                                   + 
                                                                   (~ vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp)) 
                                                                  >> 0x20U))
                                                       : (IData)(
                                                                 (vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp 
                                                                  >> 0x20U))))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       ((2U 
                                                         & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                            >> 0x1eU)) 
                                                        | (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                           >> 0x1fU)))
                                                       ? (IData)(
                                                                 (vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp 
                                                                  >> 0x20U))
                                                       : 
                                                      ((3U 
                                                        == 
                                                        ((2U 
                                                          & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                             >> 0x1eU)) 
                                                         | (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                            >> 0x1fU)))
                                                        ? (IData)(
                                                                  (vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp 
                                                                   >> 0x20U))
                                                        : 
                                                       ((2U 
                                                         == 
                                                         ((2U 
                                                           & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                              >> 0x1eU)) 
                                                          | (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
                                                             >> 0x1fU)))
                                                         ? (IData)(
                                                                   ((1ULL 
                                                                     + 
                                                                     (~ vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp)) 
                                                                    >> 0x20U))
                                                         : (IData)(
                                                                   ((1ULL 
                                                                     + 
                                                                     (~ vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp)) 
                                                                    >> 0x20U)))))
                                                      : (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp))))
                                                   : 0U))
                                              : 0U)
                                          : 0U))) : 0U)
                        : ((0x10U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                            ? ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                ? 0U : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                         ? ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                             ? ((1U 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                 ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res
                                                 : 0U)
                                             : 0U) : 
                                        ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? ((1U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                              ? ((0x4000U 
                                                  & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                  ? 
                                                 ((0x2000U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r)
                                                    : 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                    | vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    (((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                       >> 
                                                       (0x1fU 
                                                        & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                           >> 0x14U))) 
                                                      & (0xffffffffU 
                                                         >> 
                                                         (0x1fU 
                                                          & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                             >> 0x14U)))) 
                                                     | ((- (IData)(
                                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                                    >> 0x1fU))) 
                                                        & (~ 
                                                           (0xffffffffU 
                                                            >> 
                                                            (0x1fU 
                                                             & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                >> 0x14U))))))
                                                     : 
                                                    (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                     >> 
                                                     (0x1fU 
                                                      & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                         >> 0x14U))))
                                                    : 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
                                                    ^ vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r)))
                                                  : 
                                                 ((0x2000U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned))))))
                                                    : 
                                                   (1U 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (~ (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed)))))))
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   (vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                        >> 0x14U)))
                                                    : vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res)))
                                              : 0U)
                                          : 0U))) : 
                           ((8U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                             ? 0U : ((4U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                      ? 0U : ((2U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                               ? ((1U 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                       ? 
                                                      (0xffffU 
                                                       & vlSelf->rib_ex_data_i)
                                                       : 
                                                      (vlSelf->rib_ex_data_i 
                                                       >> 0x10U))
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                       ? 
                                                      (0xffU 
                                                       & vlSelf->rib_ex_data_i)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                        ? 
                                                       (0xffU 
                                                        & (vlSelf->rib_ex_data_i 
                                                           >> 8U))
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                         ? 
                                                        (0xffU 
                                                         & (vlSelf->rib_ex_data_i 
                                                            >> 0x10U))
                                                         : 
                                                        (vlSelf->rib_ex_data_i 
                                                         >> 0x18U))))))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 0U
                                                      : vlSelf->rib_ex_data_i)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->rib_ex_data_i 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->rib_ex_data_i))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->rib_ex_data_i 
                                                                    >> 0x1fU))) 
                                                        << 0x10U) 
                                                       | (vlSelf->rib_ex_data_i 
                                                          >> 0x10U)))
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->rib_ex_data_i 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->rib_ex_data_i))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                        ? 
                                                       (((- (IData)(
                                                                    (1U 
                                                                     & (vlSelf->rib_ex_data_i 
                                                                        >> 0xfU)))) 
                                                         << 8U) 
                                                        | (0xffU 
                                                           & (vlSelf->rib_ex_data_i 
                                                              >> 8U)))
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index))
                                                         ? 
                                                        (((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->rib_ex_data_i 
                                                                         >> 0x17U)))) 
                                                          << 8U) 
                                                         | (0xffU 
                                                            & (vlSelf->rib_ex_data_i 
                                                               >> 0x10U)))
                                                         : 
                                                        (((- (IData)(
                                                                     (vlSelf->rib_ex_data_i 
                                                                      >> 0x1fU))) 
                                                          << 8U) 
                                                         | (vlSelf->rib_ex_data_i 
                                                            >> 0x18U))))))))
                                                   : 0U)
                                               : 0U))))));
    vlSelf->tinyriscv__DOT__csr_data_o = ((((0xfffU 
                                             & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r) 
                                            == (0xfffU 
                                                & vlSelf->tinyriscv__DOT__id_csr_raddr_o)) 
                                           & (IData)(vlSelf->tinyriscv__DOT__ex_csr_we_o))
                                           ? vlSelf->tinyriscv__DOT__ex_csr_wdata_o
                                           : ((((((
                                                   (((0xc00U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->tinyriscv__DOT__id_csr_raddr_o)) 
                                                     | (0xc80U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                                    | (0x305U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                                   | (0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                                  | (0x341U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                                 | (0x304U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                                | (0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->tinyriscv__DOT__id_csr_raddr_o))) 
                                               | (0x340U 
                                                  == 
                                                  (0xfffU 
                                                   & vlSelf->tinyriscv__DOT__id_csr_raddr_o)))
                                               ? ((0xc00U 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                   ? (IData)(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle)
                                                   : 
                                                  ((0xc80U 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                    ? (IData)(
                                                              (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle 
                                                               >> 0x20U))
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                     ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec
                                                     : 
                                                    ((0x342U 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                      ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause
                                                      : 
                                                     ((0x341U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                       ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc
                                                       : 
                                                      ((0x304U 
                                                        == 
                                                        (0xfffU 
                                                         & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                        ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie
                                                        : 
                                                       ((0x300U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelf->tinyriscv__DOT__id_csr_raddr_o))
                                                         ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus
                                                         : vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch)))))))
                                               : 0U));
    vlSelf->tinyriscv__DOT__ex_jump_addr_o = ((IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)
                                               ? vlSelf->tinyriscv__DOT__clint_int_addr_o
                                               : (vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr 
                                                  | (((0x33U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                      & (1U 
                                                         == 
                                                         (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                          >> 0x19U)))
                                                      ? 
                                                     ((0x4000U 
                                                       & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                                       ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                                       : 0U)
                                                      : 0U)));
    vlSelf->tinyriscv__DOT__ex_jump_flag_o = (((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag) 
                                               | (IData)(
                                                         ((0x4033U 
                                                           == 
                                                           (0x407fU 
                                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                          & (1U 
                                                             == 
                                                             (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                              >> 0x19U))))) 
                                              | (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o));
    vlSelf->rib_ex_data_o = vlSelf->tinyriscv__DOT__ex_mem_wdata_o;
    vlSelf->rib_ex_we_o = vlSelf->tinyriscv__DOT__ex_mem_we_o;
    vlSelf->rib_ex_addr_o = ((IData)(vlSelf->tinyriscv__DOT__ex_mem_we_o)
                              ? vlSelf->tinyriscv__DOT__ex_mem_waddr_o
                              : vlSelf->tinyriscv__DOT__ex_mem_raddr_o);
    vlSelf->tinyriscv__DOT__ex_reg_wdata_o = (vlSelf->tinyriscv__DOT__u_ex__DOT__reg_wdata 
                                              | (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                  & (1U 
                                                     == 
                                                     (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                      >> 0x19U)))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                    ? vlSelf->tinyriscv__DOT__div_result_o
                                                    : 0U))));
    vlSelf->tinyriscv__DOT__ctrl_hold_flag_o = ((1U 
                                                 & (((IData)(vlSelf->tinyriscv__DOT__ex_jump_flag_o) 
                                                     | ((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag) 
                                                        | (((0x33U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                                            & (1U 
                                                               == 
                                                               (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                                >> 0x19U)))
                                                            ? 
                                                           (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                            >> 0xeU)
                                                            : (IData)(vlSelf->tinyriscv__DOT__div_busy_o)))) 
                                                    | ((1U 
                                                        != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state)) 
                                                       | (1U 
                                                          != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state)))))
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelf->rib_hold_flag_i)
                                                  ? 1U
                                                  : 
                                                 ((IData)(vlSelf->jtag_halt_flag_i)
                                                   ? 3U
                                                   : 0U)));
    vlSelf->tinyriscv__DOT__regs_rdata2_o = ((0U == (IData)(vlSelf->tinyriscv__DOT__id_reg2_raddr_o))
                                              ? 0U : 
                                             ((((IData)(vlSelf->tinyriscv__DOT__id_reg2_raddr_o) 
                                                == (IData)(vlSelf->tinyriscv__DOT__ex_reg_waddr_o)) 
                                               & (IData)(vlSelf->tinyriscv__DOT__ex_reg_we_o))
                                               ? vlSelf->tinyriscv__DOT__ex_reg_wdata_o
                                               : vlSelf->tinyriscv__DOT__u_regs__DOT__regs
                                              [vlSelf->tinyriscv__DOT__id_reg2_raddr_o]));
    vlSelf->tinyriscv__DOT__regs_rdata1_o = ((0U == (IData)(vlSelf->tinyriscv__DOT__id_reg1_raddr_o))
                                              ? 0U : 
                                             ((((IData)(vlSelf->tinyriscv__DOT__id_reg1_raddr_o) 
                                                == (IData)(vlSelf->tinyriscv__DOT__ex_reg_waddr_o)) 
                                               & (IData)(vlSelf->tinyriscv__DOT__ex_reg_we_o))
                                               ? vlSelf->tinyriscv__DOT__ex_reg_wdata_o
                                               : vlSelf->tinyriscv__DOT__u_regs__DOT__regs
                                              [vlSelf->tinyriscv__DOT__id_reg1_raddr_o]));
    vlSelf->tinyriscv__DOT__id_op2_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 4U)))) {
                if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_op2_o = 4U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op2_o = 4U;
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata2_o;
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata2_o;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 3U)))) {
                if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op2_o = 0U;
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if (((0U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                     >> 0x19U)) | (0x20U 
                                                   == 
                                                   (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x19U)))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata2_o;
                        } else if ((1U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                           >> 0x19U))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata2_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 2U)))) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((((0U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0xcU))) 
                              | (2U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) 
                             | (1U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xcU))))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                      >> 7U))));
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                      >> 3U)))) {
            if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__id_op2_o 
                            = (0xfffff000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r);
                    }
                }
            } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__id_op2_o 
                        = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                        >> 0x14U));
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                      >> 2U)))) {
            if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                      >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x14U));
                        }
                    } else if ((0x2000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                      >> 0xcU)))) {
                            vlSelf->tinyriscv__DOT__id_op2_o 
                                = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x14U));
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__id_op2_o 
                            = (((- (IData)((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0x14U));
                    }
                }
            }
        }
    }
    vlSelf->tinyriscv__DOT__id_op1_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 4U)))) {
                if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_op1_o 
                                    = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 3U)))) {
                if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = (0xfffff000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r);
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if (((0U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                     >> 0x19U)) | (0x20U 
                                                   == 
                                                   (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                    >> 0x19U)))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        } else if ((1U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                           >> 0x19U))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 2U)))) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((((0U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0xcU))) 
                              | (2U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                              >> 0xcU)))) 
                             | (1U == (7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xcU))))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                      >> 3U)))) {
            if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__id_op1_o 
                            = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                    }
                }
            } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    vlSelf->tinyriscv__DOT__id_op1_o 
                        = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                      >> 2U)))) {
            if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                      >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    } else if ((0x2000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                      >> 0xcU)))) {
                            vlSelf->tinyriscv__DOT__id_op1_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    } else {
                        vlSelf->tinyriscv__DOT__id_op1_o 
                            = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                    }
                }
            }
        }
    }
    vlSelf->tinyriscv__DOT__id_op1_jump_o = 0U;
    if ((0x40U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 4U)))) {
                if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                vlSelf->tinyriscv__DOT__id_op1_jump_o 
                                    = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op1_jump_o 
                                = vlSelf->tinyriscv__DOT__regs_rdata1_o;
                        }
                    }
                } else if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            vlSelf->tinyriscv__DOT__id_op1_jump_o 
                                = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                        } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xdU)))) {
                            vlSelf->tinyriscv__DOT__id_op1_jump_o 
                                = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
        if ((0x10U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                              >> 2U)))) {
                    if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                            if ((1U & (~ ((0U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                  >> 0x19U)) 
                                          | (0x20U 
                                             == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                 >> 0x19U)))))) {
                                if ((1U == (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                            >> 0x19U))) {
                                    if ((0x4000U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                                        vlSelf->tinyriscv__DOT__id_op1_jump_o 
                                            = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                         >> 4U)))) {
        if ((8U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
            if ((4U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                if ((2U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                    if ((1U & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)) {
                        vlSelf->tinyriscv__DOT__id_op1_jump_o 
                            = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
                    }
                }
            }
        }
    }
}

void Vtinyriscv___024root___eval_initial(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtinyriscv___024root___eval_settle(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___eval_settle\n"); );
    // Body
    Vtinyriscv___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtinyriscv___024root___final(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___final\n"); );
}

void Vtinyriscv___024root___ctor_var_reset(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rib_ex_addr_o = VL_RAND_RESET_I(32);
    vlSelf->rib_ex_data_i = VL_RAND_RESET_I(32);
    vlSelf->rib_ex_data_o = VL_RAND_RESET_I(32);
    vlSelf->rib_ex_req_o = VL_RAND_RESET_I(1);
    vlSelf->rib_ex_we_o = VL_RAND_RESET_I(1);
    vlSelf->rib_pc_addr_o = VL_RAND_RESET_I(32);
    vlSelf->rib_pc_data_i = VL_RAND_RESET_I(32);
    vlSelf->jtag_reg_addr_i = VL_RAND_RESET_I(5);
    vlSelf->jtag_reg_data_i = VL_RAND_RESET_I(32);
    vlSelf->jtag_reg_we_i = VL_RAND_RESET_I(1);
    vlSelf->jtag_reg_data_o = VL_RAND_RESET_I(32);
    vlSelf->rib_hold_flag_i = VL_RAND_RESET_I(1);
    vlSelf->jtag_halt_flag_i = VL_RAND_RESET_I(1);
    vlSelf->jtag_reset_flag_i = VL_RAND_RESET_I(1);
    vlSelf->int_i = VL_RAND_RESET_I(8);
    vlSelf->tinyriscv__DOT__pc_pc_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_reg1_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__id_reg2_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__id_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__id_csr_raddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__id_csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_op1_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_op2_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_op1_jump_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__id_op2_jump_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_mem_raddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_mem_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__ex_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__ex_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__ex_jump_flag_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__ex_jump_addr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_div_start_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__ex_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ex_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__regs_rdata1_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__regs_rdata2_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__csr_data_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__csr_clint_data_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__ctrl_hold_flag_o = VL_RAND_RESET_I(3);
    vlSelf->tinyriscv__DOT__div_result_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__div_ready_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__div_busy_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__div_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__clint_we_o = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__clint_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__clint_raddr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__clint_data_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__clint_int_addr_o = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__clint_int_assert_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->tinyriscv__DOT__u_regs__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle = VL_RAND_RESET_Q(64);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r = VL_RAND_RESET_I(8);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index = VL_RAND_RESET_I(2);
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index = VL_RAND_RESET_I(2);
    vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp = VL_RAND_RESET_Q(64);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__op_r = VL_RAND_RESET_I(3);
    vlSelf->tinyriscv__DOT__u_div__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->tinyriscv__DOT__u_div__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__div_result = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__div_remain = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__invert_result = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__op_div = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__op_divu = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__op_rem = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__dividend_invert = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__divisor_invert = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor = VL_RAND_RESET_I(1);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__div_result_tmp = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_tmp = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_clint__DOT__int_state = VL_RAND_RESET_I(4);
    vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state = VL_RAND_RESET_I(5);
    vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr = VL_RAND_RESET_I(32);
    vlSelf->tinyriscv__DOT__u_clint__DOT__cause = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
