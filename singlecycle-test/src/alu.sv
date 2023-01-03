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
logic [63:0] data_tmp1,data_tmp2;
logic [4:0] shift;
logic [31:0] tmp;
assign shift = operand_b_i[4:0];
assign data_tmp1 = {32'b11111111111111111111111111111111,operand_a_i};
assign data_tmp2 = data_tmp1 >> shift;
always_comb //@(clk_i)
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
    begin 
      alu_data_o = (operand_a_i)^(operand_b_i);
    end
    A_OR:
    begin
      alu_data_o = (operand_a_i)|(operand_b_i);
    end
    A_AND:
    begin 
      alu_data_o = (operand_a_i)&(operand_b_i);
    end
    A_SLL:
      alu_data_o = operand_a_i << operand_b_i;
    A_SRL:
      alu_data_o = operand_a_i >> operand_b_i;
    A_SRA:
    begin
      if(operand_a_i[0])
      begin
      alu_data_o = data_tmp2[31:0];
      end
      else
      alu_data_o = operand_a_i >> operand_b_i;
    end 
    A_LUI:
     alu_data_o = operand_b_i;
    default:
      alu_data_o = 0;
    endcase
    bru_exp_o = |alu_data_o;
end
  endmodule 
