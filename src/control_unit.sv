/* verilator lint_off UNUSED */
//Bits of signal are not used: 'instr_i'[31,29:15,11:7,1:0]
module control_unit
#(  
    // parameter format command   [6:2]
    parameter       OP         =   5'b01100,
    parameter       OP_IMM     =   5'b00100,
    parameter       LOAD       =   5'b00000,
    parameter       STORE      =   5'b01000,
    parameter       BRANCH     =   5'b11000,
    parameter       LUI        =   5'b01101,
    parameter       AUIPC      =   5'b00101,
    parameter       JAL        =   5'b11011,
    parameter       JALR       =   5'b11001,
    
     
    
    // parameter function in format command [14:12]
        // OP
    parameter       ADD_SUB             =   3'b000,      
    parameter       SLL                 =   3'b001,
    parameter       SLT                 =   3'b010,
    parameter       SLTU                =   3'b011,
    parameter       XOR                 =   3'b100,
    parameter       SRL_SRA             =   3'b101,
    parameter       OR                  =   3'b110,
    parameter       AND                 =   3'b111,
        
        // OP_IMM
    parameter       ADDI                =   3'b000,
    parameter       SLTI                =   3'b010,
    parameter       SLTIU               =   3'b011,
    parameter       XORI                =   3'b100,
    parameter       ORI                 =   3'b110,
    parameter       ANDI                =   3'b111,
    parameter       SLLI                =   3'b001,
    parameter       SRLI_SRAI           =   3'b101,
        
        // LOAD
    
    parameter       LB                  =   3'b000,
    parameter       LH                  =   3'b001,
    parameter       LW                  =   3'b010,
    parameter       LBU                 =   3'b100,
    parameter       LHU                 =   3'b101,
        
        // STORE
    parameter       SB                  =   3'b000,
    parameter       SH                  =   3'b001,
    parameter       SW                  =   3'b010,
    
    
        // BRANCH
    parameter       BEQ                 =   3'b000,
    parameter       BNE                 =   3'b001,
    parameter       BLT                 =   3'b100,
    parameter       BGE                 =   3'b101,
    parameter       BLTU                =   3'b110,
    parameter       BGEU                =   3'b111
)
(
    //input 
    //input   logic           clk_i,
    input   logic   [31:0]  instr_i,          // the current instruction 
    input   logic           bl_less_i,        // the "less" result of the branch comparation
    input   logic           bl_equal_i,       // the "equal" result of the branch comparation
    //output
    output  logic           bl_sel_o,        // select signal between pc+4:0 or pc ALU:1
    output  logic           bl_unsigned_o,   // 1 if the two operands are unsigned.
    output  logic           rd_wren_o,       // 1 if writing to the RegFile, otherwise 0
    output  logic           op_a_sel_o,      //choose between rs1_ (0) or pc (1) to wire into operand_a of ALU.
    output  logic           op_b_sel_o,      // choose between rs2_ (0) or imm (1) to wire into operand_b of ALU
    output  logic   [3:0]   alu_op_o,        // an operation that the ALU has to perform
    output  logic           mem_wren_o,      //1 write LSU, otherwise 0 
    output  logic   [1:0]   wb_sel_o         // choose between  alu_ (0), ld_ (1), or pc_four (2) to write back into rd_ of RegFile
);

/*verilator lint_off LATCH*/
// operation 
   
   always_comb 
    begin
      case(instr_i[6:2])
        OP:
          begin
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             rd_wren_o     = 1'b1;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b0;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADD_SUB:
                assign alu_op_o = (instr_i[30])? 4'b0001 : 4'b0000;
              SLL:
                assign alu_op_o = 4'b0111;
              SLT:
                assign alu_op_o = 4'b0010;
              SLTU:
                assign alu_op_o = 4'b0011;
              XOR:
                assign alu_op_o = 4'b0100;
              SRL_SRA:
                assign alu_op_o = (instr_i[30])? 4'b1001 : 4'b1000;
              OR:
                assign alu_op_o = 4'b0101;
              AND:
                assign alu_op_o = 4'b0110;
              default: alu_op_o = 4'b0000;
            endcase
          end 
        OP_IMM:
          begin

             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             rd_wren_o     = 1'b1;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b1;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADDI:
                assign alu_op_o = 4'b0000;
              SLTI:
                assign alu_op_o = 4'b0010;
              SLTIU:
                assign alu_op_o = 4'b0011;
              XORI:
                assign alu_op_o = 4'b0100;
              ORI:
                assign alu_op_o = 4'b0101;
              SRLI_SRAI:
                assign alu_op_o = (instr_i[30])? 4'b1001 : 4'b1000;
              SLLI:
                assign alu_op_o = 4'b0111;
              ANDI:
                assign alu_op_o = 4'b0110;
              default: alu_op_o = 4'b0000;
            endcase
              
          end 
        LOAD:
          begin
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             rd_wren_o     = 1'b1;
             op_a_sel_o    = 1'b1;
             op_b_sel_o    = 1'b1;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b01;
             alu_op_o      = 4'b0000;
          end 
        STORE:
          begin
            bl_sel_o      = 1'bx;
            bl_unsigned_o = 1'bx;
            rd_wren_o     = 1'b1;
            op_a_sel_o    = 1'b1;
            op_b_sel_o    = 1'b1;
            mem_wren_o    = 1'b1;
            wb_sel_o      = 2'b00;
            alu_op_o      = 4'b0000;
          end 
        BRANCH:
          begin
            bl_unsigned_o = (instr[14:12]== BLTU || instr[14:12]== BGEU)? 1'b1: 1'b0;
            op_a_sel_o    = 1'b1;
            op_b_sel_o    = 1'b1;
            mem_wren_o    = 1'b0;
            bl_sel_o      = (bl_less_i)? 1'b0: 1'b1;
            case(inst[14:12])
              BEQ: wb_sel_o = (bl_equal_i)? 2'b00: 2'b01;
              BNE: wb_sel_o = (bl_equal_i)?
              BLT:
              BGE:
              BLTU:
              BGEU:

          end 
        LUI:
          begin
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b0;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADD_SUB:
                assign alu_op_o = (instr_i[30])? 4'b0001 : 4'b0000;
          end 
        AUIPC:
          begin 
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b0;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADD_SUB:
                assign alu_op_o = (instr_i[30])? 4'b0001 : 4'b0000;
          end 
        JAL:
          begin
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b0;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADD_SUB:
                assign alu_op_o = (instr_i[30])? 4'b0001 : 4'b0000;
          end 
        JALR:
          begin 
             bl_sel_o      = 1'bx;
             bl_unsigned_o = 1'bx;
             op_a_sel_o    = 1'b0;
             op_b_sel_o    = 1'b0;
             mem_wren_o    = 1'b0;
             wb_sel_o      = 2'b00;
            case(instr_i[14:12])
              ADD_SUB:
                assign alu_op_o = (instr_i[30])? 4'b0001 : 4'b0000;
          end
      endcase
    end
 
  
endmodule: control_unit
