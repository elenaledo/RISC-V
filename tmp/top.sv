module top(
  input logic clk_i,wren_i,
  input logic [dmemwidth -1:0] addr_i,
  input logic [datawidth -1:0] wrdata_i,
  output logic [datawidth -1:0] rdata_o
);
data_memory dut( 
  .clk_i(clk_i),
  .wren_i(wren_i),
  .addr_i(addr_i),
  .wrdata_i(wrdata_i),
  .rdata_o(rdata_o)  
);
endmodule: top
