// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+614,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+615,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+617,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+618,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+619,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+620,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+621,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+622,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+623,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+624,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+614,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+615,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+617,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+618,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+619,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+620,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+621,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+622,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+623,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+624,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBus(c+614,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+615,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+617,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+618,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+619,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+620,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+621,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+622,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+623,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+624,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,"bl_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"bl_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"bl_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"bl_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+42,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+43,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+46,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    {
        const char* __VenumItemNames[]
        = {"A_ADD", "A_SUB", "A_SLT", "A_SLTU", "A_XOR", 
                                "A_OR", "A_AND", "A_SLL", 
                                "A_SRL", "A_SRA", "A_LUI"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010"};
        tracep->declDTypeEnum(1, "mypkg::alu_op_e", 11, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+47,"alu_op",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BRC_block ");
    tracep->declBus(c+50,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+41,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32_s ");
    tracep->declBus(c+50,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+59,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+62,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,"bl_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,"a_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,"b_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compare32u_0 ");
    tracep->declBus(c+50,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+66,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+69,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+70,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+71,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+72,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+73,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+77,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+78,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+80,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+83,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+84,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+85,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+90,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+95,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+100,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+105,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+107,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+110,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+111,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+112,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+117,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+122,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+127,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+132,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+133,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+134,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+138,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+139,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+144,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+149,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+154,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+159,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+160,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+161,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+164,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+165,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+166,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+171,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+176,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+181,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+186,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+187,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+188,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+192,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+193,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+194,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+195,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+198,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+200,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+205,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+210,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+215,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+222,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+225,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+226,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+227,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+232,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+237,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+242,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+247,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+248,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+249,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+252,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+253,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+254,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+259,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+264,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+269,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+274,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+275,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+276,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+279,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+281,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+286,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+291,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+296,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("compare32u_1 ");
    tracep->declBus(c+64,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+65,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+301,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+304,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+305,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+306,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+307,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+308,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+311,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+312,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+313,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+314,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+315,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+318,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+319,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+320,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+325,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+330,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+335,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+340,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+341,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+342,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+345,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+346,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+347,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+352,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+357,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+362,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+367,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+368,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+369,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+372,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+373,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+374,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+379,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+384,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+389,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+394,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+395,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+396,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+399,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+400,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+401,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+406,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+411,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+412,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+413,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+416,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+421,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+422,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+423,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+426,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+427,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+428,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+429,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+430,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+433,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+434,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+435,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+440,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+445,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+450,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+455,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+456,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+457,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+460,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+462,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+467,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+472,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+477,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+482,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+483,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+484,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+487,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+488,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+489,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+494,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+499,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+504,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+509,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+510,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+511,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+514,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+515,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+516,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+518,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+521,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+526,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+531,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("compare32_u ");
    tracep->declBus(c+50,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+537,"el_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+538,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("compare160 ");
    tracep->declBus(c+71,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+72,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+539,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+542,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+543,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+78,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+544,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+547,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+548,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+85,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+90,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+95,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+100,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+105,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+106,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+549,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+552,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+553,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+112,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+117,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+122,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+127,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+132,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+133,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+554,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+557,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+558,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+139,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+144,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+149,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+154,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+159,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+160,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+559,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+562,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+563,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+166,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+171,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+176,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+181,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("compare161 ");
    tracep->declBus(c+186,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+187,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+564,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+567,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+568,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBus(c+193,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+194,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+569,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+572,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+573,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+200,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+205,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+210,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+215,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBus(c+220,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+221,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+574,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+577,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+578,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+227,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+232,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+237,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+242,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBus(c+247,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+248,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+579,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+582,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+583,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+254,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+259,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+264,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+269,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBus(c+274,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+275,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+584,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+587,"eq_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+588,"al_t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("compare10 ");
    tracep->declBit(c+281,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare11 ");
    tracep->declBit(c+286,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare12 ");
    tracep->declBit(c+291,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("compare13 ");
    tracep->declBit(c+296,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"alarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"blarger_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("PC_block ");
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+589,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+52,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"alu_op_i",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+590,"bru_exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+591,"alu_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+592,"alu_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,"alu_slt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,"alu_sltu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+593,"alu_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,"alu_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,"alu_and",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,"alu_sll",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+597,"alu_srl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,"alu_sra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"alu_lui",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+599,"data_tmp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+601,"data_tmp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+603,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+604,"tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctr_unit_block ");
    tracep->declBus(c+632,"OP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+633,"OP_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+634,"LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+635,"STORE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+636,"BRANCH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+637,"LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+638,"AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+639,"JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+640,"JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+641,"ADD_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+642,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+643,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+644,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+645,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+646,"SRL_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+647,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+648,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+641,"ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+643,"SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+644,"SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+645,"XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+647,"ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+648,"ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+642,"SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+646,"SRLI_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+641,"LB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+642,"LH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+643,"LW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+645,"LBU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+646,"LHU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+641,"SB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+642,"SH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+643,"SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+641,"BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+642,"BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+645,"BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+646,"BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+647,"BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+648,"BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+37,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"bl_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"bl_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"bl_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"bl_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+45,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_block ");
    tracep->declBus(c+649,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+605,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+37,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen_block ");
    tracep->declBus(c+633,"I_FORMAT_CALCULATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+634,"I_FORMAT_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+635,"S_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+636,"B_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+637,"U_FORMAT_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+638,"U_FORMAT_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+639,"J_FORMAT_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+640,"J_FORMAT_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+37,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_block ");
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+614,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+607,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+628,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+615,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+617,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+618,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+619,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+620,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+621,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+622,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+623,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+624,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+625,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+609,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_a ");
    tracep->declBus(c+50,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_b ");
    tracep->declBus(c+51,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+44,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_block ");
    tracep->declBus(c+650,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+651,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+626,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+611,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+612,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+613,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+629,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+42,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_sel_block ");
    tracep->declBus(c+54,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+628,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+652,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+629,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data),32);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    bufp->fullBit(oldp+36,((1U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)));
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__bl_sel));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__bl_unsigned));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__rd_wren));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__op_a_sel));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__op_b_sel));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__mem_wren));
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__wb_sel),2);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT____Vcellout__ctr_unit_block__alu_op_o),4);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullIData(oldp+55,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
    bufp->fullBit(oldp+56,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t)) 
                                     | (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                         >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                                   & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                      >> 1U))))))));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
    bufp->fullBit(oldp+58,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t))));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__alarger_o));
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__eq_t),2);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__al_t),2);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__bl_t),2);
    bufp->fullIData(oldp+64,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))),32);
    bufp->fullIData(oldp+65,(((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))),32);
    bufp->fullBit(oldp+66,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t))));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o));
    bufp->fullBit(oldp+68,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_0__alarger_o))))));
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__el_t),2);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__al_t),2);
    bufp->fullSData(oldp+71,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),16);
    bufp->fullSData(oldp+72,((0xffffU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),16);
    bufp->fullBit(oldp+73,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+75,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+78,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs1_data)),4);
    bufp->fullCData(oldp+79,((0xfU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),4);
    bufp->fullBit(oldp+80,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+82,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                     | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+85,((1U & vlSelf->top__DOT__singleCycle__DOT__rs1_data)));
    bufp->fullBit(oldp+86,((1U & vlSelf->top__DOT__singleCycle__DOT__rs2_data)));
    bufp->fullBit(oldp+87,((1U & (~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                     ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+88,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  & (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+89,((1U & ((~ vlSelf->top__DOT__singleCycle__DOT__rs1_data) 
                                  & vlSelf->top__DOT__singleCycle__DOT__rs2_data))));
    bufp->fullBit(oldp+90,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 1U))));
    bufp->fullBit(oldp+91,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 1U))));
    bufp->fullBit(oldp+92,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                     >> 1U)))));
    bufp->fullBit(oldp+93,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 1U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                >> 1U))))));
    bufp->fullBit(oldp+94,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 1U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 1U)))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                  >> 2U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                  >> 2U))));
    bufp->fullBit(oldp+97,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                     >> 2U)))));
    bufp->fullBit(oldp+98,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 2U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                >> 2U))))));
    bufp->fullBit(oldp+99,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                      >> 2U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 2U)))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 3U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 3U))));
    bufp->fullBit(oldp+102,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 3U)))));
    bufp->fullBit(oldp+103,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 3U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 3U))))));
    bufp->fullBit(oldp+104,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 3U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 3U)))));
    bufp->fullCData(oldp+105,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 4U))),4);
    bufp->fullCData(oldp+106,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 4U))),4);
    bufp->fullBit(oldp+107,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+109,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+112,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 4U))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 4U))));
    bufp->fullBit(oldp+114,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 4U)))));
    bufp->fullBit(oldp+115,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 4U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 4U))))));
    bufp->fullBit(oldp+116,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 4U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 4U)))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 5U))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 5U))));
    bufp->fullBit(oldp+119,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 5U)))));
    bufp->fullBit(oldp+120,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 5U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 5U))))));
    bufp->fullBit(oldp+121,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 5U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 5U)))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 6U))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 6U))));
    bufp->fullBit(oldp+124,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 6U)))));
    bufp->fullBit(oldp+125,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 6U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 6U))))));
    bufp->fullBit(oldp+126,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 6U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 6U)))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 7U))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 7U))));
    bufp->fullBit(oldp+129,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 7U)))));
    bufp->fullBit(oldp+130,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 7U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 7U))))));
    bufp->fullBit(oldp+131,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 7U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 7U)))));
    bufp->fullCData(oldp+132,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U))),4);
    bufp->fullCData(oldp+133,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 8U))),4);
    bufp->fullBit(oldp+134,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+136,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+139,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 8U))));
    bufp->fullBit(oldp+140,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 8U))));
    bufp->fullBit(oldp+141,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 8U)))));
    bufp->fullBit(oldp+142,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 8U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 8U))))));
    bufp->fullBit(oldp+143,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 8U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 8U)))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 9U))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 9U))));
    bufp->fullBit(oldp+146,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 9U)))));
    bufp->fullBit(oldp+147,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 9U) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                 >> 9U))))));
    bufp->fullBit(oldp+148,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 9U)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 9U)))));
    bufp->fullBit(oldp+149,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xaU))));
    bufp->fullBit(oldp+151,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+152,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+153,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xaU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xbU))));
    bufp->fullBit(oldp+156,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xbU)))));
    bufp->fullBit(oldp+157,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+158,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xbU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xbU)))));
    bufp->fullCData(oldp+159,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+160,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+161,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+163,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+167,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xcU))));
    bufp->fullBit(oldp+168,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+169,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+170,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xcU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xcU)))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+172,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xdU))));
    bufp->fullBit(oldp+173,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+174,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+175,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xdU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xdU)))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+177,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xeU))));
    bufp->fullBit(oldp+178,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+179,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+180,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xeU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xeU)))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+182,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0xfU))));
    bufp->fullBit(oldp+183,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+184,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+185,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0xfU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0xfU)))));
    bufp->fullSData(oldp+186,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+187,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+188,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+190,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+193,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+194,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+195,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+197,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+200,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x10U))));
    bufp->fullBit(oldp+202,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+203,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+204,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x10U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+206,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x11U))));
    bufp->fullBit(oldp+207,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+208,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+209,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x11U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+211,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x12U))));
    bufp->fullBit(oldp+212,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+213,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+214,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x12U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+215,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x13U))));
    bufp->fullBit(oldp+217,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+218,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+219,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x13U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+220,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+221,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+222,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+224,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+227,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x14U))));
    bufp->fullBit(oldp+229,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+230,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+231,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x14U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+233,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x15U))));
    bufp->fullBit(oldp+234,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+235,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+236,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x15U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+238,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x16U))));
    bufp->fullBit(oldp+239,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+240,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+241,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x16U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+243,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x17U))));
    bufp->fullBit(oldp+244,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+245,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+246,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x17U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+247,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+248,((0xfU & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+249,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+251,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+252,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+254,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x18U))));
    bufp->fullBit(oldp+256,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+257,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+258,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x18U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x19U))));
    bufp->fullBit(oldp+261,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+262,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+263,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x19U)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+265,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+266,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+267,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+268,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1aU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+269,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+270,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+271,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+272,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+273,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1bU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+274,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+275,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+276,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+277,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+278,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_0__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+281,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+282,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+283,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+284,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+285,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1cU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+286,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+287,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+288,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+289,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+290,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1dU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+291,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+292,((1U & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+293,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+294,((1U & ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+295,((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       >> 0x1eU)) & 
                                   (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+296,((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+297,((vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                             >> 0x1fU)));
    bufp->fullBit(oldp+298,((1U & (~ ((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                       ^ vlSelf->top__DOT__singleCycle__DOT__rs2_data) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+299,(((vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+300,(((~ (vlSelf->top__DOT__singleCycle__DOT__rs1_data 
                                 >> 0x1fU)) & (vlSelf->top__DOT__singleCycle__DOT__rs2_data 
                                               >> 0x1fU))));
    bufp->fullBit(oldp+301,((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t))));
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o));
    bufp->fullBit(oldp+303,((1U & (~ ((3U == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT____Vcellout__compare32u_1__alarger_o))))));
    bufp->fullCData(oldp+304,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__el_t),2);
    bufp->fullCData(oldp+305,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__al_t),2);
    bufp->fullSData(oldp+306,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),16);
    bufp->fullSData(oldp+307,((0xffffU & ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),16);
    bufp->fullBit(oldp+308,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+309,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+310,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+311,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+312,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__al_t),4);
    bufp->fullCData(oldp+313,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),4);
    bufp->fullCData(oldp+314,((0xfU & ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))),4);
    bufp->fullBit(oldp+315,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+316,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+317,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+318,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+320,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)))));
    bufp->fullBit(oldp+321,((1U & ((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))));
    bufp->fullBit(oldp+322,((1U & (~ (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                      ^ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
    bufp->fullBit(oldp+323,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   & (~ ((IData)(1U) 
                                         + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)))))));
    bufp->fullBit(oldp+324,((1U & ((~ ((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                                   & ((IData)(1U) + 
                                      (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))))));
    bufp->fullBit(oldp+325,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+326,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 1U))));
    bufp->fullBit(oldp+327,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 1U)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 1U)))))));
    bufp->fullBit(oldp+328,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 1U) & (~ (7U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 1U)))))));
    bufp->fullBit(oldp+329,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 1U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 1U)))));
    bufp->fullBit(oldp+330,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+331,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 2U))));
    bufp->fullBit(oldp+332,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 2U)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 2U)))))));
    bufp->fullBit(oldp+333,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 2U) & (~ (3U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 2U)))))));
    bufp->fullBit(oldp+334,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 2U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 2U)))));
    bufp->fullBit(oldp+335,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+336,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 3U))));
    bufp->fullBit(oldp+337,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 3U)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 3U)))))));
    bufp->fullBit(oldp+338,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 3U) & (~ (1U 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 3U)))))));
    bufp->fullBit(oldp+339,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 3U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 3U)))));
    bufp->fullCData(oldp+340,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+341,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+342,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+343,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+344,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+345,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+346,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+347,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+348,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 4U))));
    bufp->fullBit(oldp+349,((1U & (~ ((0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 4U)) 
                                      ^ (0xfffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 4U)))))));
    bufp->fullBit(oldp+350,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 4U) & (~ (0xfffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 4U)))))));
    bufp->fullBit(oldp+351,((1U & ((~ (0xfffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 4U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 4U)))));
    bufp->fullBit(oldp+352,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+353,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 5U))));
    bufp->fullBit(oldp+354,((1U & (~ ((0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 5U)) 
                                      ^ (0x7ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 5U)))))));
    bufp->fullBit(oldp+355,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 5U) & (~ (0x7ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 5U)))))));
    bufp->fullBit(oldp+356,((1U & ((~ (0x7ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 5U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 5U)))));
    bufp->fullBit(oldp+357,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+358,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 6U))));
    bufp->fullBit(oldp+359,((1U & (~ ((0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 6U)) 
                                      ^ (0x3ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 6U)))))));
    bufp->fullBit(oldp+360,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 6U) & (~ (0x3ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 6U)))))));
    bufp->fullBit(oldp+361,((1U & ((~ (0x3ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 6U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 6U)))));
    bufp->fullBit(oldp+362,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+363,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 7U))));
    bufp->fullBit(oldp+364,((1U & (~ ((0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 7U)) 
                                      ^ (0x1ffU & (
                                                   ((IData)(1U) 
                                                    + 
                                                    (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                   >> 7U)))))));
    bufp->fullBit(oldp+365,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 7U) & (~ (0x1ffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 7U)))))));
    bufp->fullBit(oldp+366,((1U & ((~ (0x1ffU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                 >> 7U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 7U)))));
    bufp->fullCData(oldp+367,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+368,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+369,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+371,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+372,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+373,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+374,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+375,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 8U))));
    bufp->fullBit(oldp+376,((1U & (~ ((0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 8U)) 
                                      ^ (0xffU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 8U)))))));
    bufp->fullBit(oldp+377,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 8U) & (~ (0xffU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 8U)))))));
    bufp->fullBit(oldp+378,((1U & ((~ (0xffU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 8U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 8U)))));
    bufp->fullBit(oldp+379,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 9U))));
    bufp->fullBit(oldp+380,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 9U))));
    bufp->fullBit(oldp+381,((1U & (~ ((0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 9U)) 
                                      ^ (0x7fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 9U)))))));
    bufp->fullBit(oldp+382,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 9U) & (~ (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                    >> 9U)))))));
    bufp->fullBit(oldp+383,((1U & ((~ (0x7fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 9U))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 9U)))));
    bufp->fullBit(oldp+384,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+385,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+386,((1U & (~ ((0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xaU)) 
                                      ^ (0x3fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xaU)))))));
    bufp->fullBit(oldp+387,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xaU) & (~ (0x3fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xaU)))))));
    bufp->fullBit(oldp+388,((1U & ((~ (0x3fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xaU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xaU)))));
    bufp->fullBit(oldp+389,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+390,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+391,((1U & (~ ((0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xbU)) 
                                      ^ (0x1fU & (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0xbU)))))));
    bufp->fullBit(oldp+392,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xbU) & (~ (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xbU)))))));
    bufp->fullBit(oldp+393,((1U & ((~ (0x1fU & (((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                                >> 0xbU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xbU)))));
    bufp->fullCData(oldp+394,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+395,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+396,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+397,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+398,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+399,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+400,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+401,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+402,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+403,((1U & (~ ((0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                               >> 0xcU)) 
                                      ^ (0xfU & (((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                 >> 0xcU)))))));
    bufp->fullBit(oldp+404,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xcU) & (~ (0xfU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xcU)))))));
    bufp->fullBit(oldp+405,((1U & ((~ (0xfU & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                               >> 0xcU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xcU)))));
    bufp->fullBit(oldp+406,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+407,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+408,((1U & (~ ((7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xdU)) 
                                      ^ (7U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xdU)))))));
    bufp->fullBit(oldp+409,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xdU) & (~ (7U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xdU)))))));
    bufp->fullBit(oldp+410,((1U & ((~ (7U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xdU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xdU)))));
    bufp->fullBit(oldp+411,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+412,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+413,((1U & (~ ((3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xeU)) 
                                      ^ (3U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xeU)))))));
    bufp->fullBit(oldp+414,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xeU) & (~ (3U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xeU)))))));
    bufp->fullBit(oldp+415,((1U & ((~ (3U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xeU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xeU)))));
    bufp->fullBit(oldp+416,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+417,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+418,((1U & (~ ((1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xfU)) 
                                      ^ (1U & (((IData)(1U) 
                                                + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                               >> 0xfU)))))));
    bufp->fullBit(oldp+419,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0xfU) & (~ (1U 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                      >> 0xfU)))))));
    bufp->fullBit(oldp+420,((1U & ((~ (1U & (((IData)(1U) 
                                              + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                             >> 0xfU))) 
                                   & (((IData)(1U) 
                                       + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                      >> 0xfU)))));
    bufp->fullSData(oldp+421,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+422,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+423,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+424,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+425,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+426,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+427,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__al_t),4);
    bufp->fullCData(oldp+428,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U))),4);
    bufp->fullCData(oldp+429,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x10U))),4);
    bufp->fullBit(oldp+430,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+431,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+432,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+433,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+434,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+435,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+436,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+437,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x10U)))));
    bufp->fullBit(oldp+438,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x10U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+439,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x10U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x10U)))));
    bufp->fullBit(oldp+440,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+441,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+442,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x11U)))));
    bufp->fullBit(oldp+443,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x11U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+444,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x11U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x11U)))));
    bufp->fullBit(oldp+445,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+446,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+447,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x12U)))));
    bufp->fullBit(oldp+448,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x12U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+449,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x12U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x12U)))));
    bufp->fullBit(oldp+450,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+451,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+452,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x13U)))));
    bufp->fullBit(oldp+453,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x13U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+454,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x13U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x13U)))));
    bufp->fullCData(oldp+455,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U))),4);
    bufp->fullCData(oldp+456,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x14U))),4);
    bufp->fullBit(oldp+457,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+458,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+459,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+460,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+461,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+462,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+463,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+464,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x14U)))));
    bufp->fullBit(oldp+465,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x14U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+466,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x14U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x14U)))));
    bufp->fullBit(oldp+467,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+468,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+469,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x15U)))));
    bufp->fullBit(oldp+470,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x15U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+471,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x15U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x15U)))));
    bufp->fullBit(oldp+472,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+473,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+474,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x16U)))));
    bufp->fullBit(oldp+475,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x16U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+476,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x16U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x16U)))));
    bufp->fullBit(oldp+477,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+478,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+479,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x17U)))));
    bufp->fullBit(oldp+480,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x17U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+481,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x17U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x17U)))));
    bufp->fullCData(oldp+482,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U))),4);
    bufp->fullCData(oldp+483,((0xfU & (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                       >> 0x18U))),4);
    bufp->fullBit(oldp+484,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+485,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+486,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+487,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+488,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+489,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+490,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+491,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x18U)))));
    bufp->fullBit(oldp+492,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x18U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+493,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x18U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x18U)))));
    bufp->fullBit(oldp+494,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+495,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+496,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+497,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x19U) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+498,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x19U)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x19U)))));
    bufp->fullBit(oldp+499,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+500,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+501,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1aU)))));
    bufp->fullBit(oldp+502,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1aU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+503,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1aU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1aU)))));
    bufp->fullBit(oldp+504,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+505,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+506,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1bU)))));
    bufp->fullBit(oldp+507,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1bU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+508,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1bU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1bU)))));
    bufp->fullCData(oldp+509,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                               >> 0x1cU)),4);
    bufp->fullCData(oldp+510,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                               >> 0x1cU)),4);
    bufp->fullBit(oldp+511,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+512,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+513,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+514,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+515,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_s__DOT__compare32u_1__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+516,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+517,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+518,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1cU)))));
    bufp->fullBit(oldp+519,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1cU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+520,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1cU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1cU)))));
    bufp->fullBit(oldp+521,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+522,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+523,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1dU)))));
    bufp->fullBit(oldp+524,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1dU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+525,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1dU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1dU)))));
    bufp->fullBit(oldp+526,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+527,((1U & (((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+528,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1eU)))));
    bufp->fullBit(oldp+529,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1eU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1eU))))));
    bufp->fullBit(oldp+530,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1eU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1eU)))));
    bufp->fullBit(oldp+531,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+532,((((IData)(1U) + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+533,((1U & (~ ((((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       ^ ((IData)(1U) 
                                          + (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data))) 
                                      >> 0x1fU)))));
    bufp->fullBit(oldp+534,((1U & ((((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                    >> 0x1fU) & (~ 
                                                 (((IData)(1U) 
                                                   + 
                                                   (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                                  >> 0x1fU))))));
    bufp->fullBit(oldp+535,((1U & ((~ (((IData)(1U) 
                                        + (~ vlSelf->top__DOT__singleCycle__DOT__rs1_data)) 
                                       >> 0x1fU)) & 
                                   (((IData)(1U) + 
                                     (~ vlSelf->top__DOT__singleCycle__DOT__rs2_data)) 
                                    >> 0x1fU)))));
    bufp->fullBit(oldp+536,((1U & (((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                    >> 1U) | ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t) 
                                              & ((IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t) 
                                                 >> 1U))))));
    bufp->fullCData(oldp+537,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__el_t),2);
    bufp->fullCData(oldp+538,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__al_t),2);
    bufp->fullBit(oldp+539,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t))));
    bufp->fullBit(oldp+540,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o));
    bufp->fullBit(oldp+541,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare160__alarger_o))))));
    bufp->fullCData(oldp+542,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__eq_t),4);
    bufp->fullCData(oldp+543,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__al_t),4);
    bufp->fullBit(oldp+544,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+545,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+546,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+547,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+548,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+549,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+550,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+551,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+552,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+553,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+554,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+555,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+556,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+557,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+558,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+559,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+560,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+561,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+562,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+563,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare160__DOT__compare13__DOT__al_t),4);
    bufp->fullBit(oldp+564,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t))));
    bufp->fullBit(oldp+565,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o));
    bufp->fullBit(oldp+566,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT____Vcellout__compare161__alarger_o))))));
    bufp->fullCData(oldp+567,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__eq_t),4);
    bufp->fullCData(oldp+568,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__al_t),4);
    bufp->fullBit(oldp+569,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t))));
    bufp->fullBit(oldp+570,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o));
    bufp->fullBit(oldp+571,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare10__alarger_o))))));
    bufp->fullCData(oldp+572,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__eq_t),4);
    bufp->fullCData(oldp+573,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare10__DOT__al_t),4);
    bufp->fullBit(oldp+574,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t))));
    bufp->fullBit(oldp+575,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o));
    bufp->fullBit(oldp+576,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare11__alarger_o))))));
    bufp->fullCData(oldp+577,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__eq_t),4);
    bufp->fullCData(oldp+578,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare11__DOT__al_t),4);
    bufp->fullBit(oldp+579,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t))));
    bufp->fullBit(oldp+580,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o));
    bufp->fullBit(oldp+581,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare12__alarger_o))))));
    bufp->fullCData(oldp+582,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__eq_t),4);
    bufp->fullCData(oldp+583,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare12__DOT__al_t),4);
    bufp->fullBit(oldp+584,((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t))));
    bufp->fullBit(oldp+585,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o));
    bufp->fullBit(oldp+586,((1U & (~ ((0xfU == (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t)) 
                                      | (IData)(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT____Vcellout__compare13__alarger_o))))));
    bufp->fullCData(oldp+587,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__eq_t),4);
    bufp->fullCData(oldp+588,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32_u__DOT__compare161__DOT__compare13__DOT__al_t),4);
    bufp->fullIData(oldp+589,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
    bufp->fullBit(oldp+590,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o));
    bufp->fullIData(oldp+591,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               + vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
    bufp->fullIData(oldp+592,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sub),32);
    bufp->fullIData(oldp+593,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               ^ vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
    bufp->fullIData(oldp+594,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               | vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
    bufp->fullIData(oldp+595,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               & vlSelf->top__DOT__singleCycle__DOT__operand_b)),32);
    bufp->fullIData(oldp+596,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               << (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
    bufp->fullIData(oldp+597,((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                               >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),32);
    bufp->fullIData(oldp+598,(((vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                >> 0x1fU) ? (IData)(
                                                    ((0xffffffff00000000ULL 
                                                      | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__operand_b)))
                                : (vlSelf->top__DOT__singleCycle__DOT__operand_a 
                                   >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)))),32);
    bufp->fullQData(oldp+599,((0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
    bufp->fullQData(oldp+601,(((0xffffffff00000000ULL 
                                | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                               >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
    bufp->fullCData(oldp+603,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
    bufp->fullIData(oldp+604,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp),32);
    bufp->fullSData(oldp+605,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
    bufp->fullBit(oldp+606,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
    bufp->fullCData(oldp+607,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                     >> 0xcU))),3);
    bufp->fullIData(oldp+608,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1),32);
    bufp->fullIData(oldp+609,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2),32);
    bufp->fullCData(oldp+610,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask),4);
    bufp->fullCData(oldp+611,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+612,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+613,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                        >> 7U))),5);
    bufp->fullIData(oldp+614,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+615,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+616,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+617,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+618,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+619,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+620,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+621,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+622,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+623,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+624,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+625,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+626,(vlSelf->clk_i));
    bufp->fullBit(oldp+627,(vlSelf->rst_ni));
    bufp->fullIData(oldp+628,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
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
    bufp->fullIData(oldp+629,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__wb_sel))
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
                                            : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                                    >> 0xcU)))
                                                ? (
                                                   (((0x8000U 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                                      ? 0xffffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                                : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data))
                                        : vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data)
                                    : vlSelf->top__DOT__singleCycle__DOT__alu_data))),32);
    bufp->fullIData(oldp+630,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_slt),32);
    bufp->fullIData(oldp+631,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__alu_sltu),32);
    bufp->fullCData(oldp+632,(0xcU),5);
    bufp->fullCData(oldp+633,(4U),5);
    bufp->fullCData(oldp+634,(0U),5);
    bufp->fullCData(oldp+635,(8U),5);
    bufp->fullCData(oldp+636,(0x18U),5);
    bufp->fullCData(oldp+637,(0xdU),5);
    bufp->fullCData(oldp+638,(5U),5);
    bufp->fullCData(oldp+639,(0x1bU),5);
    bufp->fullCData(oldp+640,(0x19U),5);
    bufp->fullCData(oldp+641,(0U),3);
    bufp->fullCData(oldp+642,(1U),3);
    bufp->fullCData(oldp+643,(2U),3);
    bufp->fullCData(oldp+644,(3U),3);
    bufp->fullCData(oldp+645,(4U),3);
    bufp->fullCData(oldp+646,(5U),3);
    bufp->fullCData(oldp+647,(6U),3);
    bufp->fullCData(oldp+648,(7U),3);
    bufp->fullIData(oldp+649,(0xeU),32);
    bufp->fullIData(oldp+650,(0x20U),32);
    bufp->fullIData(oldp+651,(5U),32);
    bufp->fullIData(oldp+652,(0U),32);
}
