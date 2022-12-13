module mux3x1(
input logic   [width-1:0] op1,op2,op3,
input logic [1:0] opcode,
output logic  [width-1:0] dout);
always_comb @(opcode)
begin 
case(opcode):
  2'b00: dout <= op1;
  2'b01: dout <= op2;
  2'b10: dout <= op3;
  default: dout <= 32'bz;
endcase
end 
endmodule 
