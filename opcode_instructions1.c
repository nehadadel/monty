#include "monty.h"
/**
 *opcode_swap - push to stack
 *
 *@stack: new node to push
 *@ln_num: line num
*/
void opcode_swap(
__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
int swap_int;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", ln_num);
exit(EXIT_FAILURE); }

swap_int = head->n;
head->n = head->next->n;
head->next->n = swap_int;
}
/**
 *opcode_add - add the top two elements
 *
 *@stack: new node
 *@ln_num: number line
*/
void opcode_add(
__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
int result = 0;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't add, stack too short\n", ln_num);
exit(EXIT_FAILURE); }

result = head->n + head->next->n;
opcode_pop(stack, ln_num);
head->n = result;
}
/**
 *opcode_sub - sub to two elements
 *
 *@stack: new node
 *@ln_num: number line
*/
void opcode_sub(
__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
int result = 0;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", ln_num);
exit(EXIT_FAILURE); }
result = head->next->n - head->n;
opcode_pop(stack, ln_num);
head->n = result;
}
