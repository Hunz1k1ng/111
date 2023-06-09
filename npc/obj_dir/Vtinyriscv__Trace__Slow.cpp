// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtinyriscv__Syms.h"


void Vtinyriscv___024root__traceInitSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtinyriscv___024root__traceInitTop(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtinyriscv___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtinyriscv___024root__traceInitSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+165,"clk", false,-1);
        tracep->declBit(c+166,"rst", false,-1);
        tracep->declBus(c+167,"rib_ex_addr_o", false,-1, 31,0);
        tracep->declBus(c+168,"rib_ex_data_i", false,-1, 31,0);
        tracep->declBus(c+169,"rib_ex_data_o", false,-1, 31,0);
        tracep->declBit(c+170,"rib_ex_req_o", false,-1);
        tracep->declBit(c+171,"rib_ex_we_o", false,-1);
        tracep->declBus(c+172,"rib_pc_addr_o", false,-1, 31,0);
        tracep->declBus(c+173,"rib_pc_data_i", false,-1, 31,0);
        tracep->declBus(c+174,"jtag_reg_addr_i", false,-1, 4,0);
        tracep->declBus(c+175,"jtag_reg_data_i", false,-1, 31,0);
        tracep->declBit(c+176,"jtag_reg_we_i", false,-1);
        tracep->declBus(c+177,"jtag_reg_data_o", false,-1, 31,0);
        tracep->declBit(c+178,"rib_hold_flag_i", false,-1);
        tracep->declBit(c+179,"jtag_halt_flag_i", false,-1);
        tracep->declBit(c+180,"jtag_reset_flag_i", false,-1);
        tracep->declBus(c+181,"int_i", false,-1, 7,0);
        tracep->declBit(c+165,"tinyriscv clk", false,-1);
        tracep->declBit(c+166,"tinyriscv rst", false,-1);
        tracep->declBus(c+167,"tinyriscv rib_ex_addr_o", false,-1, 31,0);
        tracep->declBus(c+168,"tinyriscv rib_ex_data_i", false,-1, 31,0);
        tracep->declBus(c+169,"tinyriscv rib_ex_data_o", false,-1, 31,0);
        tracep->declBit(c+170,"tinyriscv rib_ex_req_o", false,-1);
        tracep->declBit(c+171,"tinyriscv rib_ex_we_o", false,-1);
        tracep->declBus(c+172,"tinyriscv rib_pc_addr_o", false,-1, 31,0);
        tracep->declBus(c+173,"tinyriscv rib_pc_data_i", false,-1, 31,0);
        tracep->declBus(c+174,"tinyriscv jtag_reg_addr_i", false,-1, 4,0);
        tracep->declBus(c+175,"tinyriscv jtag_reg_data_i", false,-1, 31,0);
        tracep->declBit(c+176,"tinyriscv jtag_reg_we_i", false,-1);
        tracep->declBus(c+177,"tinyriscv jtag_reg_data_o", false,-1, 31,0);
        tracep->declBit(c+178,"tinyriscv rib_hold_flag_i", false,-1);
        tracep->declBit(c+179,"tinyriscv jtag_halt_flag_i", false,-1);
        tracep->declBit(c+180,"tinyriscv jtag_reset_flag_i", false,-1);
        tracep->declBus(c+181,"tinyriscv int_i", false,-1, 7,0);
        tracep->declBus(c+1,"tinyriscv pc_pc_o", false,-1, 31,0);
        tracep->declBus(c+2,"tinyriscv if_inst_o", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv if_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+4,"tinyriscv if_int_flag_o", false,-1, 7,0);
        tracep->declBus(c+5,"tinyriscv id_reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+6,"tinyriscv id_reg2_raddr_o", false,-1, 4,0);
        tracep->declBus(c+2,"tinyriscv id_inst_o", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv id_inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+153,"tinyriscv id_reg1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv id_reg2_rdata_o", false,-1, 31,0);
        tracep->declBit(c+7,"tinyriscv id_reg_we_o", false,-1);
        tracep->declBus(c+8,"tinyriscv id_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+9,"tinyriscv id_csr_raddr_o", false,-1, 31,0);
        tracep->declBit(c+10,"tinyriscv id_csr_we_o", false,-1);
        tracep->declBus(c+11,"tinyriscv id_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+12,"tinyriscv id_csr_waddr_o", false,-1, 31,0);
        tracep->declBus(c+155,"tinyriscv id_op1_o", false,-1, 31,0);
        tracep->declBus(c+156,"tinyriscv id_op2_o", false,-1, 31,0);
        tracep->declBus(c+157,"tinyriscv id_op1_jump_o", false,-1, 31,0);
        tracep->declBus(c+13,"tinyriscv id_op2_jump_o", false,-1, 31,0);
        tracep->declBus(c+14,"tinyriscv ie_inst_o", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv ie_inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+16,"tinyriscv ie_reg_we_o", false,-1);
        tracep->declBus(c+17,"tinyriscv ie_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+18,"tinyriscv ie_reg1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv ie_reg2_rdata_o", false,-1, 31,0);
        tracep->declBit(c+20,"tinyriscv ie_csr_we_o", false,-1);
        tracep->declBus(c+21,"tinyriscv ie_csr_waddr_o", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv ie_csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+23,"tinyriscv ie_op1_o", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv ie_op2_o", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv ie_op1_jump_o", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv ie_op2_jump_o", false,-1, 31,0);
        tracep->declBus(c+158,"tinyriscv ex_mem_wdata_o", false,-1, 31,0);
        tracep->declBus(c+27,"tinyriscv ex_mem_raddr_o", false,-1, 31,0);
        tracep->declBus(c+28,"tinyriscv ex_mem_waddr_o", false,-1, 31,0);
        tracep->declBit(c+29,"tinyriscv ex_mem_we_o", false,-1);
        tracep->declBit(c+30,"tinyriscv ex_mem_req_o", false,-1);
        tracep->declBus(c+159,"tinyriscv ex_reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+31,"tinyriscv ex_reg_we_o", false,-1);
        tracep->declBus(c+32,"tinyriscv ex_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+33,"tinyriscv ex_hold_flag_o", false,-1);
        tracep->declBit(c+34,"tinyriscv ex_jump_flag_o", false,-1);
        tracep->declBus(c+35,"tinyriscv ex_jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+36,"tinyriscv ex_div_start_o", false,-1);
        tracep->declBus(c+18,"tinyriscv ex_div_dividend_o", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv ex_div_divisor_o", false,-1, 31,0);
        tracep->declBus(c+37,"tinyriscv ex_div_op_o", false,-1, 2,0);
        tracep->declBus(c+17,"tinyriscv ex_div_reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+38,"tinyriscv ex_csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+39,"tinyriscv ex_csr_we_o", false,-1);
        tracep->declBus(c+21,"tinyriscv ex_csr_waddr_o", false,-1, 31,0);
        tracep->declBus(c+153,"tinyriscv regs_rdata1_o", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv regs_rdata2_o", false,-1, 31,0);
        tracep->declBus(c+11,"tinyriscv csr_data_o", false,-1, 31,0);
        tracep->declBus(c+40,"tinyriscv csr_clint_data_o", false,-1, 31,0);
        tracep->declBit(c+41,"tinyriscv csr_global_int_en_o", false,-1);
        tracep->declBus(c+42,"tinyriscv csr_clint_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+43,"tinyriscv csr_clint_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+44,"tinyriscv csr_clint_csr_mstatus", false,-1, 31,0);
        tracep->declBus(c+160,"tinyriscv ctrl_hold_flag_o", false,-1, 2,0);
        tracep->declBit(c+34,"tinyriscv ctrl_jump_flag_o", false,-1);
        tracep->declBus(c+35,"tinyriscv ctrl_jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+45,"tinyriscv div_result_o", false,-1, 31,0);
        tracep->declBit(c+46,"tinyriscv div_ready_o", false,-1);
        tracep->declBit(c+47,"tinyriscv div_busy_o", false,-1);
        tracep->declBus(c+48,"tinyriscv div_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+49,"tinyriscv clint_we_o", false,-1);
        tracep->declBus(c+50,"tinyriscv clint_waddr_o", false,-1, 31,0);
        tracep->declBus(c+183,"tinyriscv clint_raddr_o", false,-1, 31,0);
        tracep->declBus(c+51,"tinyriscv clint_data_o", false,-1, 31,0);
        tracep->declBus(c+52,"tinyriscv clint_int_addr_o", false,-1, 31,0);
        tracep->declBit(c+53,"tinyriscv clint_int_assert_o", false,-1);
        tracep->declBit(c+182,"tinyriscv clint_hold_flag_o", false,-1);
        tracep->declBit(c+165,"tinyriscv u_pc_reg clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_pc_reg rst", false,-1);
        tracep->declBit(c+34,"tinyriscv u_pc_reg jump_flag_i", false,-1);
        tracep->declBus(c+35,"tinyriscv u_pc_reg jump_addr_i", false,-1, 31,0);
        tracep->declBus(c+160,"tinyriscv u_pc_reg hold_flag_i", false,-1, 2,0);
        tracep->declBit(c+180,"tinyriscv u_pc_reg jtag_reset_flag_i", false,-1);
        tracep->declBus(c+1,"tinyriscv u_pc_reg pc_o", false,-1, 31,0);
        tracep->declBit(c+166,"tinyriscv u_ctrl rst", false,-1);
        tracep->declBit(c+34,"tinyriscv u_ctrl jump_flag_i", false,-1);
        tracep->declBus(c+35,"tinyriscv u_ctrl jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+33,"tinyriscv u_ctrl hold_flag_ex_i", false,-1);
        tracep->declBit(c+178,"tinyriscv u_ctrl hold_flag_rib_i", false,-1);
        tracep->declBit(c+179,"tinyriscv u_ctrl jtag_halt_flag_i", false,-1);
        tracep->declBit(c+182,"tinyriscv u_ctrl hold_flag_clint_i", false,-1);
        tracep->declBus(c+160,"tinyriscv u_ctrl hold_flag_o", false,-1, 2,0);
        tracep->declBit(c+34,"tinyriscv u_ctrl jump_flag_o", false,-1);
        tracep->declBus(c+35,"tinyriscv u_ctrl jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_regs clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_regs rst", false,-1);
        tracep->declBit(c+31,"tinyriscv u_regs we_i", false,-1);
        tracep->declBus(c+32,"tinyriscv u_regs waddr_i", false,-1, 4,0);
        tracep->declBus(c+159,"tinyriscv u_regs wdata_i", false,-1, 31,0);
        tracep->declBit(c+176,"tinyriscv u_regs jtag_we_i", false,-1);
        tracep->declBus(c+174,"tinyriscv u_regs jtag_addr_i", false,-1, 4,0);
        tracep->declBus(c+175,"tinyriscv u_regs jtag_data_i", false,-1, 31,0);
        tracep->declBus(c+5,"tinyriscv u_regs raddr1_i", false,-1, 4,0);
        tracep->declBus(c+153,"tinyriscv u_regs rdata1_o", false,-1, 31,0);
        tracep->declBus(c+6,"tinyriscv u_regs raddr2_i", false,-1, 4,0);
        tracep->declBus(c+154,"tinyriscv u_regs rdata2_o", false,-1, 31,0);
        tracep->declBus(c+177,"tinyriscv u_regs jtag_data_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+54+i*1,"tinyriscv u_regs regs", true,(i+0), 31,0);}}
        tracep->declBit(c+165,"tinyriscv u_csr_reg clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_csr_reg rst", false,-1);
        tracep->declBit(c+39,"tinyriscv u_csr_reg we_i", false,-1);
        tracep->declBus(c+9,"tinyriscv u_csr_reg raddr_i", false,-1, 31,0);
        tracep->declBus(c+21,"tinyriscv u_csr_reg waddr_i", false,-1, 31,0);
        tracep->declBus(c+38,"tinyriscv u_csr_reg data_i", false,-1, 31,0);
        tracep->declBit(c+49,"tinyriscv u_csr_reg clint_we_i", false,-1);
        tracep->declBus(c+183,"tinyriscv u_csr_reg clint_raddr_i", false,-1, 31,0);
        tracep->declBus(c+50,"tinyriscv u_csr_reg clint_waddr_i", false,-1, 31,0);
        tracep->declBus(c+51,"tinyriscv u_csr_reg clint_data_i", false,-1, 31,0);
        tracep->declBit(c+41,"tinyriscv u_csr_reg global_int_en_o", false,-1);
        tracep->declBus(c+40,"tinyriscv u_csr_reg clint_data_o", false,-1, 31,0);
        tracep->declBus(c+42,"tinyriscv u_csr_reg clint_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+43,"tinyriscv u_csr_reg clint_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+44,"tinyriscv u_csr_reg clint_csr_mstatus", false,-1, 31,0);
        tracep->declBus(c+11,"tinyriscv u_csr_reg data_o", false,-1, 31,0);
        tracep->declQuad(c+86,"tinyriscv u_csr_reg cycle", false,-1, 63,0);
        tracep->declBus(c+42,"tinyriscv u_csr_reg mtvec", false,-1, 31,0);
        tracep->declBus(c+88,"tinyriscv u_csr_reg mcause", false,-1, 31,0);
        tracep->declBus(c+43,"tinyriscv u_csr_reg mepc", false,-1, 31,0);
        tracep->declBus(c+89,"tinyriscv u_csr_reg mie", false,-1, 31,0);
        tracep->declBus(c+44,"tinyriscv u_csr_reg mstatus", false,-1, 31,0);
        tracep->declBus(c+90,"tinyriscv u_csr_reg mscratch", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_if_id clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_if_id rst", false,-1);
        tracep->declBus(c+173,"tinyriscv u_if_id inst_i", false,-1, 31,0);
        tracep->declBus(c+1,"tinyriscv u_if_id inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+160,"tinyriscv u_if_id hold_flag_i", false,-1, 2,0);
        tracep->declBus(c+181,"tinyriscv u_if_id int_flag_i", false,-1, 7,0);
        tracep->declBus(c+4,"tinyriscv u_if_id int_flag_o", false,-1, 7,0);
        tracep->declBus(c+2,"tinyriscv u_if_id inst_o", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_if_id inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+161,"tinyriscv u_if_id hold_en", false,-1);
        tracep->declBus(c+2,"tinyriscv u_if_id inst", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_if_id inst_addr", false,-1, 31,0);
        tracep->declBus(c+4,"tinyriscv u_if_id int_flag", false,-1, 7,0);
        tracep->declBus(c+184,"tinyriscv u_if_id inst_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_if_id inst_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_if_id inst_ff rst", false,-1);
        tracep->declBit(c+161,"tinyriscv u_if_id inst_ff hold_en", false,-1);
        tracep->declBus(c+185,"tinyriscv u_if_id inst_ff def_val", false,-1, 31,0);
        tracep->declBus(c+173,"tinyriscv u_if_id inst_ff din", false,-1, 31,0);
        tracep->declBus(c+2,"tinyriscv u_if_id inst_ff qout", false,-1, 31,0);
        tracep->declBus(c+2,"tinyriscv u_if_id inst_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_if_id inst_addr_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_if_id inst_addr_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_if_id inst_addr_ff rst", false,-1);
        tracep->declBit(c+161,"tinyriscv u_if_id inst_addr_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_if_id inst_addr_ff def_val", false,-1, 31,0);
        tracep->declBus(c+1,"tinyriscv u_if_id inst_addr_ff din", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_if_id inst_addr_ff qout", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_if_id inst_addr_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+187,"tinyriscv u_if_id int_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_if_id int_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_if_id int_ff rst", false,-1);
        tracep->declBit(c+161,"tinyriscv u_if_id int_ff hold_en", false,-1);
        tracep->declBus(c+188,"tinyriscv u_if_id int_ff def_val", false,-1, 7,0);
        tracep->declBus(c+181,"tinyriscv u_if_id int_ff din", false,-1, 7,0);
        tracep->declBus(c+4,"tinyriscv u_if_id int_ff qout", false,-1, 7,0);
        tracep->declBus(c+4,"tinyriscv u_if_id int_ff qout_r", false,-1, 7,0);
        tracep->declBit(c+166,"tinyriscv u_id rst", false,-1);
        tracep->declBus(c+2,"tinyriscv u_id inst_i", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_id inst_addr_i", false,-1, 31,0);
        tracep->declBus(c+153,"tinyriscv u_id reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv u_id reg2_rdata_i", false,-1, 31,0);
        tracep->declBus(c+11,"tinyriscv u_id csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+34,"tinyriscv u_id ex_jump_flag_i", false,-1);
        tracep->declBus(c+5,"tinyriscv u_id reg1_raddr_o", false,-1, 4,0);
        tracep->declBus(c+6,"tinyriscv u_id reg2_raddr_o", false,-1, 4,0);
        tracep->declBus(c+9,"tinyriscv u_id csr_raddr_o", false,-1, 31,0);
        tracep->declBus(c+155,"tinyriscv u_id op1_o", false,-1, 31,0);
        tracep->declBus(c+156,"tinyriscv u_id op2_o", false,-1, 31,0);
        tracep->declBus(c+157,"tinyriscv u_id op1_jump_o", false,-1, 31,0);
        tracep->declBus(c+13,"tinyriscv u_id op2_jump_o", false,-1, 31,0);
        tracep->declBus(c+2,"tinyriscv u_id inst_o", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_id inst_addr_o", false,-1, 31,0);
        tracep->declBus(c+153,"tinyriscv u_id reg1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv u_id reg2_rdata_o", false,-1, 31,0);
        tracep->declBit(c+7,"tinyriscv u_id reg_we_o", false,-1);
        tracep->declBus(c+8,"tinyriscv u_id reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+10,"tinyriscv u_id csr_we_o", false,-1);
        tracep->declBus(c+11,"tinyriscv u_id csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+12,"tinyriscv u_id csr_waddr_o", false,-1, 31,0);
        tracep->declBus(c+91,"tinyriscv u_id opcode", false,-1, 6,0);
        tracep->declBus(c+92,"tinyriscv u_id funct3", false,-1, 2,0);
        tracep->declBus(c+93,"tinyriscv u_id funct7", false,-1, 6,0);
        tracep->declBus(c+94,"tinyriscv u_id rd", false,-1, 4,0);
        tracep->declBus(c+95,"tinyriscv u_id rs1", false,-1, 4,0);
        tracep->declBus(c+96,"tinyriscv u_id rs2", false,-1, 4,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex rst", false,-1);
        tracep->declBus(c+2,"tinyriscv u_id_ex inst_i", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_id_ex inst_addr_i", false,-1, 31,0);
        tracep->declBit(c+7,"tinyriscv u_id_ex reg_we_i", false,-1);
        tracep->declBus(c+8,"tinyriscv u_id_ex reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+153,"tinyriscv u_id_ex reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv u_id_ex reg2_rdata_i", false,-1, 31,0);
        tracep->declBit(c+10,"tinyriscv u_id_ex csr_we_i", false,-1);
        tracep->declBus(c+12,"tinyriscv u_id_ex csr_waddr_i", false,-1, 31,0);
        tracep->declBus(c+11,"tinyriscv u_id_ex csr_rdata_i", false,-1, 31,0);
        tracep->declBus(c+155,"tinyriscv u_id_ex op1_i", false,-1, 31,0);
        tracep->declBus(c+156,"tinyriscv u_id_ex op2_i", false,-1, 31,0);
        tracep->declBus(c+157,"tinyriscv u_id_ex op1_jump_i", false,-1, 31,0);
        tracep->declBus(c+13,"tinyriscv u_id_ex op2_jump_i", false,-1, 31,0);
        tracep->declBus(c+160,"tinyriscv u_id_ex hold_flag_i", false,-1, 2,0);
        tracep->declBus(c+23,"tinyriscv u_id_ex op1_o", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv u_id_ex op2_o", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv u_id_ex op1_jump_o", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv u_id_ex op2_jump_o", false,-1, 31,0);
        tracep->declBus(c+14,"tinyriscv u_id_ex inst_o", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv u_id_ex inst_addr_o", false,-1, 31,0);
        tracep->declBit(c+16,"tinyriscv u_id_ex reg_we_o", false,-1);
        tracep->declBus(c+17,"tinyriscv u_id_ex reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+18,"tinyriscv u_id_ex reg1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_id_ex reg2_rdata_o", false,-1, 31,0);
        tracep->declBit(c+20,"tinyriscv u_id_ex csr_we_o", false,-1);
        tracep->declBus(c+21,"tinyriscv u_id_ex csr_waddr_o", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv u_id_ex csr_rdata_o", false,-1, 31,0);
        tracep->declBit(c+162,"tinyriscv u_id_ex hold_en", false,-1);
        tracep->declBus(c+14,"tinyriscv u_id_ex inst", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv u_id_ex inst_addr", false,-1, 31,0);
        tracep->declBit(c+16,"tinyriscv u_id_ex reg_we", false,-1);
        tracep->declBus(c+17,"tinyriscv u_id_ex reg_waddr", false,-1, 4,0);
        tracep->declBus(c+18,"tinyriscv u_id_ex reg1_rdata", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_id_ex reg2_rdata", false,-1, 31,0);
        tracep->declBit(c+20,"tinyriscv u_id_ex csr_we", false,-1);
        tracep->declBus(c+21,"tinyriscv u_id_ex csr_waddr", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv u_id_ex csr_rdata", false,-1, 31,0);
        tracep->declBus(c+23,"tinyriscv u_id_ex op1", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv u_id_ex op2", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv u_id_ex op1_jump", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv u_id_ex op2_jump", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex inst_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex inst_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex inst_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex inst_ff hold_en", false,-1);
        tracep->declBus(c+185,"tinyriscv u_id_ex inst_ff def_val", false,-1, 31,0);
        tracep->declBus(c+2,"tinyriscv u_id_ex inst_ff din", false,-1, 31,0);
        tracep->declBus(c+14,"tinyriscv u_id_ex inst_ff qout", false,-1, 31,0);
        tracep->declBus(c+14,"tinyriscv u_id_ex inst_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex inst_addr_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex inst_addr_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex inst_addr_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex inst_addr_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex inst_addr_ff def_val", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_id_ex inst_addr_ff din", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv u_id_ex inst_addr_ff qout", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv u_id_ex inst_addr_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+189,"tinyriscv u_id_ex reg_we_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex reg_we_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex reg_we_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex reg_we_ff hold_en", false,-1);
        tracep->declBus(c+190,"tinyriscv u_id_ex reg_we_ff def_val", false,-1, 0,0);
        tracep->declBus(c+7,"tinyriscv u_id_ex reg_we_ff din", false,-1, 0,0);
        tracep->declBus(c+16,"tinyriscv u_id_ex reg_we_ff qout", false,-1, 0,0);
        tracep->declBus(c+16,"tinyriscv u_id_ex reg_we_ff qout_r", false,-1, 0,0);
        tracep->declBus(c+191,"tinyriscv u_id_ex reg_waddr_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex reg_waddr_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex reg_waddr_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex reg_waddr_ff hold_en", false,-1);
        tracep->declBus(c+192,"tinyriscv u_id_ex reg_waddr_ff def_val", false,-1, 4,0);
        tracep->declBus(c+8,"tinyriscv u_id_ex reg_waddr_ff din", false,-1, 4,0);
        tracep->declBus(c+17,"tinyriscv u_id_ex reg_waddr_ff qout", false,-1, 4,0);
        tracep->declBus(c+17,"tinyriscv u_id_ex reg_waddr_ff qout_r", false,-1, 4,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex reg1_rdata_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex reg1_rdata_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex reg1_rdata_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex reg1_rdata_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex reg1_rdata_ff def_val", false,-1, 31,0);
        tracep->declBus(c+153,"tinyriscv u_id_ex reg1_rdata_ff din", false,-1, 31,0);
        tracep->declBus(c+18,"tinyriscv u_id_ex reg1_rdata_ff qout", false,-1, 31,0);
        tracep->declBus(c+18,"tinyriscv u_id_ex reg1_rdata_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex reg2_rdata_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex reg2_rdata_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex reg2_rdata_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex reg2_rdata_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex reg2_rdata_ff def_val", false,-1, 31,0);
        tracep->declBus(c+154,"tinyriscv u_id_ex reg2_rdata_ff din", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_id_ex reg2_rdata_ff qout", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_id_ex reg2_rdata_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+189,"tinyriscv u_id_ex csr_we_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex csr_we_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex csr_we_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex csr_we_ff hold_en", false,-1);
        tracep->declBus(c+190,"tinyriscv u_id_ex csr_we_ff def_val", false,-1, 0,0);
        tracep->declBus(c+10,"tinyriscv u_id_ex csr_we_ff din", false,-1, 0,0);
        tracep->declBus(c+20,"tinyriscv u_id_ex csr_we_ff qout", false,-1, 0,0);
        tracep->declBus(c+20,"tinyriscv u_id_ex csr_we_ff qout_r", false,-1, 0,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex csr_waddr_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex csr_waddr_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex csr_waddr_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex csr_waddr_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex csr_waddr_ff def_val", false,-1, 31,0);
        tracep->declBus(c+12,"tinyriscv u_id_ex csr_waddr_ff din", false,-1, 31,0);
        tracep->declBus(c+21,"tinyriscv u_id_ex csr_waddr_ff qout", false,-1, 31,0);
        tracep->declBus(c+21,"tinyriscv u_id_ex csr_waddr_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex csr_rdata_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex csr_rdata_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex csr_rdata_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex csr_rdata_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex csr_rdata_ff def_val", false,-1, 31,0);
        tracep->declBus(c+11,"tinyriscv u_id_ex csr_rdata_ff din", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv u_id_ex csr_rdata_ff qout", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv u_id_ex csr_rdata_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex op1_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex op1_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex op1_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex op1_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex op1_ff def_val", false,-1, 31,0);
        tracep->declBus(c+155,"tinyriscv u_id_ex op1_ff din", false,-1, 31,0);
        tracep->declBus(c+23,"tinyriscv u_id_ex op1_ff qout", false,-1, 31,0);
        tracep->declBus(c+23,"tinyriscv u_id_ex op1_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex op2_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex op2_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex op2_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex op2_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex op2_ff def_val", false,-1, 31,0);
        tracep->declBus(c+156,"tinyriscv u_id_ex op2_ff din", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv u_id_ex op2_ff qout", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv u_id_ex op2_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex op1_jump_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex op1_jump_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex op1_jump_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex op1_jump_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex op1_jump_ff def_val", false,-1, 31,0);
        tracep->declBus(c+157,"tinyriscv u_id_ex op1_jump_ff din", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv u_id_ex op1_jump_ff qout", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv u_id_ex op1_jump_ff qout_r", false,-1, 31,0);
        tracep->declBus(c+184,"tinyriscv u_id_ex op2_jump_ff DW", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_id_ex op2_jump_ff clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_id_ex op2_jump_ff rst", false,-1);
        tracep->declBit(c+162,"tinyriscv u_id_ex op2_jump_ff hold_en", false,-1);
        tracep->declBus(c+186,"tinyriscv u_id_ex op2_jump_ff def_val", false,-1, 31,0);
        tracep->declBus(c+13,"tinyriscv u_id_ex op2_jump_ff din", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv u_id_ex op2_jump_ff qout", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv u_id_ex op2_jump_ff qout_r", false,-1, 31,0);
        tracep->declBit(c+166,"tinyriscv u_ex rst", false,-1);
        tracep->declBus(c+14,"tinyriscv u_ex inst_i", false,-1, 31,0);
        tracep->declBus(c+15,"tinyriscv u_ex inst_addr_i", false,-1, 31,0);
        tracep->declBit(c+16,"tinyriscv u_ex reg_we_i", false,-1);
        tracep->declBus(c+17,"tinyriscv u_ex reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+18,"tinyriscv u_ex reg1_rdata_i", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_ex reg2_rdata_i", false,-1, 31,0);
        tracep->declBit(c+20,"tinyriscv u_ex csr_we_i", false,-1);
        tracep->declBus(c+21,"tinyriscv u_ex csr_waddr_i", false,-1, 31,0);
        tracep->declBus(c+22,"tinyriscv u_ex csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+53,"tinyriscv u_ex int_assert_i", false,-1);
        tracep->declBus(c+52,"tinyriscv u_ex int_addr_i", false,-1, 31,0);
        tracep->declBus(c+23,"tinyriscv u_ex op1_i", false,-1, 31,0);
        tracep->declBus(c+24,"tinyriscv u_ex op2_i", false,-1, 31,0);
        tracep->declBus(c+25,"tinyriscv u_ex op1_jump_i", false,-1, 31,0);
        tracep->declBus(c+26,"tinyriscv u_ex op2_jump_i", false,-1, 31,0);
        tracep->declBus(c+168,"tinyriscv u_ex mem_rdata_i", false,-1, 31,0);
        tracep->declBit(c+46,"tinyriscv u_ex div_ready_i", false,-1);
        tracep->declBus(c+45,"tinyriscv u_ex div_result_i", false,-1, 31,0);
        tracep->declBit(c+47,"tinyriscv u_ex div_busy_i", false,-1);
        tracep->declBus(c+48,"tinyriscv u_ex div_reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+158,"tinyriscv u_ex mem_wdata_o", false,-1, 31,0);
        tracep->declBus(c+27,"tinyriscv u_ex mem_raddr_o", false,-1, 31,0);
        tracep->declBus(c+28,"tinyriscv u_ex mem_waddr_o", false,-1, 31,0);
        tracep->declBit(c+29,"tinyriscv u_ex mem_we_o", false,-1);
        tracep->declBit(c+30,"tinyriscv u_ex mem_req_o", false,-1);
        tracep->declBus(c+159,"tinyriscv u_ex reg_wdata_o", false,-1, 31,0);
        tracep->declBit(c+31,"tinyriscv u_ex reg_we_o", false,-1);
        tracep->declBus(c+32,"tinyriscv u_ex reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+38,"tinyriscv u_ex csr_wdata_o", false,-1, 31,0);
        tracep->declBit(c+39,"tinyriscv u_ex csr_we_o", false,-1);
        tracep->declBus(c+21,"tinyriscv u_ex csr_waddr_o", false,-1, 31,0);
        tracep->declBit(c+36,"tinyriscv u_ex div_start_o", false,-1);
        tracep->declBus(c+18,"tinyriscv u_ex div_dividend_o", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_ex div_divisor_o", false,-1, 31,0);
        tracep->declBus(c+37,"tinyriscv u_ex div_op_o", false,-1, 2,0);
        tracep->declBus(c+17,"tinyriscv u_ex div_reg_waddr_o", false,-1, 4,0);
        tracep->declBit(c+33,"tinyriscv u_ex hold_flag_o", false,-1);
        tracep->declBit(c+34,"tinyriscv u_ex jump_flag_o", false,-1);
        tracep->declBus(c+35,"tinyriscv u_ex jump_addr_o", false,-1, 31,0);
        tracep->declBus(c+97,"tinyriscv u_ex mem_raddr_index", false,-1, 1,0);
        tracep->declBus(c+98,"tinyriscv u_ex mem_waddr_index", false,-1, 1,0);
        tracep->declQuad(c+99,"tinyriscv u_ex mul_temp", false,-1, 63,0);
        tracep->declQuad(c+101,"tinyriscv u_ex mul_temp_invert", false,-1, 63,0);
        tracep->declBus(c+103,"tinyriscv u_ex sr_shift", false,-1, 31,0);
        tracep->declBus(c+104,"tinyriscv u_ex sri_shift", false,-1, 31,0);
        tracep->declBus(c+105,"tinyriscv u_ex sr_shift_mask", false,-1, 31,0);
        tracep->declBus(c+106,"tinyriscv u_ex sri_shift_mask", false,-1, 31,0);
        tracep->declBus(c+107,"tinyriscv u_ex op1_add_op2_res", false,-1, 31,0);
        tracep->declBus(c+108,"tinyriscv u_ex op1_jump_add_op2_jump_res", false,-1, 31,0);
        tracep->declBus(c+109,"tinyriscv u_ex reg1_data_invert", false,-1, 31,0);
        tracep->declBus(c+110,"tinyriscv u_ex reg2_data_invert", false,-1, 31,0);
        tracep->declBit(c+111,"tinyriscv u_ex op1_ge_op2_signed", false,-1);
        tracep->declBit(c+112,"tinyriscv u_ex op1_ge_op2_unsigned", false,-1);
        tracep->declBit(c+113,"tinyriscv u_ex op1_eq_op2", false,-1);
        tracep->declBus(c+114,"tinyriscv u_ex mul_op1", false,-1, 31,0);
        tracep->declBus(c+115,"tinyriscv u_ex mul_op2", false,-1, 31,0);
        tracep->declBus(c+116,"tinyriscv u_ex opcode", false,-1, 6,0);
        tracep->declBus(c+37,"tinyriscv u_ex funct3", false,-1, 2,0);
        tracep->declBus(c+117,"tinyriscv u_ex funct7", false,-1, 6,0);
        tracep->declBus(c+118,"tinyriscv u_ex rd", false,-1, 4,0);
        tracep->declBus(c+119,"tinyriscv u_ex uimm", false,-1, 4,0);
        tracep->declBus(c+163,"tinyriscv u_ex reg_wdata", false,-1, 31,0);
        tracep->declBit(c+16,"tinyriscv u_ex reg_we", false,-1);
        tracep->declBus(c+17,"tinyriscv u_ex reg_waddr", false,-1, 4,0);
        tracep->declBus(c+120,"tinyriscv u_ex div_wdata", false,-1, 31,0);
        tracep->declBit(c+121,"tinyriscv u_ex div_we", false,-1);
        tracep->declBus(c+122,"tinyriscv u_ex div_waddr", false,-1, 4,0);
        tracep->declBit(c+123,"tinyriscv u_ex div_hold_flag", false,-1);
        tracep->declBit(c+124,"tinyriscv u_ex div_jump_flag", false,-1);
        tracep->declBus(c+125,"tinyriscv u_ex div_jump_addr", false,-1, 31,0);
        tracep->declBit(c+126,"tinyriscv u_ex hold_flag", false,-1);
        tracep->declBit(c+127,"tinyriscv u_ex jump_flag", false,-1);
        tracep->declBus(c+128,"tinyriscv u_ex jump_addr", false,-1, 31,0);
        tracep->declBit(c+129,"tinyriscv u_ex mem_we", false,-1);
        tracep->declBit(c+130,"tinyriscv u_ex mem_req", false,-1);
        tracep->declBit(c+123,"tinyriscv u_ex div_start", false,-1);
        tracep->declBit(c+165,"tinyriscv u_div clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_div rst", false,-1);
        tracep->declBus(c+18,"tinyriscv u_div dividend_i", false,-1, 31,0);
        tracep->declBus(c+19,"tinyriscv u_div divisor_i", false,-1, 31,0);
        tracep->declBit(c+36,"tinyriscv u_div start_i", false,-1);
        tracep->declBus(c+37,"tinyriscv u_div op_i", false,-1, 2,0);
        tracep->declBus(c+17,"tinyriscv u_div reg_waddr_i", false,-1, 4,0);
        tracep->declBus(c+45,"tinyriscv u_div result_o", false,-1, 31,0);
        tracep->declBit(c+46,"tinyriscv u_div ready_o", false,-1);
        tracep->declBit(c+47,"tinyriscv u_div busy_o", false,-1);
        tracep->declBus(c+48,"tinyriscv u_div reg_waddr_o", false,-1, 4,0);
        tracep->declBus(c+193,"tinyriscv u_div STATE_IDLE", false,-1, 3,0);
        tracep->declBus(c+194,"tinyriscv u_div STATE_START", false,-1, 3,0);
        tracep->declBus(c+195,"tinyriscv u_div STATE_CALC", false,-1, 3,0);
        tracep->declBus(c+196,"tinyriscv u_div STATE_END", false,-1, 3,0);
        tracep->declBus(c+131,"tinyriscv u_div dividend_r", false,-1, 31,0);
        tracep->declBus(c+132,"tinyriscv u_div divisor_r", false,-1, 31,0);
        tracep->declBus(c+133,"tinyriscv u_div op_r", false,-1, 2,0);
        tracep->declBus(c+134,"tinyriscv u_div state", false,-1, 3,0);
        tracep->declBus(c+135,"tinyriscv u_div count", false,-1, 31,0);
        tracep->declBus(c+136,"tinyriscv u_div div_result", false,-1, 31,0);
        tracep->declBus(c+137,"tinyriscv u_div div_remain", false,-1, 31,0);
        tracep->declBus(c+138,"tinyriscv u_div minuend", false,-1, 31,0);
        tracep->declBit(c+139,"tinyriscv u_div invert_result", false,-1);
        tracep->declBit(c+140,"tinyriscv u_div op_div", false,-1);
        tracep->declBit(c+141,"tinyriscv u_div op_divu", false,-1);
        tracep->declBit(c+142,"tinyriscv u_div op_rem", false,-1);
        tracep->declBit(c+143,"tinyriscv u_div op_remu", false,-1);
        tracep->declBus(c+144,"tinyriscv u_div dividend_invert", false,-1, 31,0);
        tracep->declBus(c+145,"tinyriscv u_div divisor_invert", false,-1, 31,0);
        tracep->declBit(c+146,"tinyriscv u_div minuend_ge_divisor", false,-1);
        tracep->declBus(c+147,"tinyriscv u_div minuend_sub_res", false,-1, 31,0);
        tracep->declBus(c+148,"tinyriscv u_div div_result_tmp", false,-1, 31,0);
        tracep->declBus(c+149,"tinyriscv u_div minuend_tmp", false,-1, 31,0);
        tracep->declBit(c+165,"tinyriscv u_clint clk", false,-1);
        tracep->declBit(c+166,"tinyriscv u_clint rst", false,-1);
        tracep->declBus(c+4,"tinyriscv u_clint int_flag_i", false,-1, 7,0);
        tracep->declBus(c+2,"tinyriscv u_clint inst_i", false,-1, 31,0);
        tracep->declBus(c+3,"tinyriscv u_clint inst_addr_i", false,-1, 31,0);
        tracep->declBit(c+34,"tinyriscv u_clint jump_flag_i", false,-1);
        tracep->declBus(c+35,"tinyriscv u_clint jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+36,"tinyriscv u_clint div_started_i", false,-1);
        tracep->declBus(c+160,"tinyriscv u_clint hold_flag_i", false,-1, 2,0);
        tracep->declBus(c+40,"tinyriscv u_clint data_i", false,-1, 31,0);
        tracep->declBus(c+42,"tinyriscv u_clint csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+43,"tinyriscv u_clint csr_mepc", false,-1, 31,0);
        tracep->declBus(c+44,"tinyriscv u_clint csr_mstatus", false,-1, 31,0);
        tracep->declBit(c+41,"tinyriscv u_clint global_int_en_i", false,-1);
        tracep->declBit(c+182,"tinyriscv u_clint hold_flag_o", false,-1);
        tracep->declBit(c+49,"tinyriscv u_clint we_o", false,-1);
        tracep->declBus(c+50,"tinyriscv u_clint waddr_o", false,-1, 31,0);
        tracep->declBus(c+183,"tinyriscv u_clint raddr_o", false,-1, 31,0);
        tracep->declBus(c+51,"tinyriscv u_clint data_o", false,-1, 31,0);
        tracep->declBus(c+52,"tinyriscv u_clint int_addr_o", false,-1, 31,0);
        tracep->declBit(c+53,"tinyriscv u_clint int_assert_o", false,-1);
        tracep->declBus(c+193,"tinyriscv u_clint S_INT_IDLE", false,-1, 3,0);
        tracep->declBus(c+194,"tinyriscv u_clint S_INT_SYNC_ASSERT", false,-1, 3,0);
        tracep->declBus(c+195,"tinyriscv u_clint S_INT_ASYNC_ASSERT", false,-1, 3,0);
        tracep->declBus(c+196,"tinyriscv u_clint S_INT_MRET", false,-1, 3,0);
        tracep->declBus(c+197,"tinyriscv u_clint S_CSR_IDLE", false,-1, 4,0);
        tracep->declBus(c+198,"tinyriscv u_clint S_CSR_MSTATUS", false,-1, 4,0);
        tracep->declBus(c+199,"tinyriscv u_clint S_CSR_MEPC", false,-1, 4,0);
        tracep->declBus(c+200,"tinyriscv u_clint S_CSR_MSTATUS_MRET", false,-1, 4,0);
        tracep->declBus(c+201,"tinyriscv u_clint S_CSR_MCAUSE", false,-1, 4,0);
        tracep->declBus(c+164,"tinyriscv u_clint int_state", false,-1, 3,0);
        tracep->declBus(c+150,"tinyriscv u_clint csr_state", false,-1, 4,0);
        tracep->declBus(c+151,"tinyriscv u_clint inst_addr", false,-1, 31,0);
        tracep->declBus(c+152,"tinyriscv u_clint cause", false,-1, 31,0);
    }
}

void Vtinyriscv___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtinyriscv___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtinyriscv___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtinyriscv___024root__traceRegister(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtinyriscv___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtinyriscv___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtinyriscv___024root__traceCleanup, vlSelf);
    }
}

void Vtinyriscv___024root__traceFullSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtinyriscv___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtinyriscv___024root* const __restrict vlSelf = static_cast<Vtinyriscv___024root*>(voidSelf);
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtinyriscv___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtinyriscv___024root__traceFullSub0(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->tinyriscv__DOT__pc_pc_o),32);
        tracep->fullIData(oldp+2,(vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+3,(vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_addr_ff__DOT__qout_r),32);
        tracep->fullCData(oldp+4,(vlSelf->tinyriscv__DOT__u_if_id__DOT__int_ff__DOT__qout_r),8);
        tracep->fullCData(oldp+5,(vlSelf->tinyriscv__DOT__id_reg1_raddr_o),5);
        tracep->fullCData(oldp+6,(vlSelf->tinyriscv__DOT__id_reg2_raddr_o),5);
        tracep->fullBit(oldp+7,(vlSelf->tinyriscv__DOT__id_reg_we_o));
        tracep->fullCData(oldp+8,(vlSelf->tinyriscv__DOT__id_reg_waddr_o),5);
        tracep->fullIData(oldp+9,(vlSelf->tinyriscv__DOT__id_csr_raddr_o),32);
        tracep->fullBit(oldp+10,(vlSelf->tinyriscv__DOT__id_csr_we_o));
        tracep->fullIData(oldp+11,(vlSelf->tinyriscv__DOT__csr_data_o),32);
        tracep->fullIData(oldp+12,(vlSelf->tinyriscv__DOT__id_csr_waddr_o),32);
        tracep->fullIData(oldp+13,(vlSelf->tinyriscv__DOT__id_op2_jump_o),32);
        tracep->fullIData(oldp+14,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+15,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_addr_ff__DOT__qout_r),32);
        tracep->fullBit(oldp+16,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_we_ff__DOT__qout_r));
        tracep->fullCData(oldp+17,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg_waddr_ff__DOT__qout_r),5);
        tracep->fullIData(oldp+18,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+19,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r),32);
        tracep->fullBit(oldp+20,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_we_ff__DOT__qout_r));
        tracep->fullIData(oldp+21,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_waddr_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+22,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__csr_rdata_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+23,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+24,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+25,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op1_jump_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+26,(vlSelf->tinyriscv__DOT__u_id_ex__DOT__op2_jump_ff__DOT__qout_r),32);
        tracep->fullIData(oldp+27,(vlSelf->tinyriscv__DOT__ex_mem_raddr_o),32);
        tracep->fullIData(oldp+28,(vlSelf->tinyriscv__DOT__ex_mem_waddr_o),32);
        tracep->fullBit(oldp+29,(vlSelf->tinyriscv__DOT__ex_mem_we_o));
        tracep->fullBit(oldp+30,(((~ (IData)(vlSelf->tinyriscv__DOT__clint_int_assert_o)) 
                                  & (IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req))));
        tracep->fullBit(oldp+31,(vlSelf->tinyriscv__DOT__ex_reg_we_o));
        tracep->fullCData(oldp+32,(vlSelf->tinyriscv__DOT__ex_reg_waddr_o),5);
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag) 
                                        | (((0x33U 
                                             == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                            & (1U == 
                                               (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                            ? (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                               >> 0xeU)
                                            : (IData)(vlSelf->tinyriscv__DOT__div_busy_o))))));
        tracep->fullBit(oldp+34,(vlSelf->tinyriscv__DOT__ex_jump_flag_o));
        tracep->fullIData(oldp+35,(vlSelf->tinyriscv__DOT__ex_jump_addr_o),32);
        tracep->fullBit(oldp+36,(vlSelf->tinyriscv__DOT__ex_div_start_o));
        tracep->fullCData(oldp+37,((7U & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullIData(oldp+38,(vlSelf->tinyriscv__DOT__ex_csr_wdata_o),32);
        tracep->fullBit(oldp+39,(vlSelf->tinyriscv__DOT__ex_csr_we_o));
        tracep->fullIData(oldp+40,(vlSelf->tinyriscv__DOT__csr_clint_data_o),32);
        tracep->fullBit(oldp+41,((1U & (vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus 
                                        >> 3U))));
        tracep->fullIData(oldp+42,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mtvec),32);
        tracep->fullIData(oldp+43,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mepc),32);
        tracep->fullIData(oldp+44,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mstatus),32);
        tracep->fullIData(oldp+45,(vlSelf->tinyriscv__DOT__div_result_o),32);
        tracep->fullBit(oldp+46,(vlSelf->tinyriscv__DOT__div_ready_o));
        tracep->fullBit(oldp+47,(vlSelf->tinyriscv__DOT__div_busy_o));
        tracep->fullCData(oldp+48,(vlSelf->tinyriscv__DOT__div_reg_waddr_o),5);
        tracep->fullBit(oldp+49,(vlSelf->tinyriscv__DOT__clint_we_o));
        tracep->fullIData(oldp+50,(vlSelf->tinyriscv__DOT__clint_waddr_o),32);
        tracep->fullIData(oldp+51,(vlSelf->tinyriscv__DOT__clint_data_o),32);
        tracep->fullIData(oldp+52,(vlSelf->tinyriscv__DOT__clint_int_addr_o),32);
        tracep->fullBit(oldp+53,(vlSelf->tinyriscv__DOT__clint_int_assert_o));
        tracep->fullIData(oldp+54,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[0]),32);
        tracep->fullIData(oldp+55,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[1]),32);
        tracep->fullIData(oldp+56,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[2]),32);
        tracep->fullIData(oldp+57,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[3]),32);
        tracep->fullIData(oldp+58,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[4]),32);
        tracep->fullIData(oldp+59,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[5]),32);
        tracep->fullIData(oldp+60,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[6]),32);
        tracep->fullIData(oldp+61,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[7]),32);
        tracep->fullIData(oldp+62,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[8]),32);
        tracep->fullIData(oldp+63,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[9]),32);
        tracep->fullIData(oldp+64,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[10]),32);
        tracep->fullIData(oldp+65,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[11]),32);
        tracep->fullIData(oldp+66,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[12]),32);
        tracep->fullIData(oldp+67,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[13]),32);
        tracep->fullIData(oldp+68,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[14]),32);
        tracep->fullIData(oldp+69,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[15]),32);
        tracep->fullIData(oldp+70,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[16]),32);
        tracep->fullIData(oldp+71,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[17]),32);
        tracep->fullIData(oldp+72,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[18]),32);
        tracep->fullIData(oldp+73,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[19]),32);
        tracep->fullIData(oldp+74,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[20]),32);
        tracep->fullIData(oldp+75,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[21]),32);
        tracep->fullIData(oldp+76,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[22]),32);
        tracep->fullIData(oldp+77,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[23]),32);
        tracep->fullIData(oldp+78,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[24]),32);
        tracep->fullIData(oldp+79,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[25]),32);
        tracep->fullIData(oldp+80,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[26]),32);
        tracep->fullIData(oldp+81,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[27]),32);
        tracep->fullIData(oldp+82,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[28]),32);
        tracep->fullIData(oldp+83,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[29]),32);
        tracep->fullIData(oldp+84,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[30]),32);
        tracep->fullIData(oldp+85,(vlSelf->tinyriscv__DOT__u_regs__DOT__regs[31]),32);
        tracep->fullQData(oldp+86,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__cycle),64);
        tracep->fullIData(oldp+88,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mcause),32);
        tracep->fullIData(oldp+89,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mie),32);
        tracep->fullIData(oldp+90,(vlSelf->tinyriscv__DOT__u_csr_reg__DOT__mscratch),32);
        tracep->fullCData(oldp+91,((0x7fU & vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r)),7);
        tracep->fullCData(oldp+92,((7U & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+93,((vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+94,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullCData(oldp+95,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+96,((0x1fU & (vlSelf->tinyriscv__DOT__u_if_id__DOT__inst_ff__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+97,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_raddr_index),2);
        tracep->fullCData(oldp+98,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_waddr_index),2);
        tracep->fullQData(oldp+99,(vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp),64);
        tracep->fullQData(oldp+101,((1ULL + (~ vlSelf->tinyriscv__DOT__u_ex__DOT__mul_temp))),64);
        tracep->fullIData(oldp+103,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                     >> (0x1fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
        tracep->fullIData(oldp+104,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r 
                                     >> (0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                  >> 0x14U)))),32);
        tracep->fullIData(oldp+105,((0xffffffffU >> 
                                     (0x1fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
        tracep->fullIData(oldp+106,((0xffffffffU >> 
                                     (0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                               >> 0x14U)))),32);
        tracep->fullIData(oldp+107,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_add_op2_res),32);
        tracep->fullIData(oldp+108,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res),32);
        tracep->fullIData(oldp+109,(((IData)(1U) + 
                                     (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r))),32);
        tracep->fullIData(oldp+110,(((IData)(1U) + 
                                     (~ vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r))),32);
        tracep->fullBit(oldp+111,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_signed));
        tracep->fullBit(oldp+112,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_ge_op2_unsigned));
        tracep->fullBit(oldp+113,(vlSelf->tinyriscv__DOT__u_ex__DOT__op1_eq_op2));
        tracep->fullIData(oldp+114,((((0x33U == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                      & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                      ? ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg1_rdata_ff__DOT__qout_r
                                          : ((0x2000U 
                                              & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                              ? ((0x1000U 
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
                                              : ((0x1000U 
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
        tracep->fullIData(oldp+115,((((0x33U == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                      & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                      ? ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                          : ((0x2000U 
                                              & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                              ? vlSelf->tinyriscv__DOT__u_id_ex__DOT__reg2_rdata_ff__DOT__qout_r
                                              : ((0x1000U 
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
        tracep->fullCData(oldp+116,((0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)),7);
        tracep->fullCData(oldp+117,((vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+118,((0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 7U))),5);
        tracep->fullCData(oldp+119,((0x1fU & (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0xfU))),5);
        tracep->fullIData(oldp+120,((((0x33U == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                      & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                      ? 0U : ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                               ? 0U
                                               : ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                   ? vlSelf->tinyriscv__DOT__div_result_o
                                                   : 0U)))),32);
        tracep->fullBit(oldp+121,(((~ ((0x33U == (0x7fU 
                                                  & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                       & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                 >> 0x19U)))) 
                                   & ((~ (IData)(vlSelf->tinyriscv__DOT__div_busy_o)) 
                                      & (IData)(vlSelf->tinyriscv__DOT__div_ready_o)))));
        tracep->fullCData(oldp+122,((((0x33U == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                      & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                      ? 0U : ((IData)(vlSelf->tinyriscv__DOT__div_busy_o)
                                               ? 0U
                                               : ((IData)(vlSelf->tinyriscv__DOT__div_ready_o)
                                                   ? (IData)(vlSelf->tinyriscv__DOT__div_reg_waddr_o)
                                                   : 0U)))),5);
        tracep->fullBit(oldp+123,((1U & (((0x33U == 
                                           (0x7fU & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                          & (1U == 
                                             (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                              >> 0x19U)))
                                          ? (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                             >> 0xeU)
                                          : (IData)(vlSelf->tinyriscv__DOT__div_busy_o)))));
        tracep->fullBit(oldp+124,((IData)(((0x4033U 
                                            == (0x407fU 
                                                & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                           & (1U == 
                                              (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                               >> 0x19U))))));
        tracep->fullIData(oldp+125,((((0x33U == (0x7fU 
                                                 & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)) 
                                      & (1U == (vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r 
                                                >> 0x19U)))
                                      ? ((0x4000U & vlSelf->tinyriscv__DOT__u_id_ex__DOT__inst_ff__DOT__qout_r)
                                          ? vlSelf->tinyriscv__DOT__u_ex__DOT__op1_jump_add_op2_jump_res
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+126,(vlSelf->tinyriscv__DOT__u_ex__DOT__hold_flag));
        tracep->fullBit(oldp+127,(vlSelf->tinyriscv__DOT__u_ex__DOT__jump_flag));
        tracep->fullIData(oldp+128,(vlSelf->tinyriscv__DOT__u_ex__DOT__jump_addr),32);
        tracep->fullBit(oldp+129,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_we));
        tracep->fullBit(oldp+130,(vlSelf->tinyriscv__DOT__u_ex__DOT__mem_req));
        tracep->fullIData(oldp+131,(vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r),32);
        tracep->fullIData(oldp+132,(vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r),32);
        tracep->fullCData(oldp+133,(vlSelf->tinyriscv__DOT__u_div__DOT__op_r),3);
        tracep->fullCData(oldp+134,(vlSelf->tinyriscv__DOT__u_div__DOT__state),4);
        tracep->fullIData(oldp+135,(vlSelf->tinyriscv__DOT__u_div__DOT__count),32);
        tracep->fullIData(oldp+136,(vlSelf->tinyriscv__DOT__u_div__DOT__div_result),32);
        tracep->fullIData(oldp+137,(vlSelf->tinyriscv__DOT__u_div__DOT__div_remain),32);
        tracep->fullIData(oldp+138,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend),32);
        tracep->fullBit(oldp+139,(vlSelf->tinyriscv__DOT__u_div__DOT__invert_result));
        tracep->fullBit(oldp+140,((4U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
        tracep->fullBit(oldp+141,((5U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
        tracep->fullBit(oldp+142,((6U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
        tracep->fullBit(oldp+143,((7U == (IData)(vlSelf->tinyriscv__DOT__u_div__DOT__op_r))));
        tracep->fullIData(oldp+144,((- vlSelf->tinyriscv__DOT__u_div__DOT__dividend_r)),32);
        tracep->fullIData(oldp+145,((- vlSelf->tinyriscv__DOT__u_div__DOT__divisor_r)),32);
        tracep->fullBit(oldp+146,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor));
        tracep->fullIData(oldp+147,(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res),32);
        tracep->fullIData(oldp+148,(((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor)
                                      ? (1U | (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
                                               << 1U))
                                      : (vlSelf->tinyriscv__DOT__u_div__DOT__div_result 
                                         << 1U))),32);
        tracep->fullIData(oldp+149,(((IData)(vlSelf->tinyriscv__DOT__u_div__DOT__minuend_ge_divisor)
                                      ? (0x7fffffffU 
                                         & vlSelf->tinyriscv__DOT__u_div__DOT__minuend_sub_res)
                                      : (0x7fffffffU 
                                         & vlSelf->tinyriscv__DOT__u_div__DOT__minuend))),32);
        tracep->fullCData(oldp+150,(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state),5);
        tracep->fullIData(oldp+151,(vlSelf->tinyriscv__DOT__u_clint__DOT__inst_addr),32);
        tracep->fullIData(oldp+152,(vlSelf->tinyriscv__DOT__u_clint__DOT__cause),32);
        tracep->fullIData(oldp+153,(vlSelf->tinyriscv__DOT__regs_rdata1_o),32);
        tracep->fullIData(oldp+154,(vlSelf->tinyriscv__DOT__regs_rdata2_o),32);
        tracep->fullIData(oldp+155,(vlSelf->tinyriscv__DOT__id_op1_o),32);
        tracep->fullIData(oldp+156,(vlSelf->tinyriscv__DOT__id_op2_o),32);
        tracep->fullIData(oldp+157,(vlSelf->tinyriscv__DOT__id_op1_jump_o),32);
        tracep->fullIData(oldp+158,(vlSelf->tinyriscv__DOT__ex_mem_wdata_o),32);
        tracep->fullIData(oldp+159,(vlSelf->tinyriscv__DOT__ex_reg_wdata_o),32);
        tracep->fullCData(oldp+160,(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o),3);
        tracep->fullBit(oldp+161,((2U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))));
        tracep->fullBit(oldp+162,((3U <= (IData)(vlSelf->tinyriscv__DOT__ctrl_hold_flag_o))));
        tracep->fullIData(oldp+163,(vlSelf->tinyriscv__DOT__u_ex__DOT__reg_wdata),32);
        tracep->fullCData(oldp+164,(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state),4);
        tracep->fullBit(oldp+165,(vlSelf->clk));
        tracep->fullBit(oldp+166,(vlSelf->rst));
        tracep->fullIData(oldp+167,(vlSelf->rib_ex_addr_o),32);
        tracep->fullIData(oldp+168,(vlSelf->rib_ex_data_i),32);
        tracep->fullIData(oldp+169,(vlSelf->rib_ex_data_o),32);
        tracep->fullBit(oldp+170,(vlSelf->rib_ex_req_o));
        tracep->fullBit(oldp+171,(vlSelf->rib_ex_we_o));
        tracep->fullIData(oldp+172,(vlSelf->rib_pc_addr_o),32);
        tracep->fullIData(oldp+173,(vlSelf->rib_pc_data_i),32);
        tracep->fullCData(oldp+174,(vlSelf->jtag_reg_addr_i),5);
        tracep->fullIData(oldp+175,(vlSelf->jtag_reg_data_i),32);
        tracep->fullBit(oldp+176,(vlSelf->jtag_reg_we_i));
        tracep->fullIData(oldp+177,(vlSelf->jtag_reg_data_o),32);
        tracep->fullBit(oldp+178,(vlSelf->rib_hold_flag_i));
        tracep->fullBit(oldp+179,(vlSelf->jtag_halt_flag_i));
        tracep->fullBit(oldp+180,(vlSelf->jtag_reset_flag_i));
        tracep->fullCData(oldp+181,(vlSelf->int_i),8);
        tracep->fullBit(oldp+182,(((1U != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__int_state)) 
                                   | (1U != (IData)(vlSelf->tinyriscv__DOT__u_clint__DOT__csr_state)))));
        tracep->fullIData(oldp+183,(vlSelf->tinyriscv__DOT__clint_raddr_o),32);
        tracep->fullIData(oldp+184,(0x20U),32);
        tracep->fullIData(oldp+185,(1U),32);
        tracep->fullIData(oldp+186,(0U),32);
        tracep->fullIData(oldp+187,(8U),32);
        tracep->fullCData(oldp+188,(0U),8);
        tracep->fullIData(oldp+189,(1U),32);
        tracep->fullBit(oldp+190,(0U));
        tracep->fullIData(oldp+191,(5U),32);
        tracep->fullCData(oldp+192,(0U),5);
        tracep->fullCData(oldp+193,(1U),4);
        tracep->fullCData(oldp+194,(2U),4);
        tracep->fullCData(oldp+195,(4U),4);
        tracep->fullCData(oldp+196,(8U),4);
        tracep->fullCData(oldp+197,(1U),5);
        tracep->fullCData(oldp+198,(2U),5);
        tracep->fullCData(oldp+199,(4U),5);
        tracep->fullCData(oldp+200,(8U),5);
        tracep->fullCData(oldp+201,(0x10U),5);
    }
}
