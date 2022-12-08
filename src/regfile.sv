module regfile #(
parameter datawidth = 32,
parameter addrwidth = 5)(
input logic 			clk_i,
input logic 			rst_ni,
input logic [addrwidth-1:0] 	rs1_addr_i,
input logic [addrwidth-1:0] 	rs2_addr_i,
input logic [addrwidth-1:0]	rd_addr_i,
input logic [datawidth-1:0] 	rd_data_i,
input logic 			rd_wren_i,
output logic [datawidth-1:0]	rs1_data_o,
output logic [datawidth-1:0]	rs2_data_o
);
logic [datawidth-1:0] mem [2**(addrwidth)-1:0];
always_ff @(posedge(clk_i))
begin
	if(rst_ni== 0)
	begin
		for(int i=0; i<= 2**(addrwidth)-1; i++)
			mem[i] <= 0;
	end
	else
	begin
		mem[00000] <=0;
		if(rd_wren_i && rd_addr_i!=5'b0)
		begin 
		mem[rd_addr_i] <= rd_data_i;
		$writememh("memory/regfile.txt",mem);
		end
	       	else
		begin
		rs1_data_o <= mem[rs1_addr_i];
		rs2_data_o <= mem[rs2_addr_i];
		end	

	end

end
endmodule
