/* verilator lint_off MULTITOP */
module cmp_4 (
    input logic [3:0] a_i,
    input logic [3:0] b_i,
    output logic equal_o,
    output logic alarger_o,
    output logic blarger_o
);
    logic [3:0] eq_t;
    logic [3:0] al_t;
    
    assign equal_o      = &eq_t;
    assign alarger_o    = al_t[3]|(al_t[2]&eq_t[3])|(al_t[1]&eq_t[3]&eq_t[2])|(al_t[0]&eq_t[3]&eq_t[2]&eq_t[1]);
    assign blarger_o    = ~ (equal_o|alarger_o);                
    /* verilator lint_off PINCONNECTEMPTY */
    cmp_1 compare10(.a_i(a_i[0]),.b_i(b_i[0]),.equal_o(eq_t[0]),.alarger_o(al_t[0]),.blarger_o());
    cmp_1 compare11(.a_i(a_i[1]),.b_i(b_i[1]),.equal_o(eq_t[1]),.alarger_o(al_t[1]),.blarger_o());
    cmp_1 compare12(.a_i(a_i[2]),.b_i(b_i[2]),.equal_o(eq_t[2]),.alarger_o(al_t[2]),.blarger_o());
    cmp_1 compare13(.a_i(a_i[3]),.b_i(b_i[3]),.equal_o(eq_t[3]),.alarger_o(al_t[3]),.blarger_o());
                                                                                                                        
    
endmodule: cmp_4
