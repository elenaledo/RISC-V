/* verilator lint_off MULTITOP */
module cmp_8 (
    input logic [7:0] a_i,
    input logic [7:0] b_i,
    output logic equal_o,
    output logic alarger_o,
    output logic blarger_o
);
    logic [1:0] eq_t;
    logic [1:0] al_t;
    
    assign equal_o      = &eq_t;
    assign alarger_o    = al_t[1]|(al_t[0]&eq_t[1]);
    assign blarger_o    = ~ (equal_o|alarger_o);                
/* verilator lint_off PINCONNECTEMPTY */
    cmp_4 compare40(.a_i(a_i[3:0]),.b_i(b_i[3:0]),.equal_o(eq_t[0]),.alarger_o(al_t[0]),.blarger_o());
    cmp_4 compare41(.a_i(a_i[7:4]),.b_i(b_i[7:4]),.equal_o(eq_t[1]),.alarger_o(al_t[1]),.blarger_o());

endmodule: cmp_8
