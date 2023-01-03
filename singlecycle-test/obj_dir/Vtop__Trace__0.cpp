// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
        bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 0xbU))));
        bufp->chgBit(oldp+3,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 9U))));
        bufp->chgBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 0xaU))));
        bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 8U))));
        bufp->chgBit(oldp+6,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 7U))));
        bufp->chgBit(oldp+7,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                    >> 2U))));
        bufp->chgCData(oldp+8,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))),2);
        bufp->chgCData(oldp+9,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                        >> 3U))),4);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
        bufp->chgCData(oldp+13,(((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                  ? 3U : 2U)),4);
        bufp->chgBit(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u));
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u));
        bufp->chgBit(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp));
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o));
        bufp->chgQData(oldp+22,((0xffffffff00000000ULL 
                                 | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
        bufp->chgQData(oldp+24,(((0xffffffff00000000ULL 
                                  | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                 >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
        bufp->chgCData(oldp+26,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data),12);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data),32);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
        bufp->chgIData(oldp+71,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
        bufp->chgQData(oldp+72,((0xffffffff00000000ULL 
                                 | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),64);
        bufp->chgQData(oldp+74,(((0xffffffff00000000ULL 
                                  | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                                 >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__rs2_data))),64);
        bufp->chgCData(oldp+76,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),5);
        bufp->chgSData(oldp+77,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
        bufp->chgBit(oldp+78,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
        bufp->chgCData(oldp+79,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+80,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+81,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+82,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                          >> 7U))),5);
    }
    bufp->chgIData(oldp+83,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+84,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+85,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+86,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+87,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+88,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+89,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+90,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+91,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+92,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+93,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+94,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+95,(vlSelf->clk_i));
    bufp->chgBit(oldp+96,(vlSelf->rst_ni));
    bufp->chgIData(oldp+97,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0xeU)) & 
                                    (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                        >> 2U)))) ? 
                             ((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                            >> 0xcU)))
                               ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                     ? 0xffffffU : 0U) 
                                   << 8U) | (0xffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                               : ((1U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                   ? ((((0x8000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                         ? 0xffffU : 0U) 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                   : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                              : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)),32);
    bufp->chgIData(oldp+98,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                              ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                  ? 0U : ((IData)(4U) 
                                          + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))
                              : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                                  ? ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xeU)) 
                                            & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                                  >> 2U))))
                                      ? ((0U == (7U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xcU)))
                                          ? ((((0x80U 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                                ? 0xffffffU
                                                : 0U) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                              ? (((
                                                   (0x8000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                              : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                      : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                  : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
