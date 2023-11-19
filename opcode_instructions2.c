#include"monty.h"
/**
 *opcode_mul - mul 2 elements
 *
 *@stack: new node
 *@ln_num: number line
**/
void opcode_mul(__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
int result = 0;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't mul, stack too short\n", ln_num);
exit(EXIT_FAILURE); }
result = head->next->n * head->n;
opcode_pop(stack, ln_num);
head->n = result;
}
/**
 *opcode_mod - mod
 *
 *@stack: new node
 *@ln_num: number line
*/
void opcode_mod(__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
int result = 0;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't mod, stack too short\n", ln_num);
exit(EXIT_FAILURE); }
if (head->n == 0)
{
fprintf(stderr, "L%u: division by zero\n", ln_num);
exit(EXIT_FAILURE); }
result = head->next->n % head->n;
opcode_pop(stack, ln_num);
head->n = result;
}
