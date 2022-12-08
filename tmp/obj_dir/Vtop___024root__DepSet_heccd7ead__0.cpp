// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    if ((8U & (IData)(vlSelf->alu_op_i))) {
        if ((1U & (~ ((IData)(vlSelf->alu_op_i) >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->alu_op_i) 
                          >> 1U)))) {
                vlSelf->alu_data_o = ((1U & (IData)(vlSelf->alu_op_i))
                                       ? ((0x1fU >= vlSelf->operand_b_i)
                                           ? (vlSelf->operand_a_i 
                                              >> vlSelf->operand_b_i)
                                           : 0U) : 
                                      ((0x1fU >= vlSelf->operand_b_i)
                                        ? (vlSelf->operand_a_i 
                                           >> vlSelf->operand_b_i)
                                        : 0U));
            }
        }
    } else if ((4U & (IData)(vlSelf->alu_op_i))) {
        vlSelf->alu_data_o = ((2U & (IData)(vlSelf->alu_op_i))
                               ? ((1U & (IData)(vlSelf->alu_op_i))
                                   ? ((0x1fU >= vlSelf->operand_b_i)
                                       ? (vlSelf->operand_a_i 
                                          << vlSelf->operand_b_i)
                                       : 0U) : (vlSelf->operand_a_i 
                                                & vlSelf->operand_b_i))
                               : ((1U & (IData)(vlSelf->alu_op_i))
                                   ? (vlSelf->operand_a_i 
                                      | vlSelf->operand_b_i)
                                   : (vlSelf->operand_a_i 
                                      ^ vlSelf->operand_b_i)));
    } else if ((2U & (IData)(vlSelf->alu_op_i))) {
        if ((1U & (IData)(vlSelf->alu_op_i))) {
            vlSelf->alu_data_o = ((IData)(1U) + (vlSelf->operand_a_i 
                                                 + 
                                                 (~ vlSelf->operand_b_i)));
            vlSelf->alu_data_o = ((1U & vlSelf->alu_data_o)
                                   ? 1U : 0U);
        } else if ((1U & (vlSelf->operand_a_i & vlSelf->operand_b_i))) {
            vlSelf->alu_data_o = ((IData)(1U) + (vlSelf->operand_a_i 
                                                 + 
                                                 (~ vlSelf->operand_b_i)));
            vlSelf->alu_data_o = ((1U & vlSelf->alu_data_o)
                                   ? 0U : 1U);
        } else if ((1U & (vlSelf->operand_a_i | vlSelf->operand_b_i))) {
            vlSelf->alu_data_o = ((1U & vlSelf->operand_a_i)
                                   ? 1U : 0U);
        } else {
            vlSelf->alu_data_o = ((IData)(1U) + (vlSelf->operand_a_i 
                                                 + 
                                                 (~ vlSelf->operand_b_i)));
            vlSelf->alu_data_o = ((1U & vlSelf->alu_data_o)
                                   ? 0U : 1U);
        }
    } else {
        vlSelf->alu_data_o = ((1U & (IData)(vlSelf->alu_op_i))
                               ? ((IData)(1U) + (vlSelf->operand_a_i 
                                                 + 
                                                 (~ vlSelf->operand_b_i)))
                               : (vlSelf->operand_a_i 
                                  + vlSelf->operand_b_i));
    }
    vlSelf->bru_exp_o = (0U != vlSelf->alu_data_o);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->alu_op_i & 0xf0U))) {
        Verilated::overWidthError("alu_op_i");}
}
#endif  // VL_DEBUG
