// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtinyriscv__Syms.h"


void Vtinyriscv___024root__traceChgSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep);

void Vtinyriscv___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtinyriscv___024root* const __restrict vlSelf = static_cast<Vtinyriscv___024root*>(voidSelf);
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtinyriscv___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtinyriscv___024root__traceChgSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->tinyriscv__DOT__pc_pc_o),32);
            tracep->chgIData(oldp+1,(vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+2,(vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r),32);
            tracep->chgCData(oldp+3,(vlSelf->tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r),8);
            tracep->chgCData(oldp+4,(vlSelf->tinyriscv__DOT__id_reg1_raddr_o),5);
            tracep->chgCData(oldp+5,(vlSelf->tinyriscv__DOT__id_reg2_raddr_o),5);
            tracep->chgBit(oldp+6,(vlSelf->tinyriscv__DOT__id_reg_we_o));
            tracep->chgCData(oldp+7,(vlSelf->tinyriscv__DOT__id_reg_waddr_o),5);
            tracep->chgIData(oldp+8,(vlSelf->tinyriscv__DOT__id_csr_raddr_o),32);
            tracep->chgBit(oldp+9,(vlSelf->tinyriscv__DOT__id_csr_we_o));
            tracep->chgIData(oldp+10,(vlSelf->tinyriscv__DOT__csr_data_o),32);
            tracep->chgIData(oldp+11,(vlSelf->tinyriscv__DOT__id_csr_waddr_o),32);
            tracep->chgIData(oldp+12,(vlSelf->tinyriscv__DOT__id_op2_jump_o),32);
            tracep->chgIData(oldp+13,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+14,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r),32);
            tracep->chgBit(oldp+15,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r));
            tracep->chgCData(oldp+16,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r),5);
            tracep->chgIData(oldp+17,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+18,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r),32);
            tracep->chgBit(oldp+19,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r));
            tracep->chgIData(oldp+20,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+21,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+22,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+23,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+24,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+25,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r),32);
            tracep->chgIData(oldp+26,(vlSelf->tinyriscv__DOT__ex_mem_raddr_o),32);
            tracep->chgIData(oldp+27,(vlSelf->tinyriscv__DOT__ex_mem_waddr_o),32);
            tracep->chgBit(oldp+28,(vlSelf->tinyriscv__DOT__ex_mem_we_o));
            tracep->chgBit(oldp+29,(((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                     & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req))));
            tracep->chgBit(oldp+30,(vlSelf->tinyriscv__DOT__ex_reg_we_o));
            tracep->chgCData(oldp+31,(vlSelf->tinyriscv__DOT__ex_reg_waddr_o),5);
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag) 
                                           | (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                               & (1U 
                                                  == 
                                                  (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                               ? (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                  >> 0xeU)
                                               : (IData)(vlSelf->tinyriscv__DOT__div_busy_o))))));
            tracep->chgBit(oldp+33,(vlSelf->tinyriscv__DOT__ex_jump_flag_o));
            tracep->chgIData(oldp+34,(vlSelf->tinyriscv__DOT__ex_jump_addr_o),32);
            tracep->chgBit(oldp+35,(vlSelf->tinyriscv__DOT__ex_div_start_o));
            tracep->chgCData(oldp+36,((7U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgIData(oldp+37,(vlSelf->tinyriscv__DOT__ex_csr_wdata_o),32);
            tracep->chgBit(oldp+38,(vlSelf->tinyriscv__DOT__ex_csr_we_o));
            tracep->chgIData(oldp+39,(vlSelf->tinyriscv__DOT__csr_clint_data_o),32);
            tracep->chgBit(oldp+40,((1U & (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                           >> 3U))));
            tracep->chgIData(oldp+41,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec),32);
            tracep->chgIData(oldp+42,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc),32);
            tracep->chgIData(oldp+43,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus),32);
            tracep->chgIData(oldp+44,(vlSelf->tinyriscv__DOT__div_result_o),32);
            tracep->chgBit(oldp+45,(vlSelf->tinyriscv__DOT__div_ready_o));
            tracep->chgBit(oldp+46,(vlSelf->tinyriscv__DOT__div_busy_o));
            tracep->chgCData(oldp+47,(vlSelf->tinyriscv__DOT__div_reg_waddr_o),5);
            tracep->chgBit(oldp+48,(vlSelf->tinyriscv__DOT__clint_we_o));
            tracep->chgIData(oldp+49,(vlSelf->tinyriscv__DOT__clint_waddr_o),32);
            tracep->chgIData(oldp+50,(vlSelf->tinyriscv__DOT__clint_data_o),32);
            tracep->chgIData(oldp+51,(vlSelf->tinyriscv__DOT__clint_int_addr_o),32);
            tracep->chgBit(oldp+52,(vlSelf->tinyriscv__DOT__clint_int_assert_o));
            tracep->chgIData(oldp+53,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[0]),32);
            tracep->chgIData(oldp+54,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[1]),32);
            tracep->chgIData(oldp+55,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[2]),32);
            tracep->chgIData(oldp+56,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[3]),32);
            tracep->chgIData(oldp+57,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[4]),32);
            tracep->chgIData(oldp+58,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[5]),32);
            tracep->chgIData(oldp+59,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[6]),32);
            tracep->chgIData(oldp+60,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[7]),32);
            tracep->chgIData(oldp+61,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[8]),32);
            tracep->chgIData(oldp+62,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[9]),32);
            tracep->chgIData(oldp+63,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[10]),32);
            tracep->chgIData(oldp+64,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[11]),32);
            tracep->chgIData(oldp+65,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[12]),32);
            tracep->chgIData(oldp+66,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[13]),32);
            tracep->chgIData(oldp+67,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[14]),32);
            tracep->chgIData(oldp+68,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[15]),32);
            tracep->chgIData(oldp+69,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[16]),32);
            tracep->chgIData(oldp+70,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[17]),32);
            tracep->chgIData(oldp+71,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[18]),32);
            tracep->chgIData(oldp+72,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[19]),32);
            tracep->chgIData(oldp+73,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[20]),32);
            tracep->chgIData(oldp+74,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[21]),32);
            tracep->chgIData(oldp+75,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[22]),32);
            tracep->chgIData(oldp+76,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[23]),32);
            tracep->chgIData(oldp+77,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[24]),32);
            tracep->chgIData(oldp+78,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[25]),32);
            tracep->chgIData(oldp+79,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[26]),32);
            tracep->chgIData(oldp+80,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[27]),32);
            tracep->chgIData(oldp+81,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[28]),32);
            tracep->chgIData(oldp+82,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[29]),32);
            tracep->chgIData(oldp+83,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[30]),32);
            tracep->chgIData(oldp+84,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[31]),32);
            tracep->chgQData(oldp+85,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle),64);
            tracep->chgIData(oldp+87,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause),32);
            tracep->chgIData(oldp+88,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie),32);
            tracep->chgIData(oldp+89,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch),32);
            tracep->chgCData(oldp+90,((0x7fU & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)),7);
            tracep->chgCData(oldp+91,((7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+92,((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+93,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+94,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+95,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+96,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index),2);
            tracep->chgCData(oldp+97,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index),2);
            tracep->chgQData(oldp+98,(vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp),64);
            tracep->chgQData(oldp+100,((1ULL + (~ vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp))),64);
            tracep->chgIData(oldp+102,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                        >> (0x1fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
            tracep->chgIData(oldp+103,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                        >> (0x1fU & 
                                            (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+104,((0xffffffffU 
                                        >> (0x1fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
            tracep->chgIData(oldp+105,((0xffffffffU 
                                        >> (0x1fU & 
                                            (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0x14U)))),32);
            tracep->chgIData(oldp+106,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res),32);
            tracep->chgIData(oldp+107,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res),32);
            tracep->chgIData(oldp+108,(((IData)(1U) 
                                        + (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))),32);
            tracep->chgIData(oldp+109,(((IData)(1U) 
                                        + (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
            tracep->chgBit(oldp+110,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed));
            tracep->chgBit(oldp+111,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned));
            tracep->chgBit(oldp+112,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2));
            tracep->chgIData(oldp+113,((((0x33U == 
                                          (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                         & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                         ? ((0x4000U 
                                             & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                             ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r
                                             : ((0x2000U 
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
                                         : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r)),32);
            tracep->chgIData(oldp+114,((((0x33U == 
                                          (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                         & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                         ? ((0x4000U 
                                             & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                             ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                             : ((0x2000U 
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
                                         : vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r)),32);
            tracep->chgCData(oldp+115,((0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)),7);
            tracep->chgCData(oldp+116,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+117,((0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+118,((0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                 >> 0xfU))),5);
            tracep->chgIData(oldp+119,((((0x33U == 
                                          (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                         & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                         ? 0U : ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                   ? vlSelf->tinyriscv__DOT__div_result_o
                                                   : 0U)))),32);
            tracep->chgBit(oldp+120,(((~ ((0x33U == 
                                           (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                          & (1U == 
                                             (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0x19U)))) 
                                      & ((~ (IData)(vlSelf->tinyriscv__DOT__div_busy_o)) 
                                         & (IData)(vlSelf->tinyriscv__DOT__div_ready_o)))));
            tracep->chgCData(oldp+121,((((0x33U == 
                                          (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                         & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                         ? 0U : ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                   ? (IData)(vlSelf->tinyriscv__DOT__div_reg_waddr_o)
                                                   : 0U)))),5);
            tracep->chgBit(oldp+122,((1U & (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                             & (1U 
                                                == 
                                                (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                 >> 0x19U)))
                                             ? (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0xeU)
                                             : (IData)(vlSelf->tinyriscv__DOT__div_busy_o)))));
            tracep->chgBit(oldp+123,((IData)(((0x4033U 
                                               == (0x407fU 
                                                   & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                              & (1U 
                                                 == 
                                                 (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                  >> 0x19U))))));
            tracep->chgIData(oldp+124,((((0x33U == 
                                          (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                         & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                   >> 0x19U)))
                                         ? ((0x4000U 
                                             & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                             ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                             : 0U) : 0U)),32);
            tracep->chgBit(oldp+125,(vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag));
            tracep->chgBit(oldp+126,(vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag));
            tracep->chgIData(oldp+127,(vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr),32);
            tracep->chgBit(oldp+128,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we));
            tracep->chgBit(oldp+129,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req));
            tracep->chgIData(oldp+130,(vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r),32);
            tracep->chgIData(oldp+131,(vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r),32);
            tracep->chgCData(oldp+132,(vlSelf->tinyriscv__DOT__u_div__DOT__op_r),3);
            tracep->chgCData(oldp+133,(vlSelf->tinyriscv__DOT__u_div__DOT__state),4);
            tracep->chgIData(oldp+134,(vlSelf->tinyriscv__DOT__u_div__DOT__count),32);
            tracep->chgIData(oldp+135,(vlSelf->tinyriscv__DOT__u_div__DOT__div_result),32);
            tracep->chgIData(oldp+136,(vlSelf->tinyriscv__DOT__u_div__DOT__div_remain),32);
            tracep->chgIData(oldp+137,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend),32);
            tracep->chgBit(oldp+138,(vlSelf->tinyriscv__DOT__u_div__DOT__invert_result));
            tracep->chgBit(oldp+139,((4U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
            tracep->chgBit(oldp+140,((5U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
            tracep->chgBit(oldp+141,((6U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
            tracep->chgBit(oldp+142,((7U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
            tracep->chgIData(oldp+143,((- vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r)),32);
            tracep->chgIData(oldp+144,((- vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r)),32);
            tracep->chgBit(oldp+145,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor));
            tracep->chgIData(oldp+146,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res),32);
            tracep->chgIData(oldp+147,(((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor)
                                         ? (1U | (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
                                                  << 1U))
                                         : (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
                                            << 1U))),32);
            tracep->chgIData(oldp+148,(((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor)
                                         ? (0x7fffffffU 
                                            & vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res)
                                         : (0x7fffffffU 
                                            & vlSelf->tinyriscv__DOT__u_div__DOT__minuend))),32);
            tracep->chgCData(oldp+149,(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state),5);
            tracep->chgIData(oldp+150,(vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr),32);
            tracep->chgIData(oldp+151,(vlSelf->tinyriscv__DOT__u_clint__DOT__cause),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+152,(vlSelf->tinyriscv__DOT__regs_rdata1_o),32);
            tracep->chgIData(oldp+153,(vlSelf->tinyriscv__DOT__regs_rdata2_o),32);
            tracep->chgIData(oldp+154,(vlSelf->tinyriscv__DOT__id_op1_o),32);
            tracep->chgIData(oldp+155,(vlSelf->tinyriscv__DOT__id_op2_o),32);
            tracep->chgIData(oldp+156,(vlSelf->tinyriscv__DOT__id_op1_jump_o),32);
            tracep->chgIData(oldp+157,(vlSelf->tinyriscv__DOT__ex_mem_wdata_o),32);
            tracep->chgIData(oldp+158,(vlSelf->tinyriscv__DOT__ex_reg_wdata_o),32);
            tracep->chgCData(oldp+159,(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o),3);
            tracep->chgBit(oldp+160,((2U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))));
            tracep->chgBit(oldp+161,((3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))));
            tracep->chgIData(oldp+162,(vlSelf->tinyriscv__DOT__u_ex__DOT__reg_wdata),32);
            tracep->chgCData(oldp+163,(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state),4);
        }
        tracep->chgBit(oldp+164,(vlSelf->clk));
        tracep->chgBit(oldp+165,(vlSelf->rst));
        tracep->chgIData(oldp+166,(vlSelf->rib_ex_addr_o),32);
        tracep->chgIData(oldp+167,(vlSelf->rib_ex_data_i),32);
        tracep->chgIData(oldp+168,(vlSelf->rib_ex_data_o),32);
        tracep->chgBit(oldp+169,(vlSelf->rib_ex_req_o));
        tracep->chgBit(oldp+170,(vlSelf->rib_ex_we_o));
        tracep->chgIData(oldp+171,(vlSelf->rib_pc_addr_o),32);
        tracep->chgIData(oldp+172,(vlSelf->rib_pc_data_i),32);
        tracep->chgCData(oldp+173,(vlSelf->jtag_reg_addr_i),5);
        tracep->chgIData(oldp+174,(vlSelf->jtag_reg_data_i),32);
        tracep->chgBit(oldp+175,(vlSelf->jtag_reg_we_i));
        tracep->chgIData(oldp+176,(vlSelf->jtag_reg_data_o),32);
        tracep->chgBit(oldp+177,(vlSelf->rib_hold_flag_i));
        tracep->chgBit(oldp+178,(vlSelf->jtag_halt_flag_i));
        tracep->chgBit(oldp+179,(vlSelf->jtag_reset_flag_i));
        tracep->chgCData(oldp+180,(vlSelf->int_i),8);
        tracep->chgBit(oldp+181,(((1U != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state)) 
                                  | (1U != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state)))));
    }
}

void Vtinyriscv___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtinyriscv___024root* const __restrict vlSelf = static_cast<Vtinyriscv___024root*>(voidSelf);
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
