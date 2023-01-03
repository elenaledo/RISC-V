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
    vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri 
        = vlSelf->io_sw_i;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3;
    CData/*4:0*/ __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3;
    // Body
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3 = 0U;
    __Vdlyvset__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0 = 0U;
    if ((((((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                          >> 8U))) | (1U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                   >> 8U)))) 
           | (2U == (7U & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                           >> 8U)))) | (3U == (7U & 
                                               (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                                                >> 8U)))) 
         & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
            >> 2U))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0 
                = (0xffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0 = 0U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1 = 8U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3 
                = (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
    }
    if ((IData)(((0x400U == (0x700U & vlSelf->top__DOT__singleCycle__DOT__alu_data)) 
                 & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                    >> 2U)))) {
        if ((1U == (1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0 
                = (0xffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0 = 0U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((2U == (2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 8U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1 = 8U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((4U == (4U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2 
                = (0xffU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                            >> 0x10U));
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2 = 0x10U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
        if ((8U == (8U & (IData)(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask)))) {
            __Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3 
                = (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                   >> 0x18U);
            __Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3 = 1U;
            __Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3 = 0x18U;
            __Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3 
                = (0x3fU & (vlSelf->top__DOT__singleCycle__DOT__alu_data 
                            >> 2U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
          >> 0xaU) & (0U != (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                      >> 7U))))) {
        __Vdlyvval__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0 
            = ((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                ? ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                    ? 0U : ((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))
                : ((1U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                    ? ((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                  >> 0xeU)) & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                                  >> 2U))))
                        ? ((0U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 0xcU)))
                            ? ((((0x80U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                  ? 0xffffffU : 0U) 
                                << 8U) | (0xffU & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                            : ((1U == (7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                             >> 0xcU)))
                                ? ((((0x8000U & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                        : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                    : vlSelf->top__DOT__singleCycle__DOT__alu_data));
        __Vdlyvset__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0 
            = (0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                        >> 7U));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v0))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v1))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v2))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__memory
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__memory__v3))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v0))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v1))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v2))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3) {
        vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri[__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3))) 
                & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri
                [__Vdlyvdim0__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3) 
                                   << (IData)(__Vdlyvlsb__top__DOT__singleCycle__DOT__lsu_block__DOT__output_peri__v3))));
    }
    if (__Vdlyvset__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0) {
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[__Vdlyvdim0__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__singleCycle__DOT__regfile_block__DOT__mem__v0;
    }
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc 
        = ((IData)(vlSelf->rst_ni) ? vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc
            : 0U);
    vlSelf->top__DOT__singleCycle__DOT__instr = vlSelf->top__DOT__singleCycle__DOT__imem_block__DOT__imem
        [(0xfffU & (vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc 
                    >> 2U))];
    vlSelf->top__DOT__singleCycle__DOT__imm = ((0x40U 
                                                & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                ? (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0x14U) 
                                                       | ((0xff000U 
                                                           & vlSelf->top__DOT__singleCycle__DOT__instr) 
                                                          | ((0x800U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 9U)) 
                                                             | (0x7feU 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 0x14U)))))
                                                       : 0U)
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0x800U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                   >> 7U))))))))
                                                    : 0U)
                                                : (
                                                   (0x20U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : 0U))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | ((0xfe0U 
                                                           & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                >> 7U)))))))
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      (0xfffff000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U))))
                                                     : 
                                                    ((8U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 0U
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                          >> 0x14U)))))));
    vlSelf->top__DOT__singleCycle__DOT__rs1_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0xfU))];
    vlSelf->top__DOT__singleCycle__DOT__rs2_data = 
        vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem
        [(0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                   >> 0x14U))];
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data 
        = ((0x40U & vlSelf->top__DOT__singleCycle__DOT__instr)
            ? ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)
                ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                    ? 0U : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                             ? ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                 ? 0xd82U : 0U) : (
                                                   (4U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0xc82U
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x380U
                                                        : 0xb80U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0xb80U
                                                        : 0x380U))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x180U
                                                        : 0x980U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_less)
                                                        ? 0x980U
                                                        : 0x180U)))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                      ? 0U
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                                        ? 0x180U
                                                        : 0x980U)
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__singleCycle__DOT__bl_equal)
                                                        ? 0x980U
                                                        : 0x180U)))))))
                : 0U) : ((0x20U & vlSelf->top__DOT__singleCycle__DOT__instr)
                          ? ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                              ? ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0x4d0U
                                           : ((0x4000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x430U
                                                    : 0x428U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x440U
                                                     : 0x448U)
                                                    : 0x420U))
                                               : ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x418U
                                                    : 0x410U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x438U
                                                    : 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x408U
                                                     : 0x400U))))))
                              : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0U : 0x84U)))
                          : ((0x10U & vlSelf->top__DOT__singleCycle__DOT__instr)
                              ? ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0x580U
                                           : ((0x4000U 
                                               & vlSelf->top__DOT__singleCycle__DOT__instr)
                                               ? ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x4b0U
                                                    : 0x4a8U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 
                                                   ((0x40000000U 
                                                     & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                     ? 0x5c0U
                                                     : 0x5c8U)
                                                    : 0x4a0U))
                                               : ((0x2000U 
                                                   & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0U
                                                    : 0x498U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->top__DOT__singleCycle__DOT__instr)
                                                    ? 0x490U
                                                    : 0x480U)))))
                              : ((8U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                  ? 0U : ((4U & vlSelf->top__DOT__singleCycle__DOT__instr)
                                           ? 0U : 0x481U)))));
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

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__singleCycle__DOT__bl_less ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_less)
         | (vlSelf->top__DOT__singleCycle__DOT__bl_equal ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_equal));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__bl_less ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_less))) VL_DBG_MSGF("        CHANGE: src/singlecycle.sv:26: top.singleCycle.bl_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__singleCycle__DOT__bl_equal ^ vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_equal))) VL_DBG_MSGF("        CHANGE: src/singlecycle.sv:27: top.singleCycle.bl_equal\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_less 
        = vlSelf->top__DOT__singleCycle__DOT__bl_less;
    vlSelf->__Vchglast__TOP__top__DOT__singleCycle__DOT__bl_equal 
        = vlSelf->top__DOT__singleCycle__DOT__bl_equal;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
