#include "monty.h"
/***/
void get_op_func(char *opcode, char *val, unsigned int line_num)
{
int value_n, i;
stack_t *new_node;
instruction_t op[] = {
{"push", opcode_push},
{"pall", opcode_pall},
};

void (*opcode_func)(stack_t **, unsigned int);

i = 0;
while (i < 2)
{

if (strcmp(op[i].opcode, opcode) == 0)
{
  /*valid = 1;*/
opcode_func = op[i].f;
if (i == 0)
{
if (is_digit(val))
{
value_n = atoi(val);
new_node = create_new_node(value_n);
opcode_func(&new_node, line_num); }
else
{
fprintf(stderr, "L%u: usage: push integer\n", line_num);
exit(EXIT_FAILURE); }
}
else
opcode_func(&head, line_num);
 
}
/*else*/
  /*valid = 0;*/
i++;
}
/*if (valid == 0)
{
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
exit(EXIT_FAILURE);}*/
}
