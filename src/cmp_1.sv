/* verilator lint_off MULTITOP */
module cmp_1 (
    input   logic   a_i,
    input   logic   b_i,
    output  logic   equal_o,
    output  logic   alarger_o,
    output  logic   blarger_o
);
    assign equal_o    = a_i~^b_i;
    assign alarger_o  = a_i&(~b_i);
    assign blarger_o  = (~a_i)&b_i;

endmodule: cmp_1
