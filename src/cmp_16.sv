/* verilator lint_off MULTITOP */
module cmp_16 (
    input   logic   [15:0]  a_i,
    input   logic   [15:0]  b_i,
    output  logic           equal_o,
    output  logic           alarger_o,
    output  logic           blarger_o
);
    logic [3:0] eq_t;
    logic [3:0] al_t;

    
    assign equal_o      = &eq_t;
    assign alarger_o    = al_t[3]|(al_t[2]&eq_t[3])|(al_t[1]&eq_t[3]&eq_t[2])|(al_t[0]&eq_t[3]&eq_t[2]&eq_t[1]);
    assign blarger_o    = ~ (equal_o|alarger_o);                
    /* verilator lint_off PINCONNECTEMPTY */
    cmp_4 compare10(.a_i(a_i[  3:0]),.b_i(b_i[  3:0]),.equal_o(eq_t[0]),.alarger_o(al_t[0]),.blarger_o());
    cmp_4 compare11(.a_i(a_i[  7:4]),.b_i(b_i[  7:4]),.equal_o(eq_t[1]),.alarger_o(al_t[1]),.blarger_o());
    cmp_4 compare12(.a_i(a_i[ 11:8]),.b_i(b_i[ 11:8]),.equal_o(eq_t[2]),.alarger_o(al_t[2]),.blarger_o());
    cmp_4 compare13(.a_i(a_i[15:12]),.b_i(b_i[15:12]),.equal_o(eq_t[3]),.alarger_o(al_t[3]),.blarger_o());
                                                                                                                        
    
endmodule: cmp_16
