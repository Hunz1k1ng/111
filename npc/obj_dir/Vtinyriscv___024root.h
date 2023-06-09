// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtinyriscv.h for the primary calling header

#ifndef VERILATED_VTINYRISCV___024ROOT_H_
#define VERILATED_VTINYRISCV___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtinyriscv__Syms;
class Vtinyriscv_VerilatedVcd;


//----------

VL_MODULE(Vtinyriscv___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(rib_ex_req_o,0,0);
    VL_OUT8(rib_ex_we_o,0,0);
    VL_IN8(jtag_reg_addr_i,4,0);
    VL_IN8(jtag_reg_we_i,0,0);
    VL_IN8(rib_hold_flag_i,0,0);
    VL_IN8(jtag_halt_flag_i,0,0);
    VL_IN8(jtag_reset_flag_i,0,0);
    VL_IN8(int_i,7,0);
    VL_OUT(rib_ex_addr_o,31,0);
    VL_IN(rib_ex_data_i,31,0);
    VL_OUT(rib_ex_data_o,31,0);
    VL_OUT(rib_pc_addr_o,31,0);
    VL_IN(rib_pc_data_i,31,0);
    VL_IN(jtag_reg_data_i,31,0);
    VL_OUT(jtag_reg_data_o,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*4:0*/ tinyriscv__DOT__id_reg1_raddr_o;
        CData/*4:0*/ tinyriscv__DOT__id_reg2_raddr_o;
        CData/*0:0*/ tinyriscv__DOT__id_reg_we_o;
        CData/*4:0*/ tinyriscv__DOT__id_reg_waddr_o;
        CData/*0:0*/ tinyriscv__DOT__id_csr_we_o;
        CData/*0:0*/ tinyriscv__DOT__ex_mem_we_o;
        CData/*0:0*/ tinyriscv__DOT__ex_reg_we_o;
        CData/*4:0*/ tinyriscv__DOT__ex_reg_waddr_o;
        CData/*0:0*/ tinyriscv__DOT__ex_jump_flag_o;
        CData/*0:0*/ tinyriscv__DOT__ex_div_start_o;
        CData/*0:0*/ tinyriscv__DOT__ex_csr_we_o;
        CData/*2:0*/ tinyriscv__DOT__ctrl_hold_flag_o;
        CData/*0:0*/ tinyriscv__DOT__div_ready_o;
        CData/*0:0*/ tinyriscv__DOT__div_busy_o;
        CData/*4:0*/ tinyriscv__DOT__div_reg_waddr_o;
        CData/*0:0*/ tinyriscv__DOT__clint_we_o;
        CData/*0:0*/ tinyriscv__DOT__clint_int_assert_o;
        CData/*7:0*/ tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r;
        CData/*0:0*/ tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r;
        CData/*4:0*/ tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r;
        CData/*0:0*/ tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r;
        CData/*1:0*/ tinyriscv__DOT__u_ex__DOT__mem_raddr_index;
        CData/*1:0*/ tinyriscv__DOT__u_ex__DOT__mem_waddr_index;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__op1_eq_op2;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__hold_flag;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__jump_flag;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__mem_we;
        CData/*0:0*/ tinyriscv__DOT__u_ex__DOT__mem_req;
        CData/*2:0*/ tinyriscv__DOT__u_div__DOT__op_r;
        CData/*3:0*/ tinyriscv__DOT__u_div__DOT__state;
        CData/*0:0*/ tinyriscv__DOT__u_div__DOT__invert_result;
        CData/*0:0*/ tinyriscv__DOT__u_div__DOT__op_div;
        CData/*0:0*/ tinyriscv__DOT__u_div__DOT__op_divu;
        CData/*0:0*/ tinyriscv__DOT__u_div__DOT__op_rem;
        CData/*0:0*/ tinyriscv__DOT__u_div__DOT__minuend_ge_divisor;
        CData/*3:0*/ tinyriscv__DOT__u_clint__DOT__int_state;
        CData/*4:0*/ tinyriscv__DOT__u_clint__DOT__csr_state;
        IData/*31:0*/ tinyriscv__DOT__pc_pc_o;
        IData/*31:0*/ tinyriscv__DOT__id_csr_raddr_o;
        IData/*31:0*/ tinyriscv__DOT__id_csr_waddr_o;
        IData/*31:0*/ tinyriscv__DOT__id_op1_o;
        IData/*31:0*/ tinyriscv__DOT__id_op2_o;
        IData/*31:0*/ tinyriscv__DOT__id_op1_jump_o;
        IData/*31:0*/ tinyriscv__DOT__id_op2_jump_o;
        IData/*31:0*/ tinyriscv__DOT__ex_mem_wdata_o;
        IData/*31:0*/ tinyriscv__DOT__ex_mem_raddr_o;
        IData/*31:0*/ tinyriscv__DOT__ex_mem_waddr_o;
        IData/*31:0*/ tinyriscv__DOT__ex_reg_wdata_o;
        IData/*31:0*/ tinyriscv__DOT__ex_jump_addr_o;
        IData/*31:0*/ tinyriscv__DOT__ex_csr_wdata_o;
        IData/*31:0*/ tinyriscv__DOT__regs_rdata1_o;
        IData/*31:0*/ tinyriscv__DOT__regs_rdata2_o;
        IData/*31:0*/ tinyriscv__DOT__csr_data_o;
        IData/*31:0*/ tinyriscv__DOT__csr_clint_data_o;
        IData/*31:0*/ tinyriscv__DOT__div_result_o;
        IData/*31:0*/ tinyriscv__DOT__clint_waddr_o;
        IData/*31:0*/ tinyriscv__DOT__clint_raddr_o;
        IData/*31:0*/ tinyriscv__DOT__clint_data_o;
        IData/*31:0*/ tinyriscv__DOT__clint_int_addr_o;
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mtvec;
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mcause;
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mepc;
    };
    struct {
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mie;
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mstatus;
        IData/*31:0*/ tinyriscv__DOT__u_csr_reg__DOT__mscratch;
        IData/*31:0*/ tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r;
        IData/*31:0*/ tinyriscv__DOT__u_ex__DOT__op1_add_op2_res;
        IData/*31:0*/ tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res;
        IData/*31:0*/ tinyriscv__DOT__u_ex__DOT__reg_wdata;
        IData/*31:0*/ tinyriscv__DOT__u_ex__DOT__jump_addr;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__dividend_r;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__divisor_r;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__count;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__div_result;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__div_remain;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__minuend;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__dividend_invert;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__divisor_invert;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__minuend_sub_res;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__div_result_tmp;
        IData/*31:0*/ tinyriscv__DOT__u_div__DOT__minuend_tmp;
        IData/*31:0*/ tinyriscv__DOT__u_clint__DOT__inst_addr;
        IData/*31:0*/ tinyriscv__DOT__u_clint__DOT__cause;
        QData/*63:0*/ tinyriscv__DOT__u_csr_reg__DOT__cycle;
        QData/*63:0*/ tinyriscv__DOT__u_ex__DOT__mul_temp;
        VlUnpacked<IData/*31:0*/, 32> tinyriscv__DOT__u_regs__DOT__regs;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtinyriscv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtinyriscv___024root);  ///< Copying not allowed
  public:
    Vtinyriscv___024root(const char* name);
    ~Vtinyriscv___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtinyriscv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
