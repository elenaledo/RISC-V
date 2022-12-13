module top(
  input logic [datawidth -1:0] instrcode_i,
  output logic  [datawidth -1:0] immgen_o
);
immgen dut( 
  .instrcode_i(instrcode_i),
  .immgen_o(immgen_o)
  );
endmodule: top
