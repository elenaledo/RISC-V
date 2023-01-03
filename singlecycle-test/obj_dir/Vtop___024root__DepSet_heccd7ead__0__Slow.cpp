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
    VlWide<7>/*223:0*/ __Vtemp_h2b17369e__0;
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
    __Vtemp_h2b17369e__0[0U] = 0x2e73696dU;
    __Vtemp_h2b17369e__0[1U] = 0x64617461U;
    __Vtemp_h2b17369e__0[2U] = 0x6d656d2eU;
    __Vtemp_h2b17369e__0[3U] = 0x696e7374U;
    __Vtemp_h2b17369e__0[4U] = 0x6f72792fU;
    __Vtemp_h2b17369e__0[5U] = 0x2f6d656dU;
    __Vtemp_h2b17369e__0[6U] = 0x2eU;
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_h2b17369e__0)
                 ,  &(vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
        = vlSelf->io_sw_i;
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
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc 
                    >> 2U))];
    if ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
            } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
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
                    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0xd82U;
                } else {
                    vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                          >> 0x14U));
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0xc82U;
            } else {
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
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data 
                    = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                    ? 0x380U : 0xb80U)
                                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                    ? 0xb80U : 0x380U))
                            : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                    ? 0x180U : 0x980U)
                                : ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                    ? 0x980U : 0x180U)))
                        : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? 0U : ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                     ? ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                         ? 0x180U : 0x980U)
                                     : ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                         ? 0x980U : 0x180U))));
            }
        } else {
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
            } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
                vlSelf->top__DOT__singleCycle__DOT__imm 
                    = (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr);
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0x4d0U;
            } else {
                vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
                vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data 
                    = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                ? 0x430U : 0x428U) : 
                           ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                             ? ((0x40000000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? 0x440U : 0x448U)
                             : 0x420U)) : ((0x2000U 
                                            & vlSelf->top__DOT__singleCycle__DOT__instr)
                                            ? ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? 0x418U
                                                : 0x410U)
                                            : ((0x1000U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? 0x438U
                                                : (
                                                   (0x40000000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x408U
                                                    : 0x400U))));
            }
        } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
        } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
        } else {
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                >> 0x1fU))) << 0xcU) 
                   | ((0xfe0U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                 >> 0x14U)) | (0x1fU 
                                               & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                  >> 7U))));
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0x84U;
        }
    } else if ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
        } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = (0xfffff000U & vlSelf->top__DOT__singleCycle__DOT__instr);
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0x580U;
        } else {
            vlSelf->top__DOT__singleCycle__DOT__imm 
                = (((- (IData)((vlSelf->top__DOT__singleCycle__DOT__instr 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelf->top__DOT__singleCycle__DOT__instr 
                      >> 0x14U));
            vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data 
                = ((0x4000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? 0x4b0U : 0x4a8U) : ((0x1000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x40000000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x5c0U
                                                    : 0x5c8U)
                                                   : 0x4a0U))
                    : ((0x2000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                        ? ((0x1000U & vlSelf->top__DOT__singleCycle__DOT__instr)
                            ? 0U : 0x498U) : ((0x1000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? 0x490U
                                               : 0x480U)));
        }
    } else if ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
    } else if ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)) {
        vlSelf->top__DOT__singleCycle__DOT__imm = 0U;
        vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0U;
    } else {
        vlSelf->top__DOT__singleCycle__DOT__imm = (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                      >> 0x14U));
        vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = 0x481U;
    }
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
    if (((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? 1U : 0U)) {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((1U & vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o)
                ? 1U : 0U);
    } else if ((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                      & vlSelf->top__DOT__singleCycle__DOT__rs2_data))) {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((1U & vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o)
                ? 0U : 1U);
    } else if ((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                      | vlSelf->top__DOT__singleCycle__DOT__rs2_data))) {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((1U & vlSelf->top__DOT__singleCycle__DOT__rs1_data)
                ? 1U : 0U);
    } else {
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
        vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o 
            = ((1U & vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o)
                ? 0U : 1U);
    }
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp 
        = (0U != vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = 
        ((0x100U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc
          : vlSelf->top__DOT__singleCycle__DOT__rs1_data);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = 
        ((0x80U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
          ? vlSelf->top__DOT__singleCycle__DOT__imm
          : vlSelf->top__DOT__singleCycle__DOT__rs2_data);
    if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                  >> 9U)))) {
        if (vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp) {
            vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp)))) {
            vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s = 1U;
        }
    }
    if ((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp)))) {
            vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u = 1U;
        }
        if (vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp) {
            vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u = 1U;
        }
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u;
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u;
    } else {
        vlSelf->top__DOT__singleCycle__DOT__bl_less 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s;
        vlSelf->top__DOT__singleCycle__DOT__bl_equal 
            = vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s;
    }
    if ((0x40U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        vlSelf->top__DOT__singleCycle__DOT__alu_data 
            = ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                ? 0U : ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                         ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                             ? 0U : vlSelf->top__DOT__singleCycle__DOT__operand_b)
                         : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                             ? ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_a)
                                 ? (IData)(((0xffffffff00000000ULL 
                                             | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                            >> (0x1fU 
                                                & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                 : ((0x1fU >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                     ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                        >> vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                     : 0U)) : ((0x1fU 
                                                >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                                ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                                   >> vlSelf->top__DOT__singleCycle__DOT__operand_b)
                                                : 0U))));
    } else if ((0x20U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        vlSelf->top__DOT__singleCycle__DOT__alu_data 
            = ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                ? ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                    ? ((0x1fU >= vlSelf->top__DOT__singleCycle__DOT__operand_b)
                        ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                           << vlSelf->top__DOT__singleCycle__DOT__operand_b)
                        : 0U) : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                 & vlSelf->top__DOT__singleCycle__DOT__operand_b))
                : ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                    ? (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                       | vlSelf->top__DOT__singleCycle__DOT__operand_b)
                    : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                       ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
    } else if ((0x10U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        if ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((1U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? 1U : 0U);
        } else if ((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          & vlSelf->top__DOT__singleCycle__DOT__operand_b))) {
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((1U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? 0U : 1U);
        } else if ((1U & (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                          | vlSelf->top__DOT__singleCycle__DOT__operand_b))) {
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((1U & vlSelf->top__DOT__singleCycle__DOT__operand_a)
                    ? 1U : 0U);
        } else {
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)));
            vlSelf->top__DOT__singleCycle__DOT__alu_data 
                = ((1U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? 0U : 1U);
        }
    } else {
        vlSelf->top__DOT__singleCycle__DOT__alu_data 
            = ((8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                ? ((IData)(1U) + (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                  + (~ vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                   + vlSelf->top__DOT__singleCycle__DOT__operand_b));
    }
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o 
        = (0U != vlSelf->top__DOT__singleCycle__DOT__alu_data);
    if ((0x800U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = vlSelf->top__DOT__singleCycle__DOT__alu_data;
    } else if ((1U & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                         >> 0xbU)))) {
        vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc 
            = ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc);
    }
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
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3 = 0U;
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2 = 0U;
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1 = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))) {
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
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data 
        = ((0x400U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
            ? ((0x200U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT____Vxrand_h96fd10a2__0
                : ((0x100U & vlSelf->top__DOT__singleCycle__DOT__alu_data)
                    ? vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3
                    : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2))
            : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1);
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
    vlSelf->top__DOT__singleCycle__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o = VL_RAND_RESET_I(1);
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
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_less = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_equal = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
