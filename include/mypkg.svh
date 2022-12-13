package mypkg;
    typedef enum logic[6:0] {
      A_ADD  = 7'h0,
      A_SUB  = 7'h1,
      A_SLT  = 7'h2,
      A_SLTU = 7'h3,
      A_XOR  = 7'h4,
      A_OR   = 7'h5,
      A_AND  = 7'h6,
      A_SLL  = 7'h7,
      A_SRL  = 7'h8,
      A_SRA  = 7'h9  
    } alu_op_e;
endpackage : mypkg

