/* verilator lint_off MULTITOP */
module brcomp(
    //input
    input   logic [31:0]  rs1_data_i,
    input   logic [31:0]  rs2_data_i,
    input   logic         br_unsigned_i,
    //output
    output  logic         br_less_o,
    output  logic         br_equal_o
);

//--------instance module--------------//
    logic [3:0] alu_op;
    logic       br_less_u;
    logic       br_less_s;
    logic       br_equal_u;
    logic       br_equal_s;
    logic       tmp;
/* verilator lint_off PINCONNECTEMPTY */
    alu compare32(                                        //compare
        //.clk_i(),
        .operand_a_i(rs1_data_i),
        .operand_b_i(rs2_data_i),
        .alu_op_i (alu_op),
        .alu_data_o(),
        .bru_exp_o (tmp)
    );
always_latch @*
begin
 if(br_unsigned_i)
 begin
   alu_op = 4'h3;
   if(tmp == 1)
     assign br_less_u = 1;
   else
     assign br_equal_u = 1;
 end 
else 
  begin
    alu_op = 4'h2;
    if(tmp == 1)
      assign br_less_s = 1;
    else 
      assign br_equal_s = 1;
  end 
end
/* verilator lint_on PINCONNECTEMPTY */
assign br_less_o = (br_unsigned_i)? br_less_u:br_less_s;
assign br_equal_o = (br_unsigned_i)? br_equal_u:br_equal_s;
endmodule
