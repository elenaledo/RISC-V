/* verilator lint_off UNUSED */
//Bits of signal are not used: 'instr_i'[31,29:15,11:7,1:0]
module ctrl_unit
#(  
    // parameter format command
    parameter       OP         =   5'b01100,
    parameter       OP_IMM     =   5'b00100,
    parameter       LOAD       =   5'b00000,
    parameter       STORE      =   5'b01000,
    parameter       BRANCH     =   5'b11000,
    parameter       LUI        =   5'b01101,
    parameter       AUIPC      =   5'b00101,
    parameter       JAL        =   5'b11011,
    parameter       JALR       =   5'b11001,
    
     
    
    // parameter function in format command 
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

/* verilator lint_off unoptflat */
    //logic   [11:0]      ;
	/* verilator lint_on unoptflat */

/*verilator lint_off CASEOVERLAP*/
/*verilator lint_off LATCH*/
// operation 
   
    always_comb begin 
        case(instr_i[6:2])
            OP: begin
                case(instr_i[14:12])
                    ADD_SUB: begin 
                            if(!instr_i[30])
                            begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                            else
                            begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0001;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                            end                              
                    SLL    :begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0111;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    SLT    :begin                     
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0010;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    SLTU   :begin                    
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0011;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    XOR    :begin                   
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0100;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    SRL_SRA: begin                   
                    if(!instr_i[30]) begin 
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b1000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                            else
                            begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b1001;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    end                              
                    OR     :begin                 
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0101;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                   AND    : begin               
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0110;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                            end
                    default: begin                   

    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                    end                              
                endcase                              
            end                                      
                                                     
            OP_IMM: begin                
                case(instr_i[14:12])                 
                  ADDI    :begin              
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                  SLTI    :begin             
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0010;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                 SLTIU   : begin           
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0011;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                XORI    :begin           
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0100;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                ORI     :begin          
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0101;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                ANDI    : begin         
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0110;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                SLLI    :begin        
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0111;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                    SRLI_SRAI: begin                      
                    if(!instr_i[30]) begin   
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b1000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                            else
                            begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b1001;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                    end                              
                    default: begin                   
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                                              
                    end                              
                endcase                              
            end                                      
                                                     
            LOAD:    begin                 
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b01;
                          end                          
            STORE:         begin                
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b1;
    												wb_sel_o         = 2'b00;
                          end                         
            BRANCH: begin                         
                case(instr_i[14:12])                 
                    BEQ: begin                       
                    if(bl_equal_i)   begin    
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                          else  begin             
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                    end                              
                    BNE: begin                       
                    if(!bl_equal_i) begin   
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                          else  begin            
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                    end                              
                    BLT: begin                       
                    if(bl_less_i) begin   
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                          else begin           
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
                    end                              
                    BGE: begin                       
                    if(!bl_less_i) begin
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                          else begin         
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                    end                             
                    BLTU: begin                      
                    if(bl_less_i) begin
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b1;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                          else begin       
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b1;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                    end                             
                    BGEU: begin                     
                    if(!bl_less_i) begin          
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b1;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                          else begin                   
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b1;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
                    end                             
                    default: begin                  
    												rd_wren_o        = 1'b0;   
    												bl_sel_o         = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                    end
                endcase            
            end
            
            LUI    : begin                                 
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b1010;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end 
            AUIPC  : begin               
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
                          end
            JAL    : begin              
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b1;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b10;
                          end
            JALR   : begin             
    												bl_sel_o         = 1'b1;
    												rd_wren_o        = 1'b1;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b1;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b10;
                          end 
            default: begin
    												bl_sel_o         = 1'b0;
    												rd_wren_o        = 1'b0;   
    												bl_unsigned_o    = 1'b0;
    												op_a_sel_o       = 1'b0;
    												op_b_sel_o       = 1'b0;
    												alu_op_o         = 4'b0000;
    												mem_wren_o       = 1'b0;
    												wb_sel_o         = 2'b00;
            end
        endcase 
    end
 
  
endmodule: ctrl_unit
