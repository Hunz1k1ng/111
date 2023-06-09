// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtinyriscv.h for the primary calling header

#include "Vtinyriscv___024root.h"
#include "Vtinyriscv__Syms.h"

//==========

VL_INLINE_OPT void Vtinyriscv___024root___sequent__TOP__1(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v0;
    CData/*4:0*/ __Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v1;
    CData/*0:0*/ __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v1;
    CData/*3:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__state;
    CData/*0:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__invert_result;
    CData/*4:0*/ __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__pc_pc_o;
    IData/*31:0*/ __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v1;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__count;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__div_result;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__div_remain;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__u_div__DOT__minuend;
    IData/*31:0*/ __Vdly__tinyriscv__DOT__clint_data_o;
    // Body
    __Vdly__tinyriscv__DOT__pc_pc_o = vlSelf->tinyriscv__DOT__pc_pc_o;
    __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state 
        = vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state;
    __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v0 = 0U;
    __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v1 = 0U;
    __Vdly__tinyriscv__DOT__clint_data_o = vlSelf->tinyriscv__DOT__clint_data_o;
    __Vdly__tinyriscv__DOT__u_div__DOT__invert_result 
        = vlSelf->tinyriscv__DOT__u_div__DOT__invert_result;
    __Vdly__tinyriscv__DOT__u_div__DOT__div_remain 
        = vlSelf->tinyriscv__DOT__u_div__DOT__div_remain;
    __Vdly__tinyriscv__DOT__u_div__DOT__count = vlSelf->tinyriscv__DOT__u_div__DOT__count;
    __Vdly__tinyriscv__DOT__u_div__DOT__state = vlSelf->tinyriscv__DOT__u_div__DOT__state;
    __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r 
        = vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r;
    __Vdly__tinyriscv__DOT__u_div__DOT__div_result 
        = vlSelf->tinyriscv__DOT__u_div__DOT__div_result;
    __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r = vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r;
    __Vdly__tinyriscv__DOT__u_div__DOT__minuend = vlSelf->tinyriscv__DOT__u_div__DOT__minuend;
    __Vdly__tinyriscv__DOT__pc_pc_o = ((1U & ((~ (IData)(vlSelf->rst)) 
                                              | (IData)(vlSelf->jtag_reset_flag_i)))
                                        ? 0U : ((IData)(vlSelf->tinyriscv__DOT__ex_jump_flag_o)
                                                 ? vlSelf->tinyriscv__DOT__ex_jump_addr_o
                                                 : 
                                                ((1U 
                                                  <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))
                                                  ? vlSelf->tinyriscv__DOT__pc_pc_o
                                                  : 
                                                 ((IData)(4U) 
                                                  + vlSelf->tinyriscv__DOT__pc_pc_o))));
    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle = 
        ((IData)(vlSelf->rst) ? (1ULL + vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle)
          : 0ULL);
    vlSelf->tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (2U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))
            ? 0U : (IData)(vlSelf->int_i));
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r 
        = ((~ ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o)))) 
           & (IData)(vlSelf->tinyriscv__DOT__id_csr_we_o));
    if ((1U & ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))) {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r = 0U;
    } else {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__id_op2_jump_o;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__id_op1_jump_o;
    }
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r 
        = ((~ ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o)))) 
           & (IData)(vlSelf->tinyriscv__DOT__id_reg_we_o));
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                        if ((0x304U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                            if ((0x300U != (0xfffU 
                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                                if ((0x340U == (0xfffU 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                                    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch 
                                        = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
                                }
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                        if ((0x304U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                            if ((0x300U != (0xfffU 
                                            & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                                if ((0x340U == (0xfffU 
                                                & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                                    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch 
                                        = vlSelf->tinyriscv__DOT__clint_data_o;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                if ((0x342U == (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause 
                        = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
                }
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                if ((0x342U == (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                    vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause 
                        = vlSelf->tinyriscv__DOT__clint_data_o;
                }
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                        if ((0x304U == (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                            vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie 
                                = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
                        }
                    }
                }
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                        if ((0x304U == (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                            vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie 
                                = vlSelf->tinyriscv__DOT__clint_data_o;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie = 0U;
    }
    vlSelf->tinyriscv__DOT__clint_int_assert_o = ((IData)(vlSelf->rst) 
                                                  & ((0x10U 
                                                      == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state)) 
                                                     | (8U 
                                                        == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))));
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))
            ? 0U : vlSelf->tinyriscv__DOT__csr_data_o);
    vlSelf->tinyriscv__DOT__clint_int_addr_o = ((IData)(vlSelf->rst)
                                                 ? 
                                                ((0x10U 
                                                  == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                  ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc
                                                   : 0U))
                                                 : 0U);
    if (vlSelf->rst) {
        if (((IData)(vlSelf->tinyriscv__DOT__ex_reg_we_o) 
             & (0U != (IData)(vlSelf->tinyriscv__DOT__ex_reg_waddr_o)))) {
            __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v0 
                = vlSelf->tinyriscv__DOT__ex_reg_wdata_o;
            __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v0 = 1U;
            __Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v0 
                = vlSelf->tinyriscv__DOT__ex_reg_waddr_o;
        } else if (((IData)(vlSelf->jtag_reg_we_i) 
                    & (0U != (IData)(vlSelf->jtag_reg_addr_i)))) {
            __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v1 
                = vlSelf->jtag_reg_data_i;
            __Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v1 = 1U;
            __Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v1 
                = vlSelf->jtag_reg_addr_i;
        }
    }
    __Vdly__tinyriscv__DOT__clint_data_o = ((IData)(vlSelf->rst)
                                             ? ((0x10U 
                                                 & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                 ? 
                                                ((8U 
                                                  & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : vlSelf->tinyriscv__DOT__u_clint__DOT__cause))))
                                                 : 
                                                ((8U 
                                                  & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : 
                                                    ((0xfffffff0U 
                                                      & vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus) 
                                                     | ((8U 
                                                         & (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                                            >> 4U)) 
                                                        | (7U 
                                                           & vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus))))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : 
                                                    (0xfffffff7U 
                                                     & vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus))
                                                    : 0U))))
                                             : 0U);
    if ((1U & ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))) {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r = 0U;
    } else {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__id_op2_o;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__id_op1_o;
    }
    if (vlSelf->rst) {
        if ((1U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__state))) {
            if (vlSelf->tinyriscv__DOT__ex_div_start_o) {
                vlSelf->tinyriscv__DOT__u_div__DOT__op_r 
                    = (7U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                             >> 0xcU));
                __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r 
                    = vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r;
                __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r 
                    = vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r;
                vlSelf->tinyriscv__DOT__div_reg_waddr_o 
                    = vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r;
                __Vdly__tinyriscv__DOT__u_div__DOT__state = 2U;
                vlSelf->tinyriscv__DOT__div_busy_o = 1U;
            } else {
                vlSelf->tinyriscv__DOT__u_div__DOT__op_r = 0U;
                vlSelf->tinyriscv__DOT__div_reg_waddr_o = 0U;
                __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r = 0U;
                __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r = 0U;
                vlSelf->tinyriscv__DOT__div_ready_o = 0U;
                vlSelf->tinyriscv__DOT__div_result_o = 0U;
                vlSelf->tinyriscv__DOT__div_busy_o = 0U;
            }
        } else if ((2U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__state))) {
            if (vlSelf->tinyriscv__DOT__ex_div_start_o) {
                if ((0U == vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r)) {
                    vlSelf->tinyriscv__DOT__div_result_o 
                        = (((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_div) 
                            | (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_divu))
                            ? 0xffffffffU : vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r);
                    vlSelf->tinyriscv__DOT__div_ready_o = 1U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
                    vlSelf->tinyriscv__DOT__div_busy_o = 0U;
                } else {
                    vlSelf->tinyriscv__DOT__div_busy_o = 1U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__count = 0x40000000U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__state = 4U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__div_result = 0U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__div_remain = 0U;
                    if (((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_div) 
                         | (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_rem))) {
                        if ((vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r 
                             >> 0x1fU)) {
                            __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r 
                                = vlSelf->tinyriscv__DOT__u_div__DOT__divisor_invert;
                        }
                        if ((vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                             >> 0x1fU)) {
                            __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r 
                                = vlSelf->tinyriscv__DOT__u_div__DOT__dividend_invert;
                            __Vdly__tinyriscv__DOT__u_div__DOT__minuend 
                                = (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_invert 
                                   >> 0x1fU);
                        } else {
                            __Vdly__tinyriscv__DOT__u_div__DOT__minuend 
                                = (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                                   >> 0x1fU);
                        }
                    } else {
                        __Vdly__tinyriscv__DOT__u_div__DOT__minuend 
                            = (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                               >> 0x1fU);
                    }
                    __Vdly__tinyriscv__DOT__u_div__DOT__invert_result 
                        = (((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_div) 
                            & ((vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                                ^ vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r) 
                               >> 0x1fU)) | ((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_rem) 
                                             & (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                                                >> 0x1fU)));
                }
            } else {
                __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
                vlSelf->tinyriscv__DOT__div_result_o = 0U;
                vlSelf->tinyriscv__DOT__div_ready_o = 0U;
                vlSelf->tinyriscv__DOT__div_busy_o = 0U;
            }
        } else if ((4U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__state))) {
            if (vlSelf->tinyriscv__DOT__ex_div_start_o) {
                __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r 
                    = (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                       << 1U);
                __Vdly__tinyriscv__DOT__u_div__DOT__div_result 
                    = vlSelf->tinyriscv__DOT__u_div__DOT__div_result_tmp;
                __Vdly__tinyriscv__DOT__u_div__DOT__count 
                    = (vlSelf->tinyriscv__DOT__u_div__DOT__count 
                       >> 1U);
                if ((0U != vlSelf->tinyriscv__DOT__u_div__DOT__count)) {
                    __Vdly__tinyriscv__DOT__u_div__DOT__minuend 
                        = ((vlSelf->tinyriscv__DOT__u_div__DOT__minuend_tmp 
                            << 1U) | (1U & (vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
                                            >> 0x1eU)));
                } else {
                    __Vdly__tinyriscv__DOT__u_div__DOT__state = 8U;
                    __Vdly__tinyriscv__DOT__u_div__DOT__div_remain 
                        = ((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor)
                            ? vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res
                            : vlSelf->tinyriscv__DOT__u_div__DOT__minuend);
                }
            } else {
                __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
                vlSelf->tinyriscv__DOT__div_result_o = 0U;
                vlSelf->tinyriscv__DOT__div_ready_o = 0U;
                vlSelf->tinyriscv__DOT__div_busy_o = 0U;
            }
        } else if ((8U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__state))) {
            if (vlSelf->tinyriscv__DOT__ex_div_start_o) {
                vlSelf->tinyriscv__DOT__div_ready_o = 1U;
                __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
                vlSelf->tinyriscv__DOT__div_busy_o = 0U;
                vlSelf->tinyriscv__DOT__div_result_o 
                    = (((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_div) 
                        | (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_divu))
                        ? ((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__invert_result)
                            ? (- vlSelf->tinyriscv__DOT__u_div__DOT__div_result)
                            : vlSelf->tinyriscv__DOT__u_div__DOT__div_result)
                        : ((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__invert_result)
                            ? (- vlSelf->tinyriscv__DOT__u_div__DOT__div_remain)
                            : vlSelf->tinyriscv__DOT__u_div__DOT__div_remain));
            } else {
                __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
                vlSelf->tinyriscv__DOT__div_result_o = 0U;
                vlSelf->tinyriscv__DOT__div_ready_o = 0U;
                vlSelf->tinyriscv__DOT__div_busy_o = 0U;
            }
        }
    } else {
        __Vdly__tinyriscv__DOT__u_div__DOT__state = 1U;
        vlSelf->tinyriscv__DOT__div_ready_o = 0U;
        vlSelf->tinyriscv__DOT__div_result_o = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__div_result = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__div_remain = 0U;
        vlSelf->tinyriscv__DOT__u_div__DOT__op_r = 0U;
        vlSelf->tinyriscv__DOT__div_reg_waddr_o = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__minuend = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__invert_result = 0U;
        vlSelf->tinyriscv__DOT__div_busy_o = 0U;
        __Vdly__tinyriscv__DOT__u_div__DOT__count = 0U;
    }
    if (__Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v0) {
        vlSelf->tinyriscv__DOT__u_regs__DOT__regs[__Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v0] 
            = __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v0;
    }
    if (__Vdlyvset__tinyriscv__DOT__u_regs__DOT__regs__v1) {
        vlSelf->tinyriscv__DOT__u_regs__DOT__regs[__Vdlyvdim0__tinyriscv__DOT__u_regs__DOT__regs__v1] 
            = __Vdlyvval__tinyriscv__DOT__u_regs__DOT__regs__v1;
    }
    vlSelf->tinyriscv__DOT__u_div__DOT__state = __Vdly__tinyriscv__DOT__u_div__DOT__state;
    vlSelf->tinyriscv__DOT__u_div__DOT__count = __Vdly__tinyriscv__DOT__u_div__DOT__count;
    vlSelf->tinyriscv__DOT__u_div__DOT__div_remain 
        = __Vdly__tinyriscv__DOT__u_div__DOT__div_remain;
    vlSelf->tinyriscv__DOT__u_div__DOT__invert_result 
        = __Vdly__tinyriscv__DOT__u_div__DOT__invert_result;
    vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r 
        = __Vdly__tinyriscv__DOT__u_div__DOT__dividend_r;
    vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
        = __Vdly__tinyriscv__DOT__u_div__DOT__div_result;
    vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r = __Vdly__tinyriscv__DOT__u_div__DOT__divisor_r;
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend = __Vdly__tinyriscv__DOT__u_div__DOT__minuend;
    vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res 
        = (vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r 
           + vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r);
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U == (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec 
                    = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U == (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec 
                    = vlSelf->tinyriscv__DOT__clint_data_o;
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                    if ((0x341U == (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc 
                            = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
                    }
                }
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                    if ((0x341U == (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc 
                            = vlSelf->tinyriscv__DOT__clint_data_o;
                    }
                }
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->tinyriscv__DOT__ex_csr_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                        if ((0x304U != (0xfffU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                            if ((0x300U == (0xfffU 
                                            & vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r))) {
                                vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                    = vlSelf->tinyriscv__DOT__ex_csr_wdata_o;
                            }
                        }
                    }
                }
            }
        } else if (vlSelf->tinyriscv__DOT__clint_we_o) {
            if ((0x305U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                if ((0x342U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                    if ((0x341U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                        if ((0x304U != (0xfffU & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                            if ((0x300U == (0xfffU 
                                            & vlSelf->tinyriscv__DOT__clint_waddr_o))) {
                                vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                    = vlSelf->tinyriscv__DOT__clint_data_o;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus = 0U;
    }
    if (vlSelf->rst) {
        if ((0x10U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))) {
            __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 1U;
        } else if ((8U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))) {
            __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 1U;
        } else if ((4U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))) {
            __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state 
                = ((2U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                    ? 1U : ((1U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                             ? 1U : 2U));
        } else if ((2U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))) {
            __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state 
                = ((1U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                    ? 1U : 0x10U);
        } else if ((1U & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))) {
            if ((2U == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state))) {
                __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 4U;
                vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr 
                    = ((IData)(vlSelf->tinyriscv__DOT__ex_jump_flag_o)
                        ? (vlSelf->tinyriscv__DOT__ex_jump_addr_o 
                           - (IData)(4U)) : vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r);
                vlSelf->tinyriscv__DOT__u_clint__DOT__cause 
                    = ((0x73U == vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                        ? 0xbU : ((0x100073U == vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)
                                   ? 3U : 0xaU));
            } else if ((4U == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state))) {
                vlSelf->tinyriscv__DOT__u_clint__DOT__cause = 0x80000004U;
                __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 4U;
                vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr 
                    = ((IData)(vlSelf->tinyriscv__DOT__ex_jump_flag_o)
                        ? vlSelf->tinyriscv__DOT__ex_jump_addr_o
                        : ((IData)(vlSelf->tinyriscv__DOT__ex_div_start_o)
                            ? (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r 
                               - (IData)(4U)) : vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r));
            } else if ((8U == (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state))) {
                __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 8U;
            }
        } else {
            __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 1U;
        }
    } else {
        __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state = 1U;
        vlSelf->tinyriscv__DOT__u_clint__DOT__cause = 0U;
        vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr = 0U;
    }
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
    vlSelf->tinyriscv__DOT__u_div__DOT__dividend_invert 
        = (- vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r);
    vlSelf->tinyriscv__DOT__u_div__DOT__op_div = (4U 
                                                  == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__op_divu = (5U 
                                                   == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__op_rem = (6U 
                                                  == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r));
    vlSelf->tinyriscv__DOT__u_div__DOT__divisor_invert 
        = (- vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res 
        = (vlSelf->tinyriscv__DOT__u_div__DOT__minuend 
           - vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor 
        = (vlSelf->tinyriscv__DOT__u_div__DOT__minuend 
           >= vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r);
    if ((1U & ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))) {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r = 1U;
    } else {
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__id_reg_waddr_o;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__regs_rdata2_o;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__regs_rdata1_o;
        vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r;
    }
    vlSelf->tinyriscv__DOT__clint_data_o = __Vdly__tinyriscv__DOT__clint_data_o;
    vlSelf->tinyriscv__DOT__ex_csr_we_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                           & (IData)(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r));
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
    vlSelf->tinyriscv__DOT__clint_we_o = ((IData)(vlSelf->rst) 
                                          & ((0x10U 
                                              & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                              ? (IData)(
                                                        (0U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))))
                                              : ((8U 
                                                  & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                  ? (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? (IData)(
                                                             (0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))))
                                                   : (IData)(
                                                             (2U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))))))));
    vlSelf->tinyriscv__DOT__clint_waddr_o = ((IData)(vlSelf->rst)
                                              ? ((0x10U 
                                                  & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                      ? 0U
                                                      : 0x342U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                      ? 0U
                                                      : 0x300U)))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                      ? 0U
                                                      : 0x341U))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state))
                                                      ? 0U
                                                      : 0x300U)
                                                     : 0U))))
                                              : 0U);
    vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r 
        = ((1U & ((~ (IData)(vlSelf->rst)) | (3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))
            ? 0U : vlSelf->tinyriscv__DOT__id_csr_waddr_o);
    if ((1U & ((~ (IData)(vlSelf->rst)) | (2U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))))) {
        vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r = 0U;
        vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r = 1U;
    } else {
        vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r 
            = vlSelf->tinyriscv__DOT__pc_pc_o;
        vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
            = vlSelf->rib_pc_data_i;
    }
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
    vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state 
        = __Vdly__tinyriscv__DOT__u_clint__DOT__csr_state;
    vlSelf->tinyriscv__DOT__pc_pc_o = __Vdly__tinyriscv__DOT__pc_pc_o;
    vlSelf->rib_ex_req_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                            & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req));
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
    vlSelf->tinyriscv__DOT__ex_mem_we_o = ((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                           & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we));
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
    vlSelf->rib_ex_we_o = vlSelf->tinyriscv__DOT__ex_mem_we_o;
    vlSelf->rib_ex_addr_o = ((IData)(vlSelf->tinyriscv__DOT__ex_mem_we_o)
                              ? vlSelf->tinyriscv__DOT__ex_mem_waddr_o
                              : vlSelf->tinyriscv__DOT__ex_mem_raddr_o);
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
}

