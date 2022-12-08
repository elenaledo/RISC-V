module instr_memory#(
  parameter datawidth = 32,
  parameter instwidth = 14) (
  input logic clk_i,
  input logic [instwidth-1:0] pc_i,
  output logic [datawidth-1:0] instr_o
);
logic unused;
logic [3:0][7:0] mem [2**instwidth-1:0];
assign unused = |pc_i[1:0];
always_ff@(posedge(clk_i))
begin
  $readmemh("memory/instmem.data.sim",mem);
  instr_o <= mem[pc_i[instwidth-1:0]][3:0];
end
endmodule
