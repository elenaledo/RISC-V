// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    CData/*0:0*/ top__DOT__singleCycle__DOT__bl_less;
    CData/*0:0*/ top__DOT__singleCycle__DOT__bl_equal;
    CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u;
    CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s;
    CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u;
    CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s;
    CData/*0:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__tmp;
    CData/*0:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o;
    CData/*3:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96ff575f__0;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data;
    CData/*3:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT__mask;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__singleCycle__DOT__bl_less;
    CData/*0:0*/ __Vchglast__TOP__top__DOT__singleCycle__DOT__bl_equal;
    SData/*11:0*/ top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data;
    VL_IN(io_sw_i,31,0);
    VL_OUT(io_lcd_o,31,0);
    VL_OUT(io_ledg_o,31,0);
    VL_OUT(io_ledr_o,31,0);
    VL_OUT(io_hex0_o,31,0);
    VL_OUT(io_hex1_o,31,0);
    VL_OUT(io_hex2_o,31,0);
    VL_OUT(io_hex3_o,31,0);
    VL_OUT(io_hex4_o,31,0);
    VL_OUT(io_hex5_o,31,0);
    VL_OUT(io_hex6_o,31,0);
    VL_OUT(io_hex7_o,31,0);
    IData/*31:0*/ top__DOT__singleCycle__DOT__instr;
    IData/*31:0*/ top__DOT__singleCycle__DOT__imm;
    IData/*31:0*/ top__DOT__singleCycle__DOT__rs1_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__rs2_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__operand_a;
    IData/*31:0*/ top__DOT__singleCycle__DOT__operand_b;
    IData/*31:0*/ top__DOT__singleCycle__DOT__alu_data;
    IData/*31:0*/ top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc;
    IData/*31:0*/ top__DOT__singleCycle__DOT__PC_block__DOT__pc;
    IData/*31:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o;
    IData/*31:0*/ top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__tmp;
    IData/*31:0*/ top__DOT__singleCycle__DOT__alu_block__DOT__tmp;
    IData/*31:0*/ top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__singleCycle__DOT__imem_block__DOT__imem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__singleCycle__DOT__regfile_block__DOT__mem;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__singleCycle__DOT__lsu_block__DOT__memory;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