VL_INLINE_OPT void Vtinyriscv___024root___combo__TOP__3(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->jtag_reg_data_o = ((0U == (IData)(vlSelf->jtag_reg_addr_i))
                                ? 0U : vlSelf->tinyriscv__DOT__u_regs__DOT__regs
                               [vlSelf->jtag_reg_addr_i]);
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
    vlSelf->rib_ex_data_o = vlSelf->tinyriscv__DOT__ex_mem_wdata_o;
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

void Vtinyriscv___024root___eval(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtinyriscv___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtinyriscv___024root___combo__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtinyriscv___024root___change_request_1(Vtinyriscv___024root* vlSelf);

VL_INLINE_OPT QData Vtinyriscv___024root___change_request(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___change_request\n"); );
    // Body
    return (Vtinyriscv___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtinyriscv___024root___change_request_1(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtinyriscv___024root___eval_debug_assertions(Vtinyriscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtinyriscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->jtag_reg_addr_i & 0xe0U))) {
        Verilated::overWidthError("jtag_reg_addr_i");}
    if (VL_UNLIKELY((vlSelf->jtag_reg_we_i & 0xfeU))) {
        Verilated::overWidthError("jtag_reg_we_i");}
    if (VL_UNLIKELY((vlSelf->rib_hold_flag_i & 0xfeU))) {
        Verilated::overWidthError("rib_hold_flag_i");}
    if (VL_UNLIKELY((vlSelf->jtag_halt_flag_i & 0xfeU))) {
        Verilated::overWidthError("jtag_halt_flag_i");}
    if (VL_UNLIKELY((vlSelf->jtag_reset_flag_i & 0xfeU))) {
        Verilated::overWidthError("jtag_reset_flag_i");}
}
#endif  // VL_DEBUG
