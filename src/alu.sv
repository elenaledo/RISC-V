module alu
import mypkg::*;
( 
  input logic clk_i,
  input logic [31:0] operand_a_i , operand_b_i ,
  input alu_op_e alu_op_i,
  output logic [31:0] alu_data_o , 
  output logic bru_exp_o
);

always_latch @(clk_i)
begin
  case(alu_op_i)
    A_ADD:
      alu_data_o = operand_a_i + operand_b_i;
    A_SUB:
      alu_data_o = operand_a_i + 1'b1 + ~operand_b_i;
    A_SLT:
      begin
        if(operand_a_i[0] & operand_b_i[0])
        begin
        alu_data_o = operand_a_i + (~operand_b_i + 1'b1);
        if(alu_data_o[0])
          alu_data_o = 0;
        else
          alu_data_o = 1;
        end
        else if(!(operand_a_i[0] | operand_b_i[0]))
        begin
          alu_data_o = operand_a_i + (~operand_b_i + 1'b1);
          if(alu_data_o[0])
            alu_data_o = 0;
          else
            alu_data_o = 1;
        end
        else
        begin
          if(operand_a_i[0])
            alu_data_o = 1;
          else
            alu_data_o = 0;
        end
      end
    A_SLTU:
      begin
        alu_data_o = operand_a_i + (~operand_b_i + 1'b1);
        if(alu_data_o[0])
          alu_data_o = 1;
        else
          alu_data_o = 0;
      end 
    A_XOR:
      alu_data_o = operand_a_i ^ operand_b_i;
    A_OR:
      alu_data_o = operand_a_i | operand_b_i;
    A_AND:
      alu_data_o = operand_a_i & operand_b_i;
    A_SLL:
      alu_data_o = operand_a_i << operand_b_i;
    A_SRL:
      alu_data_o = operand_a_i >> operand_b_i;
    A_SRA:
      alu_data_o = operand_a_i >>> operand_b_i;
    default:;
    endcase
    bru_exp_o = |alu_data_o;
end
  endmodule 
