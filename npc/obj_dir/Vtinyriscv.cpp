// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtinyriscv.h"
#include "Vtinyriscv__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtinyriscv::Vtinyriscv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtinyriscv__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , rib_ex_addr_o{vlSymsp->TOP.rib_ex_addr_o}
    , rib_ex_data_i{vlSymsp->TOP.rib_ex_data_i}
    , rib_ex_data_o{vlSymsp->TOP.rib_ex_data_o}
    , rib_ex_req_o{vlSymsp->TOP.rib_ex_req_o}
    , rib_ex_we_o{vlSymsp->TOP.rib_ex_we_o}
    , rib_pc_addr_o{vlSymsp->TOP.rib_pc_addr_o}
    , rib_pc_data_i{vlSymsp->TOP.rib_pc_data_i}
    , jtag_reg_addr_i{vlSymsp->TOP.jtag_reg_addr_i}
    , jtag_reg_data_i{vlSymsp->TOP.jtag_reg_data_i}
    , jtag_reg_we_i{vlSymsp->TOP.jtag_reg_we_i}
    , jtag_reg_data_o{vlSymsp->TOP.jtag_reg_data_o}
    , rib_hold_flag_i{vlSymsp->TOP.rib_hold_flag_i}
    , jtag_halt_flag_i{vlSymsp->TOP.jtag_halt_flag_i}
    , jtag_reset_flag_i{vlSymsp->TOP.jtag_reset_flag_i}
    , int_i{vlSymsp->TOP.int_i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtinyriscv::Vtinyriscv(const char* _vcname__)
    : Vtinyriscv(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtinyriscv::~Vtinyriscv() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtinyriscv___024root___eval_initial(Vtinyriscv___024root* vlSelf);
void Vtinyriscv___024root___eval_settle(Vtinyriscv___024root* vlSelf);
void Vtinyriscv___024root___eval(Vtinyriscv___024root* vlSelf);
QData Vtinyriscv___024root___change_request(Vtinyriscv___024root* vlSelf);
#ifdef VL_DEBUG
void Vtinyriscv___024root___eval_debug_assertions(Vtinyriscv___024root* vlSelf);
#endif  // VL_DEBUG
void Vtinyriscv___024root___final(Vtinyriscv___024root* vlSelf);

static void _eval_initial_loop(Vtinyriscv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtinyriscv___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtinyriscv___024root___eval_settle(&(vlSymsp->TOP));
        Vtinyriscv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtinyriscv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lishi/ysyx-workbench/npc/vsrc/core/tinyriscv.v", 20, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtinyriscv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtinyriscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtinyriscv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtinyriscv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtinyriscv___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtinyriscv___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/lishi/ysyx-workbench/npc/vsrc/core/tinyriscv.v", 20, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtinyriscv___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtinyriscv::final() {
    Vtinyriscv___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtinyriscv::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtinyriscv::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtinyriscv___024root__traceInitTop(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtinyriscv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtinyriscv___024root*>(voidSelf);
    Vtinyriscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtinyriscv___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtinyriscv___024root__traceRegister(Vtinyriscv___024root* vlSelf, VerilatedVcd* tracep);

void Vtinyriscv::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vtinyriscv___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
