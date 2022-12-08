#define MAX_SIM 500

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->operand_a_i = rand()<<1 + rand();
  dut->operand_b_i = rand()<<1 + rand();
  dut->alu_op_i = rand()%10;
}
