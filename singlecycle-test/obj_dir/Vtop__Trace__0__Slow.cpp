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
    tracep->declBus(c+84,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+84,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("singleCycle ");
    tracep->declBus(c+84,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"instr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,"bl_less",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"bl_equal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"bl_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"bl_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+6,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+9,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+68,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("BRC_block ");
    tracep->declBus(c+70,"rs1_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"br_unsigned_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"br_less_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"br_equal_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+14,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+15,"br_less_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"br_less_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"br_equal_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"br_equal_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("compare32 ");
    tracep->declBus(c+70,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
    tracep->declBus(c+14,"alu_op_i",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+20,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"bru_exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+73,"data_tmp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+75,"data_tmp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+77,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+100,"tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("PC_block ");
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"pc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"pc_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"pc_four_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_block ");
    tracep->declBus(c+11,"operand_a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+12,"operand_b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"alu_op_i",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+13,"alu_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"bru_exp_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+23,"data_tmp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,"data_tmp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+27,"shift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+101,"tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctr_unit_block ");
    tracep->declBus(c+102,"R_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+103,"I_FORMAT_CALCULATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+104,"I_FORMAT_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+105,"S_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+106,"B_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+107,"U_FORMAT_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+108,"U_FORMAT_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+109,"J_FORMAT_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+110,"J_FORMAT_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+111,"ADD_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+113,"SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+114,"SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+115,"XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+116,"SRL_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+117,"OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+118,"AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+111,"ADDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"SLTI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+113,"SLTIU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+115,"XORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+117,"ORI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+118,"ANDI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"SLLI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+116,"SRLI_SRAI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+111,"LB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"LH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+113,"LW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+115,"LBU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+116,"LHU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+111,"SB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"SH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+113,"SW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+111,"BEQ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+112,"BNE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+115,"BLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+116,"BGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+117,"BLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+118,"BGEU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+67,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"bl_less_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"bl_equal_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"bl_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"bl_unsigned_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"rd_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"op_a_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"op_b_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"alu_op_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+8,"mem_wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"wb_sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+28,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_block ");
    tracep->declBus(c+119,"IMEM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+78,"paddr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 13,0);
    tracep->declBus(c+67,"prdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"unused",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immgen_block ");
    tracep->declBus(c+103,"I_FORMAT_CALCULATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+104,"I_FORMAT_LOAD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+105,"S_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+106,"B_FORMAT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+107,"U_FORMAT_LUI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+108,"U_FORMAT_AUIPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+109,"J_FORMAT_JAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+110,"J_FORMAT_JALR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+67,"instr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"imm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_block ");
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"st_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"st_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"sel_mod",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+98,"ld_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"input_peri",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"dataout_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"dataout_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"dataout_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"temp_ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_a ");
    tracep->declBus(c+70,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+6,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_operand_b ");
    tracep->declBus(c+71,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+7,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+12,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_block ");
    tracep->declBus(c+120,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+121,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+96,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+81,"rs1_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+82,"rs2_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+83,"rd_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+99,"rd_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+5,"rd_wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"rs1_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"rs2_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+35+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_sel_block ");
    tracep->declBus(c+13,"in0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"in1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"in2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"in3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+99,"out_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__singleCycle__DOT__bl_less));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__singleCycle__DOT__bl_equal));
    bufp->fullBit(oldp+3,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 0xbU))));
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 9U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 0xaU))));
    bufp->fullBit(oldp+6,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 8U))));
    bufp->fullBit(oldp+7,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 7U))));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                 >> 2U))));
    bufp->fullCData(oldp+9,((3U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))),2);
    bufp->fullCData(oldp+10,((0xfU & ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                      >> 3U))),4);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__singleCycle__DOT__operand_a),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__singleCycle__DOT__operand_b),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__singleCycle__DOT__alu_data),32);
    bufp->fullCData(oldp+14,(((0x200U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
                               ? 3U : 2U)),4);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_u));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_less_s));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_u));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__br_equal_s));
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__tmp));
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__alu_data_o),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__nxt_pc),32);
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__bru_exp_o));
    bufp->fullQData(oldp+23,((0xffffffff00000000ULL 
                              | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a)))),64);
    bufp->fullQData(oldp+25,(((0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__operand_a))) 
                              >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b))),64);
    bufp->fullCData(oldp+27,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__operand_b)),5);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data),12);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__input_peri),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_1),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_2),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__dataout_3),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__temp_ld_data),32);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__singleCycle__DOT__lsu_block__DOT__mask),4);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[0]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[1]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[2]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[3]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[4]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[5]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[6]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[7]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[8]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[9]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[10]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[11]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[12]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[13]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[14]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[15]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[16]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[17]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[18]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[19]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[20]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[21]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[22]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[23]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[24]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[25]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[26]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[27]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[28]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[29]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[30]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__singleCycle__DOT__regfile_block__DOT__mem[31]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__singleCycle__DOT__instr),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__singleCycle__DOT__imm),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__singleCycle__DOT__rs1_data),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__singleCycle__DOT__rs2_data),32);
    bufp->fullIData(oldp+72,(((IData)(4U) + vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),32);
    bufp->fullQData(oldp+73,((0xffffffff00000000ULL 
                              | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__rs1_data)))),64);
    bufp->fullQData(oldp+75,(((0xffffffff00000000ULL 
                               | (QData)((IData)(vlSelf->top__DOT__singleCycle__DOT__rs1_data))) 
                              >> (0x1fU & vlSelf->top__DOT__singleCycle__DOT__rs2_data))),64);
    bufp->fullCData(oldp+77,((0x1fU & vlSelf->top__DOT__singleCycle__DOT__rs2_data)),5);
    bufp->fullSData(oldp+78,((0x3fffU & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc)),14);
    bufp->fullBit(oldp+79,((0U != (3U & vlSelf->top__DOT__singleCycle__DOT__PC_block__DOT__pc))));
    bufp->fullCData(oldp+80,((7U & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->top__DOT__singleCycle__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+84,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+85,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+86,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+87,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+88,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+89,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+90,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+91,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+92,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+93,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+94,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+95,(vlSelf->io_hex7_o),32);
    bufp->fullBit(oldp+96,(vlSelf->clk_i));
    bufp->fullBit(oldp+97,(vlSelf->rst_ni));
    bufp->fullIData(oldp+98,(((1U & ((~ (vlSelf->top__DOT__singleCycle__DOT__instr 
                                         >> 0xeU)) 
                                     & (~ ((IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data) 
                                           >> 2U))))
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
    bufp->fullIData(oldp+99,(((2U & (IData)(vlSelf->top__DOT__singleCycle__DOT__ctr_unit_block__DOT__data))
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
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__singleCycle__DOT__BRC_block__DOT__compare32__DOT__tmp),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__singleCycle__DOT__alu_block__DOT__tmp),32);
    bufp->fullCData(oldp+102,(0xcU),5);
    bufp->fullCData(oldp+103,(4U),5);
    bufp->fullCData(oldp+104,(0U),5);
    bufp->fullCData(oldp+105,(8U),5);
    bufp->fullCData(oldp+106,(0x18U),5);
    bufp->fullCData(oldp+107,(0xdU),5);
    bufp->fullCData(oldp+108,(5U),5);
    bufp->fullCData(oldp+109,(0x1bU),5);
    bufp->fullCData(oldp+110,(0x19U),5);
    bufp->fullCData(oldp+111,(0U),3);
    bufp->fullCData(oldp+112,(1U),3);
    bufp->fullCData(oldp+113,(2U),3);
    bufp->fullCData(oldp+114,(3U),3);
    bufp->fullCData(oldp+115,(4U),3);
    bufp->fullCData(oldp+116,(5U),3);
    bufp->fullCData(oldp+117,(6U),3);
    bufp->fullCData(oldp+118,(7U),3);
    bufp->fullIData(oldp+119,(0xeU),32);
    bufp->fullIData(oldp+120,(0x20U),32);
    bufp->fullIData(oldp+121,(5U),32);
    bufp->fullIData(oldp+122,(0U),32);
}
