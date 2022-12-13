module mux2x1#(
parameter width = 32)(
input logic [width-1:0]   operand_a,
input logic [width-1:0]   operand_b,
input logic               option,
output logic [width-1:0]  dout_o
);
always_comb @(option)
begin
  case(option)
    1'b0: dout_o <= operand_a;
    1'b1: dout_o <= operand_b;
  endcase
end
endmodule 
