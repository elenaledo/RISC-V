/*verilator lint_off UNUSED*/
/*verilator lint_off WIDTH*/
module alu
import mypkg::*;
( 
  //input logic clk_i,
  input logic [31:0] operand_a_i , operand_b_i ,
  alu_op_e    alu_op_i,
  output logic [31:0] alu_data_o , 
  output logic bru_exp_o
);
logic [31:0] alu_add, alu_sub, alu_slt, alu_sltu, alu_xor, alu_or, alu_and, alu_sll, alu_srl, alu_sra, alu_lui;
logic [63:0] data_tmp1,data_tmp2;
logic [4:0] shift;
logic [31:0] tmp;
assign tmp = operand_a_i[31]^ operand_b_i[31]; 
assign shift = operand_b_i[4:0];
assign data_tmp1 = {32'hffffffff,operand_a_i};
assign data_tmp2 = data_tmp1 >> shift;
always_comb 
begin
  // ADD + SUB
      alu_add = operand_a_i + operand_b_i;
      alu_sub = operand_a_i + 1'b1 + ~operand_b_i;

  // SLT + SLTU

  // XOR + OR + AND 
      alu_xor = (operand_a_i)^(operand_b_i);
      alu_or  = (operand_a_i)|(operand_b_i);
      alu_and = (operand_a_i)&(operand_b_i);
  // SLL + SRL
      alu_sll = operand_a_i << shift; //operand_b_i[4:0];
      alu_srl = operand_a_i >> shift; //operand_b_i[4:0];
  // SRA
      if(!operand_a_i[31])
      alu_sra =  operand_a_i >> operand_b_i[4:0];
      else
      alu_sra = data_tmp2[31:0];
  // LUI
      alu_lui = operand_b_i;
end 
always_comb
begin 
  case(alu_op_i)
    A_ADD: 
      assign alu_data_o = alu_add;
    A_SUB:
      assign alu_data_o = alu_sub;
    A_SLT:
      if(tmp)
      assign alu_data_o = operand_a_i[31];
      else
      assign alu_data_o = alu_sub[31];
    A_SLTU:
      if(tmp)
        assign alu_data_o = operand_b_i[31];
      else 
        assign alu_data_o = alu_sub[31];
    A_XOR:
      assign alu_data_o = alu_xor;
    A_OR:
      assign alu_data_o = alu_or;
    A_AND:
      assign alu_data_o = alu_and;
    A_SLL:
      assign alu_data_o = alu_sll;
    A_SRL:
      assign alu_data_o = alu_srl;
    A_SRA:
      assign alu_data_o = alu_sra;
    A_LUI:
      assign alu_data_o = alu_lui;
    default: alu_data_o = 32'b0;
  endcase
end
    assign bru_exp_o = |alu_data_o;
  endmodule 
