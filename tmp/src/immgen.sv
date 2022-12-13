module immgen#(
parameter datawidth = 32)(
input logic [datawidth-1:0] instrcode_i,
output logic [datawidth-1:0] immgen_o);
reg [datawidth-1:0] imm_out;
wire [6:0] opcode;
//wire [2:0] funct3;
assign opcode = instrcode_i[6:0];
//assign funct3 = instrcode_i[14:12];
assign immgen_o = imm_out;
always_comb
begin
  case(opcode)
    7'b0010011: imm_out = {{21{instrcode_i[31]}}, instrcode_i[30:25], instrcode_i[24:21], instrcode_i[20]};                                         // I_IMMEDIATE
    7'b0100011: imm_out = {{21{instrcode_i[31]}}, instrcode_i[30:25], instrcode_i[11:8], instrcode_i[7]};                                          //  S_IMMEDIATE
    7'b0010111: imm_out = {instrcode_i[31], instrcode_i[30:20], instrcode_i[19:12], {12{1'b0}}};                                                    // U_IMMEDIATE
    7'b1101111: imm_out = {{12{instrcode_i[31]}}, instrcode_i[19:12], instrcode_i[20], instrcode_i[30:25], instrcode_i[24:21], {1{1'b0}}};         // J_IMMEDIATE 
    7'b1100011: imm_out = {{20{instrcode_i[31]}}, instrcode_i[7], instrcode_i[30:25], instrcode_i[11:8], {1{1'b0}}};                               // B_IMMEDIATE
  default: imm_out = 32'bx;
  endcase
end 
endmodule
