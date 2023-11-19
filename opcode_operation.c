#include "monty.h"
/**
 *get_op_func - get opcode function
 *
 *@opcode: opcode
 *@val: value which with opcode
 *@line_num: number line
*/
void get_op_func(char *opcode, char *val, unsigned int line_num)
{
int value_n, i;
stack_t *new_node;
instruction_t op[] = {
{"push", opcode_push},
{"pall", opcode_pall}, {"pstr", opcode_pstr},
{"pint", opcode_pint}, {"pchar", opcode_pchar},
{"pop", opcode_pop}, {"mul", opcode_mul},
{"nop", opcode_nop}, {"mod", opcode_mod},
{"swap", opcode_swap}, {"div", opcode_div},
{"add", opcode_add}, {"sub", opcode_sub}
};
void (*opcode_func)(stack_t **, unsigned int);
i = 0;
while (i < 13)
{
if (strcmp(op[i].opcode, opcode) == 0)
{
opcode_func = op[i].f;
if (i == 0)
{
if (val != NULL && is_digit(val))
{
value_n = atoi(val);
new_node = create_new_node(value_n);
opcode_func(&new_node, line_num);
return; }
else
{
fprintf(stderr, "L%u: usage: push integer\n", line_num);
exit(EXIT_FAILURE); }
}
else
{
opcode_func(&head, line_num);
return; }
}
i++; }
fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
exit(EXIT_FAILURE); }

