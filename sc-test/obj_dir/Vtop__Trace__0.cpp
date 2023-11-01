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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+35,((1U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)));
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__bl_sel));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__bl_unsigned));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o),4);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
        bufp->chgIData(oldp+54,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
        bufp->chgBit(oldp+55,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                            >> 1U) 
                                           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))))));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
        bufp->chgBit(oldp+57,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t))));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o));
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t),2);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t),2);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t),2);
        bufp->chgIData(oldp+63,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))),32);
        bufp->chgIData(oldp+64,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))),32);
        bufp->chgBit(oldp+65,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
        bufp->chgBit(oldp+67,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
        bufp->chgSData(oldp+70,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),16);
        bufp->chgSData(oldp+71,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),16);
        bufp->chgBit(oldp+72,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+74,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+77,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),4);
        bufp->chgCData(oldp+78,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),4);
        bufp->chgBit(oldp+79,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+81,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+84,((1U & vlSelf->top__DOT__singleCycle__DOT__rs1_data)));
        bufp->chgBit(oldp+85,((1U & vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
        bufp->chgBit(oldp+86,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+87,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+88,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__rs1_data) 
                                     & vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
        bufp->chgBit(oldp+89,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 1U))));
        bufp->chgBit(oldp+90,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 1U))));
        bufp->chgBit(oldp+91,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                        >> 1U)))));
        bufp->chgBit(oldp+92,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 1U))))));
        bufp->chgBit(oldp+93,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 1U)) & 
                                     (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 1U)))));
        bufp->chgBit(oldp+94,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 2U))));
        bufp->chgBit(oldp+95,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 2U))));
        bufp->chgBit(oldp+96,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                        >> 2U)))));
        bufp->chgBit(oldp+97,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 2U))))));
        bufp->chgBit(oldp+98,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                         >> 2U)) & 
                                     (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 2U)))));
        bufp->chgBit(oldp+99,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     >> 3U))));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 3U))));
        bufp->chgBit(oldp+101,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 3U)))));
        bufp->chgBit(oldp+102,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 3U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 3U))))));
        bufp->chgBit(oldp+103,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 3U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 3U)))));
        bufp->chgCData(oldp+104,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 4U))),4);
        bufp->chgCData(oldp+105,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 4U))),4);
        bufp->chgBit(oldp+106,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+108,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+111,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 4U))));
        bufp->chgBit(oldp+112,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 4U))));
        bufp->chgBit(oldp+113,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 4U)))));
        bufp->chgBit(oldp+114,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 4U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 4U))))));
        bufp->chgBit(oldp+115,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 4U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 4U)))));
        bufp->chgBit(oldp+116,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 5U))));
        bufp->chgBit(oldp+117,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 5U))));
        bufp->chgBit(oldp+118,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 5U)))));
        bufp->chgBit(oldp+119,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 5U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 5U))))));
        bufp->chgBit(oldp+120,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 5U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 5U)))));
        bufp->chgBit(oldp+121,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 6U))));
        bufp->chgBit(oldp+122,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 6U))));
        bufp->chgBit(oldp+123,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 6U)))));
        bufp->chgBit(oldp+124,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 6U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 6U))))));
        bufp->chgBit(oldp+125,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 6U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 6U)))));
        bufp->chgBit(oldp+126,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 7U))));
        bufp->chgBit(oldp+127,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 7U))));
        bufp->chgBit(oldp+128,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 7U)))));
        bufp->chgBit(oldp+129,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 7U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 7U))))));
        bufp->chgBit(oldp+130,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 7U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 7U)))));
        bufp->chgCData(oldp+131,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 8U))),4);
        bufp->chgCData(oldp+132,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 8U))),4);
        bufp->chgBit(oldp+133,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+134,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+135,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+138,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 8U))));
        bufp->chgBit(oldp+139,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 8U))));
        bufp->chgBit(oldp+140,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 8U)))));
        bufp->chgBit(oldp+141,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 8U))))));
        bufp->chgBit(oldp+142,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 8U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 8U)))));
        bufp->chgBit(oldp+143,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 9U))));
        bufp->chgBit(oldp+144,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 9U))));
        bufp->chgBit(oldp+145,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 9U)))));
        bufp->chgBit(oldp+146,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 9U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 9U))))));
        bufp->chgBit(oldp+147,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 9U)) & 
                                      (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 9U)))));
        bufp->chgBit(oldp+148,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+149,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xaU))));
        bufp->chgBit(oldp+150,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+151,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xaU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xaU))))));
        bufp->chgBit(oldp+152,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xaU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+153,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+154,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xbU))));
        bufp->chgBit(oldp+155,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xbU)))));
        bufp->chgBit(oldp+156,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xbU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xbU))))));
        bufp->chgBit(oldp+157,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xbU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+158,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+159,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+160,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+161,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+162,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+163,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+164,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+165,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+166,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xcU))));
        bufp->chgBit(oldp+167,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+168,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xcU))))));
        bufp->chgBit(oldp+169,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xcU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+170,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+171,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xdU))));
        bufp->chgBit(oldp+172,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+173,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xdU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xdU))))));
        bufp->chgBit(oldp+174,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xdU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+175,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+176,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xeU))));
        bufp->chgBit(oldp+177,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+178,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xeU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xeU))))));
        bufp->chgBit(oldp+179,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xeU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+180,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+181,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0xfU))));
        bufp->chgBit(oldp+182,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0xfU)))));
        bufp->chgBit(oldp+183,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xfU) & (~ 
                                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                    >> 0xfU))))));
        bufp->chgBit(oldp+184,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0xfU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+185,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+186,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+187,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+188,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+189,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+190,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+191,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+192,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+193,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+194,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+196,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+197,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+198,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+199,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+200,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x10U))));
        bufp->chgBit(oldp+201,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+202,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+203,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x10U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+204,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+205,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U))));
        bufp->chgBit(oldp+206,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+207,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x11U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+208,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x11U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+209,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+210,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U))));
        bufp->chgBit(oldp+211,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+212,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x12U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+213,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x12U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+214,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+215,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U))));
        bufp->chgBit(oldp+216,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+217,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x13U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+218,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x13U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+219,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+220,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+221,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+223,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+224,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+225,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+226,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+227,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x14U))));
        bufp->chgBit(oldp+228,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+229,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+230,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x14U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+231,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+232,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U))));
        bufp->chgBit(oldp+233,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+234,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x15U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+235,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x15U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+236,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+237,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U))));
        bufp->chgBit(oldp+238,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+239,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x16U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+240,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x16U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+241,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+242,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U))));
        bufp->chgBit(oldp+243,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+244,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x17U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+245,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x17U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+246,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+247,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+248,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+249,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+250,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+251,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+252,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+253,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+254,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x18U))));
        bufp->chgBit(oldp+255,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+256,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+257,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x18U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+258,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+259,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U))));
        bufp->chgBit(oldp+260,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+261,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x19U) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+262,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x19U)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+263,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+264,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+265,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+266,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1aU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+267,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1aU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+268,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+269,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+270,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+271,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1bU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+272,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1bU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+273,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+274,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+275,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+277,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+278,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+279,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+280,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+281,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+282,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+283,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1cU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+284,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1cU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+285,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+287,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+288,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1dU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+289,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1dU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+290,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+291,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+292,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+293,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1eU) & 
                                      (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+294,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          >> 0x1eU)) 
                                      & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+295,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+296,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                >> 0x1fU)));
        bufp->chgBit(oldp+297,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                          ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+298,(((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                 >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+299,(((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1fU))));
        bufp->chgBit(oldp+300,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
        bufp->chgBit(oldp+301,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
        bufp->chgBit(oldp+302,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
        bufp->chgCData(oldp+303,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
        bufp->chgCData(oldp+304,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
        bufp->chgSData(oldp+305,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),16);
        bufp->chgSData(oldp+306,((0xffffU & ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),16);
        bufp->chgBit(oldp+307,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+308,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+309,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+310,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
        bufp->chgCData(oldp+312,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),4);
        bufp->chgCData(oldp+313,((0xfU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),4);
        bufp->chgBit(oldp+314,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+315,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+316,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+317,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+318,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+319,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))));
        bufp->chgBit(oldp+320,((1U & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
        bufp->chgBit(oldp+321,((1U & (~ (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                         ^ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
        bufp->chgBit(oldp+322,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      & (~ ((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
        bufp->chgBit(oldp+323,((1U & ((~ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                                      & ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
        bufp->chgBit(oldp+324,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+325,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 1U))));
        bufp->chgBit(oldp+326,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 1U)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 1U)))))));
        bufp->chgBit(oldp+327,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 1U) & (~ 
                                                 (7U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 1U)))))));
        bufp->chgBit(oldp+328,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 1U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 1U)))));
        bufp->chgBit(oldp+329,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+330,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 2U))));
        bufp->chgBit(oldp+331,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 2U)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 2U)))))));
        bufp->chgBit(oldp+332,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 2U) & (~ 
                                                 (3U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 2U)))))));
        bufp->chgBit(oldp+333,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 2U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 2U)))));
        bufp->chgBit(oldp+334,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+335,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 3U))));
        bufp->chgBit(oldp+336,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 3U)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 3U)))))));
        bufp->chgBit(oldp+337,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 3U) & (~ 
                                                 (1U 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 3U)))))));
        bufp->chgBit(oldp+338,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 3U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 3U)))));
        bufp->chgCData(oldp+339,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 4U))),4);
        bufp->chgCData(oldp+340,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 4U))),4);
        bufp->chgBit(oldp+341,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+342,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+343,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+344,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+345,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+346,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+347,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 4U))));
        bufp->chgBit(oldp+348,((1U & (~ ((0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 4U)) 
                                         ^ (0xfffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 4U)))))));
        bufp->chgBit(oldp+349,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 4U) & (~ 
                                                 (0xfffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 4U)))))));
        bufp->chgBit(oldp+350,((1U & ((~ (0xfffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 4U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 4U)))));
        bufp->chgBit(oldp+351,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+352,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 5U))));
        bufp->chgBit(oldp+353,((1U & (~ ((0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 5U)) 
                                         ^ (0x7ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 5U)))))));
        bufp->chgBit(oldp+354,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 5U) & (~ 
                                                 (0x7ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 5U)))))));
        bufp->chgBit(oldp+355,((1U & ((~ (0x7ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 5U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 5U)))));
        bufp->chgBit(oldp+356,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+357,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 6U))));
        bufp->chgBit(oldp+358,((1U & (~ ((0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 6U)) 
                                         ^ (0x3ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 6U)))))));
        bufp->chgBit(oldp+359,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 6U) & (~ 
                                                 (0x3ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 6U)))))));
        bufp->chgBit(oldp+360,((1U & ((~ (0x3ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 6U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 6U)))));
        bufp->chgBit(oldp+361,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+362,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 7U))));
        bufp->chgBit(oldp+363,((1U & (~ ((0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 7U)) 
                                         ^ (0x1ffU 
                                            & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 7U)))))));
        bufp->chgBit(oldp+364,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 7U) & (~ 
                                                 (0x1ffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 7U)))))));
        bufp->chgBit(oldp+365,((1U & ((~ (0x1ffU & 
                                          (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                           >> 7U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 7U)))));
        bufp->chgCData(oldp+366,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 8U))),4);
        bufp->chgCData(oldp+367,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 8U))),4);
        bufp->chgBit(oldp+368,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+369,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+370,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+371,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+372,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+373,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+374,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 8U))));
        bufp->chgBit(oldp+375,((1U & (~ ((0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 8U)) 
                                         ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 8U)))))));
        bufp->chgBit(oldp+376,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 8U) & (~ 
                                                 (0xffU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 8U)))))));
        bufp->chgBit(oldp+377,((1U & ((~ (0xffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 8U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 8U)))));
        bufp->chgBit(oldp+378,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 9U))));
        bufp->chgBit(oldp+379,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 9U))));
        bufp->chgBit(oldp+380,((1U & (~ ((0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 9U)) 
                                         ^ (0x7fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 9U)))))));
        bufp->chgBit(oldp+381,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 9U) & (~ 
                                                 (0x7fU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                     >> 9U)))))));
        bufp->chgBit(oldp+382,((1U & ((~ (0x7fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 9U))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 9U)))));
        bufp->chgBit(oldp+383,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+384,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xaU))));
        bufp->chgBit(oldp+385,((1U & (~ ((0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xaU)) 
                                         ^ (0x3fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xaU)))))));
        bufp->chgBit(oldp+386,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xaU) & (~ 
                                                   (0x3fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+387,((1U & ((~ (0x3fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xaU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xaU)))));
        bufp->chgBit(oldp+388,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+389,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xbU))));
        bufp->chgBit(oldp+390,((1U & (~ ((0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xbU)) 
                                         ^ (0x1fU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xbU)))))));
        bufp->chgBit(oldp+391,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xbU) & (~ 
                                                   (0x1fU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+392,((1U & ((~ (0x1fU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                   >> 0xbU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xbU)))));
        bufp->chgCData(oldp+393,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+394,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0xcU))),4);
        bufp->chgBit(oldp+395,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+396,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+397,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+398,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+399,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+400,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+401,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xcU))));
        bufp->chgBit(oldp+402,((1U & (~ ((0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                  >> 0xcU)) 
                                         ^ (0xfU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 0xcU)))))));
        bufp->chgBit(oldp+403,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xcU) & (~ 
                                                   (0xfU 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+404,((1U & ((~ (0xfU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                  >> 0xcU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xcU)))));
        bufp->chgBit(oldp+405,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+406,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xdU))));
        bufp->chgBit(oldp+407,((1U & (~ ((7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xdU)) 
                                         ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xdU)))))));
        bufp->chgBit(oldp+408,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xdU) & (~ 
                                                   (7U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+409,((1U & ((~ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xdU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xdU)))));
        bufp->chgBit(oldp+410,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+411,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xeU))));
        bufp->chgBit(oldp+412,((1U & (~ ((3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xeU)) 
                                         ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xeU)))))));
        bufp->chgBit(oldp+413,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xeU) & (~ 
                                                   (3U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+414,((1U & ((~ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xeU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xeU)))));
        bufp->chgBit(oldp+415,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+416,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xfU))));
        bufp->chgBit(oldp+417,((1U & (~ ((1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xfU)) 
                                         ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xfU)))))));
        bufp->chgBit(oldp+418,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xfU) & (~ 
                                                   (1U 
                                                    & (((IData)(1U) 
                                                        + 
                                                        (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+419,((1U & ((~ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xfU))) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0xfU)))));
        bufp->chgSData(oldp+420,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+421,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                  >> 0x10U)),16);
        bufp->chgBit(oldp+422,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+423,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+424,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+425,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+426,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
        bufp->chgCData(oldp+427,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x10U))),4);
        bufp->chgCData(oldp+428,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x10U))),4);
        bufp->chgBit(oldp+429,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+430,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+431,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+432,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+433,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+434,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+435,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x10U))));
        bufp->chgBit(oldp+436,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+437,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x10U))))));
        bufp->chgBit(oldp+438,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x10U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x10U)))));
        bufp->chgBit(oldp+439,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+440,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x11U))));
        bufp->chgBit(oldp+441,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+442,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x11U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x11U))))));
        bufp->chgBit(oldp+443,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x11U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x11U)))));
        bufp->chgBit(oldp+444,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+445,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x12U))));
        bufp->chgBit(oldp+446,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+447,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x12U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x12U))))));
        bufp->chgBit(oldp+448,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x12U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x12U)))));
        bufp->chgBit(oldp+449,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+450,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x13U))));
        bufp->chgBit(oldp+451,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x13U)))));
        bufp->chgBit(oldp+452,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x13U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x13U))))));
        bufp->chgBit(oldp+453,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x13U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x13U)))));
        bufp->chgCData(oldp+454,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x14U))),4);
        bufp->chgCData(oldp+455,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x14U))),4);
        bufp->chgBit(oldp+456,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+457,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+458,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+459,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+460,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+461,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+462,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x14U))));
        bufp->chgBit(oldp+463,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+464,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x14U))))));
        bufp->chgBit(oldp+465,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x14U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x14U)))));
        bufp->chgBit(oldp+466,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+467,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x15U))));
        bufp->chgBit(oldp+468,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+469,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x15U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x15U))))));
        bufp->chgBit(oldp+470,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x15U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x15U)))));
        bufp->chgBit(oldp+471,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+472,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x16U))));
        bufp->chgBit(oldp+473,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+474,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x16U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x16U))))));
        bufp->chgBit(oldp+475,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x16U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x16U)))));
        bufp->chgBit(oldp+476,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+477,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x17U))));
        bufp->chgBit(oldp+478,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x17U)))));
        bufp->chgBit(oldp+479,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x17U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x17U))))));
        bufp->chgBit(oldp+480,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x17U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x17U)))));
        bufp->chgCData(oldp+481,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x18U))),4);
        bufp->chgCData(oldp+482,((0xfU & (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x18U))),4);
        bufp->chgBit(oldp+483,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+484,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+485,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+486,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+487,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+488,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+489,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x18U))));
        bufp->chgBit(oldp+490,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+491,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x18U))))));
        bufp->chgBit(oldp+492,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x18U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x18U)))));
        bufp->chgBit(oldp+493,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+494,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x19U))));
        bufp->chgBit(oldp+495,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+496,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x19U) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x19U))))));
        bufp->chgBit(oldp+497,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x19U)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+498,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+499,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+500,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+501,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1aU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1aU))))));
        bufp->chgBit(oldp+502,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1aU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1aU)))));
        bufp->chgBit(oldp+503,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+504,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+505,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1bU)))));
        bufp->chgBit(oldp+506,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1bU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1bU))))));
        bufp->chgBit(oldp+507,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1bU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1bU)))));
        bufp->chgCData(oldp+508,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0x1cU)),4);
        bufp->chgCData(oldp+509,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                  >> 0x1cU)),4);
        bufp->chgBit(oldp+510,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+511,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+512,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+513,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+514,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+515,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+516,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+517,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+518,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1cU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1cU))))));
        bufp->chgBit(oldp+519,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1cU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1cU)))));
        bufp->chgBit(oldp+520,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+521,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+522,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+523,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1dU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1dU))))));
        bufp->chgBit(oldp+524,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1dU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1dU)))));
        bufp->chgBit(oldp+525,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+526,((1U & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+527,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+528,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1eU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1eU))))));
        bufp->chgBit(oldp+529,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1eU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1eU)))));
        bufp->chgBit(oldp+530,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+531,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                >> 0x1fU)));
        bufp->chgBit(oldp+532,((1U & (~ ((((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          ^ ((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+533,((1U & ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1fU) & 
                                      (~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                          >> 0x1fU))))));
        bufp->chgBit(oldp+534,((1U & ((~ (((IData)(1U) 
                                           + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                          >> 0x1fU)) 
                                      & (((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                         >> 0x1fU)))));
        bufp->chgBit(oldp+535,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                       >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                                 & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                    >> 1U))))));
        bufp->chgCData(oldp+536,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t),2);
        bufp->chgCData(oldp+537,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t),2);
        bufp->chgBit(oldp+538,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
        bufp->chgBit(oldp+539,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
        bufp->chgBit(oldp+540,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
        bufp->chgCData(oldp+541,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
        bufp->chgCData(oldp+542,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
        bufp->chgBit(oldp+543,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+544,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+545,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+546,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+547,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+548,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+549,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+550,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+551,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+552,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+553,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+554,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+555,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+556,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+557,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+558,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+559,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+560,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+561,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+562,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
        bufp->chgBit(oldp+563,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
        bufp->chgBit(oldp+564,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
        bufp->chgBit(oldp+565,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
        bufp->chgCData(oldp+566,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
        bufp->chgCData(oldp+567,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
        bufp->chgBit(oldp+568,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
        bufp->chgBit(oldp+569,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
        bufp->chgBit(oldp+570,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
        bufp->chgCData(oldp+571,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
        bufp->chgCData(oldp+572,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
        bufp->chgBit(oldp+573,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
        bufp->chgBit(oldp+574,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
        bufp->chgBit(oldp+575,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
        bufp->chgCData(oldp+576,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
        bufp->chgCData(oldp+577,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
        bufp->chgBit(oldp+578,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
        bufp->chgBit(oldp+579,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
        bufp->chgBit(oldp+580,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
        bufp->chgCData(oldp+581,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
        bufp->chgCData(oldp+582,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
        bufp->chgBit(oldp+583,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
        bufp->chgBit(oldp+584,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
        bufp->chgBit(oldp+585,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                         | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
        bufp->chgCData(oldp+586,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
        bufp->chgCData(oldp+587,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
        bufp->chgIData(oldp+588,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
        bufp->chgBit(oldp+589,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o));
        bufp->chgIData(oldp+590,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  + vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
        bufp->chgIData(oldp+591,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub),32);
        bufp->chgIData(oldp+592,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
        bufp->chgIData(oldp+593,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  | vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
        bufp->chgIData(oldp+594,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  & vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
        bufp->chgIData(oldp+595,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
        bufp->chgIData(oldp+596,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
        bufp->chgIData(oldp+597,(((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> 0x1fU) ? (IData)(
                                                       ((0xffffffff00000000ULL 
                                                         | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                   : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                      >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))),32);
        bufp->chgQData(oldp+598,((0xffffffff00000000ULL 
                                  | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
        bufp->chgQData(oldp+600,(((0xffffffff00000000ULL 
                                   | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                  >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
        bufp->chgCData(oldp+602,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
        bufp->chgIData(oldp+603,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp),32);
        bufp->chgSData(oldp+604,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
        bufp->chgBit(oldp+605,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
        bufp->chgCData(oldp+606,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0xcU))),3);
        bufp->chgIData(oldp+607,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1),32);
        bufp->chgIData(oldp+608,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2),32);
        bufp->chgCData(oldp+609,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask),4);
        bufp->chgCData(oldp+610,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+611,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+612,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                           >> 7U))),5);
    }
    bufp->chgIData(oldp+613,(vlSelf->io_sw_i),32);
    bufp->chgIData(oldp+614,(vlSelf->io_lcd_o),32);
    bufp->chgIData(oldp+615,(vlSelf->io_ledg_o),32);
    bufp->chgIData(oldp+616,(vlSelf->io_ledr_o),32);
    bufp->chgIData(oldp+617,(vlSelf->io_hex0_o),32);
    bufp->chgIData(oldp+618,(vlSelf->io_hex1_o),32);
    bufp->chgIData(oldp+619,(vlSelf->io_hex2_o),32);
    bufp->chgIData(oldp+620,(vlSelf->io_hex3_o),32);
    bufp->chgIData(oldp+621,(vlSelf->io_hex4_o),32);
    bufp->chgIData(oldp+622,(vlSelf->io_hex5_o),32);
    bufp->chgIData(oldp+623,(vlSelf->io_hex6_o),32);
    bufp->chgIData(oldp+624,(vlSelf->io_hex7_o),32);
    bufp->chgBit(oldp+625,(vlSelf->clk_i));
    bufp->chgBit(oldp+626,(vlSelf->rst_ni));
    bufp->chgIData(oldp+627,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 0xeU)) 
                                     & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
                               ? ((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0xcU)))
                                   ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                         ? 0xffffffU
                                         : 0U) << 8U) 
                                      | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                   : ((1U == (7U & 
                                              (vlSelf->top__DOT__singleCycle__DOT__instr 
                                               >> 0xcU)))
                                       ? ((((0x8000U 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                             ? 0xffffU
                                             : 0U) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                       : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                               : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)),32);
    bufp->chgIData(oldp+628,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? 0U : ((IData)(4U) 
                                           + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))
                               : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
                                   ? ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                 >> 0xeU)) 
                                             & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__mem_wren))))
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
                                               (7U 
                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((
                                                   ((0x8000U 
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
