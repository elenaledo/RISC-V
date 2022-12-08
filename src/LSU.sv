module LSU(
  input logic clk_i,
  input logic [11:0] alu_data,
  input logic mem_wren,
  input logic [31:0] rs2_data,
  output logic [31:0] ld_data,
  input logic [31:0] datain,
  output logic [31:0] dataout,
);
reg register 
always_ff @(posedge(clk_i))
begin
  if(mem_wren)
  begin
    da
  end
end

