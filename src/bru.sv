module bru(
input logic is_control,
input logic [datawidth-1:0] rs1_data,
input logic [datawidth-1:0] imm,pc,
input logic [2:0] bru_op,
input logic bru_exp,
output logic is_taken,
output logic pc_bru
);
always_comb()
begin
  case(is_control)
    1'b0:
    begin                 //jump
      case(bru_op)
        3'b110://jal
        3'b111://jalr
    end 
    1'b1:                 //branch
    begin
      case(bru_op)
        3'b000:            //beq
        begin
          if(bru_exp == 0)
          begin 
            is_taken <= 1;
            pc_bru <= pc+imm;
          end 
          else
          begin
            is_taken <= 0;
            pc_bru <= pc+1;
          end 
        end 
        3'b001:             //bne
        begin
          if(bru_exp != 0)
          begin 
            is_taken <= 1;
            pc_bru <= pc+imm;
          end 
          else
          begin
            is_taken <= 0;
            pc_bru <= pc+1;
          end 
        end 
        3'b010:             //blt
        begin
          if(bru_exp != 0)
          begin 
            is_taken <= 1;
            pc_bru <= pc+imm;
          end 
          else
          begin
            is_taken <= 0;
            pc_bru <= pc+1;
          end 
        end 
        
        3'b011:             //bge
        begin
          if(bru_exp == 0)
          begin 
            is_taken <= 1;
            pc_bru <= pc+imm;
          end 
          else
          begin
            is_taken <= 0;
            pc_bru <= pc+1;
          end 
        end 
        default: ;
      endcase
    end 
  endcase
end
endmodule 
