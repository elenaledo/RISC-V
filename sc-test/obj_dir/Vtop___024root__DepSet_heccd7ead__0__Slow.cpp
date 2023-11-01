// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0 
        = VL_RAND_RESET_I(32);
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
        = vlSelf->io_sw_i;
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc 
                    >> 2U))];
    vlSelf->io_lcd_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x28U];
    vlSelf->io_ledg_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x24U];
    vlSelf->io_ledr_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x20U];
    vlSelf->io_hex7_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x1cU];
    vlSelf->io_hex6_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x18U];
    vlSelf->io_hex5_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x14U];
    vlSelf->io_hex4_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0x10U];
    vlSelf->io_hex3_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0xcU];
    vlSelf->io_hex2_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [8U];
    vlSelf->io_hex1_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [4U];
    vlSelf->io_hex0_o = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
        [0U];
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__rd_wren 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 2U) : (vlSelf->top__DOT__singleCycle__DOT__instr 
                                              >> 2U)))));
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                    vlSelf->top__DOT__singleCycle__DOT__imm 
                        = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0x1fU))) 
                            << 0x14U) | ((0xff000U 
                                          & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                         | ((0x800U 
                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 9U)) 
                                            | (0x7feU 
                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 0x14U)))));
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                }
                vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 2U;
                vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
            } else {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                if ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT__bl_unsigned 
                        = (1U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0xdU));
                } else if ((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xdU)))) {
                    vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
                }
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 7U)))));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        }
        vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
        vlSelf->top__DOT__singleCycle__DOT__op_a_sel 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 2U) : ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 2U)) 
                                              & (IData)(
                                                        (0x2000U 
                                                         != 
                                                         (0x6000U 
                                                          & vlSelf->top__DOT__singleCycle__DOT__instr))))))));
        vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
            = (1U & (IData)(((0x20U == (0x30U & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                             & ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 2U) : (IData)(
                                                     (0x2000U 
                                                      != 
                                                      (0x6004U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)))))));
    } else {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & (IData)((0x10U == (0x18U & vlSelf->top__DOT__singleCycle__DOT__instr))));
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                    vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0xaU;
                    vlSelf->top__DOT__singleCycle__DOT__imm 
                        = (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr);
                } else {
                    vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o 
                        = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? 6U : 5U) : ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 9U
                                                    : 8U)
                                                   : 4U))
                            : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                    ? 3U : 2U) : ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 7U
                                                   : 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 1U
                                                    : 0U))));
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                }
                vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
                    = (1U & (IData)((4U == (0xcU & vlSelf->top__DOT__singleCycle__DOT__instr))));
            } else {
                vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
                vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
                    = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__singleCycle__DOT__instr))));
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? 0U : (((- (IData)(
                                                     (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 7U))))));
            }
        } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                            >> 3U)));
            vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr);
            } else {
                vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o 
                    = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 6U : 5U) : ((0x1000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x40000000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 9U
                                                   : 8U)
                                               : 4U))
                        : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 3U : 2U) : ((0x1000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? 7U
                                               : 0U)));
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
            }
            vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
                = (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                            >> 3U)));
        } else {
            vlSelf->top__DOT__singleCycle__DOT__rd_wren 
                = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__singleCycle__DOT__instr))));
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 0U;
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            } else {
                vlSelf->top__DOT__singleCycle__DOT__wb_sel = 1U;
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
            }
            vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = 0U;
            vlSelf->top__DOT__singleCycle__DOT__op_b_sel 
                = (1U & (IData)((0U == (0xcU & vlSelf->top__DOT__singleCycle__DOT__instr))));
        }
        vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = 0U;
        vlSelf->top__DOT__singleCycle__DOT__op_a_sel 
            = (1U & (IData)((0x14U == (0x3cU & vlSelf->top__DOT__singleCycle__DOT__instr))));
    }
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = (IData)(
                                                           (0x20U 
                                                            == 
                                                            (0x7cU 
                                                             & vlSelf->top__DOT__singleCycle__DOT__instr)));
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_a_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc
          : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((IData)(vlSelf->top__DOT__singleCycle__DOT__op_b_sel)
          ? vlSelf->top__DOT__singleCycle__DOT__imm
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 1U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 2U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                    & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                           >> 3U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 4U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 4U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 8U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 8U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xdU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xeU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0xcU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0xfU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x10U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x14U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x18U) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                     >> 0x1cU) & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & (~ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (2U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 1U))) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (4U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 2U))) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t)) 
           | (8U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                    & ((~ (1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                 >> 3U))) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & (~ (0xfffU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x7ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 5U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x3ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 6U))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 4U) & ((~ (0x1ffU & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 7U))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & (~ (0xffU & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x7fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 9U))) 
                               << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x3fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xaU))) 
                               << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 8U) & ((~ (0x1fU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xbU))) 
                               << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & (~ (0xfU & (((IData)(1U) 
                                             + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                            >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (7U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xdU))) 
                                 << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (3U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xeU))) 
                                 << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0xcU) & ((~ (1U & (((IData)(1U) 
                                            + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                           >> 0xfU))) 
                                 << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x10U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x11U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x12U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x10U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x13U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x14U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x15U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x16U)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x14U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x17U)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x18U)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x19U)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1aU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x18U) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1bU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (1U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & (~ (((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                     >> 0x1cU)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (2U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1dU)) << 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (4U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1eU)) << 2U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t)) 
           | (8U & ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                     >> 0x1cU) & ((~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0x1fU)) << 3U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 1U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 2U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 3U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 4U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 5U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 6U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 7U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 8U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 9U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xaU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xbU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0xcU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xdU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xeU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0xfU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                        ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                         ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                       ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 1U)) ^ (7U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 1U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 2U)) ^ (3U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 2U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 3U)) ^ (1U & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 3U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((0xfffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 4U)) ^ (0xfffU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 4U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((0x7ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 5U)) ^ (0x7ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 5U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((0x3ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 6U)) ^ (0x3ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 6U)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((0x1ffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 7U)) ^ (0x1ffU 
                                              & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 7U)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((0xffU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                 >> 8U)) ^ (0xffU & 
                                            (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                             >> 8U))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((0x7fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 9U)) ^ (0x7fU 
                                             & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                >> 9U)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((0x3fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0xaU)) ^ (0x3fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xaU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((0x1fU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                  >> 0xbU)) ^ (0x1fU 
                                               & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xbU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((0xfU & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                >> 0xcU)) ^ (0xfU & 
                                             (((IData)(1U) 
                                               + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                              >> 0xcU))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((7U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xdU)) ^ (7U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xdU)))) 
                    << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((3U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xeU)) ^ (3U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xeU)))) 
                    << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0xfU)) ^ (1U & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xfU)))) 
                    << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x10U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x11U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x12U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x13U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x14U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x15U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x16U)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x17U)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x18U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x19U)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1aU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1bU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (1U & (~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                        ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                       >> 0x1cU))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (2U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1dU)) << 1U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (4U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1eU)) << 2U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
           | (8U & ((~ ((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                         ^ ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                        >> 0x1fU)) << 3U)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp 
        = ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
            ^ vlSelf->top__DOT__singleCycle__DOT__operand_b) 
           >> 0x1fU);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub 
        = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xdU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((0xbU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))) 
              << 2U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__alu_data = 
        ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
          ? ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
              ? 0U : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                       ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                           ? 0U : vlSelf->top__DOT__singleCycle__DOT__operand_b)
                       : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                           ? ((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               >> 0x1fU) ? (IData)(
                                                   ((0xffffffff00000000ULL 
                                                     | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                               : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                           : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                              >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))))
          : ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
              ? ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                      ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         | vlSelf->top__DOT__singleCycle__DOT__operand_b)
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
              : ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                  ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                      ? ((0U != vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp)
                          ? (vlSelf->top__DOT__singleCycle__DOT__operand_b 
                             >> 0x1fU) : (vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub 
                                          >> 0x1fU))
                      : ((0U != vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp)
                          ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                             >> 0x1fU) : (vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub 
                                          >> 0x1fU)))
                  : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o))
                      ? vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub
                      : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                         + vlSelf->top__DOT__singleCycle__DOT__operand_b)))));
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o 
        = (0U != vlSelf->top__DOT__singleCycle__DOT__alu_data);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | (0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o) 
               << 2U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o) 
                          << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
           | ((IData)((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t 
        = ((7U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o) 
              << 3U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask 
        = ((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                         >> 0xcU))) ? ((0U == (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                        ? 1U : ((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                 ? 2U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                                  ? 4U
                                                  : 8U)))
            : ((1U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 0xcU))) ? ((0U == (3U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelf->top__DOT__singleCycle__DOT__alu_data))
                                             ? 3U : 0xcU))
                : ((2U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0xcU))) ? 0xfU : (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96ff575f__0))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t)) 
           | (3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t)) 
           | ((IData)((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o 
        = (1U & (((((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    >> 3U) | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                               >> 2U) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t) 
                                         >> 3U))) | (IData)(
                                                            (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                                                              >> 1U) 
                                                             & (0xcU 
                                                                == 
                                                                (0xcU 
                                                                 & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)))))) 
                 | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t) 
                    & (0xeU == (0xeU & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 = 0U;
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 = 0U;
    if (vlSelf->top__DOT__singleCycle__DOT__mem_wren) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 = 0U;
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 = 0U;
    } else if ((0U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 0xcU)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
                               >> 8U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 8U)));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
                               >> 0x10U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                               [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffU & (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                          >> 2U))] 
                               >> 0x10U)));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
                      >> 0x18U));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffffff00U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x18U));
        }
    } else if ((1U == (3U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                             >> 0xcU)))) {
        if ((3U == (3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (0xffffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))]));
        }
        if ((0xcU == (0xcU & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
                      >> 0x10U));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                      [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x10U));
            vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
                = ((0xffff0000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1) 
                   | (vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                      [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                 >> 2U))] >> 0x10U));
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 
            = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri;
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 
            = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
            [(0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                       >> 2U))];
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 
            = vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
            [(0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                       >> 2U))];
    }
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t 
        = (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o) 
            << 1U) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data 
        = ((0x400U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
            ? ((0x200U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0
                : ((0x100U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3
                    : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2))
            : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s 
        = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                  >> 0x1fU) ? ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                >> 0x1fU) & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t) 
                                             >> 1U))
                  : ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o 
        = (1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                  >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t) 
                            & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t) 
                               >> 1U))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)) 
           | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t 
        = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)) 
           | (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                       | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o)))));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)) 
           | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o) 
              << 1U));
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t 
        = ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)) 
           | (2U & ((~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                        | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))) 
                    << 1U)));
    if ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
         >> 0x1fU)) {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                      >> 0x1fU) & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t) 
                                      >> 1U))));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) | (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t) 
                                          >> 1U))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o 
            = (1U & ((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                      >> 0x1fU) | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t)));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s 
            = (1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                         >> 0x1fU)) & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t)));
    }
    if (vlSelf->top__DOT__singleCycle__DOT__bl_unsigned) {
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = (3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t));
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = (1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                        | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                            >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                      & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                         >> 1U))))));
    } else {
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s;
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
    }
    vlSelf->top__DOT__singleCycle__DOT__bl_sel = (1U 
                                                  & (IData)(
                                                            ((0x60U 
                                                              == 
                                                              (0x70U 
                                                               & vlSelf->top__DOT__singleCycle__DOT__instr)) 
                                                             & ((8U 
                                                                 & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                 ? 
                                                                (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 2U)
                                                                 : 
                                                                ((vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                  >> 2U) 
                                                                 | ((0x4000U 
                                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                     ? 
                                                                    ((0x2000U 
                                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                      ? 
                                                                     ((0x1000U 
                                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                       ? 
                                                                      (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less))
                                                                       : (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less))
                                                                      : 
                                                                     ((0x1000U 
                                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                       ? 
                                                                      (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less))
                                                                       : (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)))
                                                                     : 
                                                                    ((~ 
                                                                      (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                       >> 0xdU)) 
                                                                     & ((0x1000U 
                                                                         & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                                         ? 
                                                                        (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal))
                                                                         : (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)))))))));
    if (vlSelf->top__DOT__singleCycle__DOT__bl_sel) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = vlSelf->top__DOT__singleCycle__DOT__alu_data;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__bl_sel)))) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_sw_i = VL_RAND_RESET_I(32);
    vlSelf->io_lcd_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledg_o = VL_RAND_RESET_I(32);
    vlSelf->io_ledr_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex0_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex1_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex2_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex3_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex4_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex5_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex6_o = VL_RAND_RESET_I(32);
    vlSelf->io_hex7_o = VL_RAND_RESET_I(32);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__bl_less = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__bl_equal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__bl_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__bl_unsigned = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__rd_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__op_b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__mem_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__wb_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_slt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sltu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
