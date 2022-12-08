module data_memory#(
parameter datawidth = 32,
parameter    dmemwidth = 12)(
input logic  [dmemwidth-1: 0]   addr_i,
input logic                    clk_i,
input logic  [datawidth-1:0]   wdata_i, 
input logic                    wren_i,
output logic [datawidth -1:0]  rdata_o
);
logic [datawidth-1:0] dmem [2**dmemwidth-1:0];
always_ff@(posedge(clk_i))
begin
  if(wren_i)
  begin
   dmem[addr_i] <= wdata_i;
   $writememh("memory/data_memory.data",dmem);
  end
  else
  begin
    rdata_o <= dmem[addr_i];
  end 
end
endmodule
