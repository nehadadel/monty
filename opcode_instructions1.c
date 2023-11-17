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
int sawp_int;
size_t len = stack_len(head);
if (len < 2)
{
fprintf(stderr, "L%u: can't swap, stack too short", ln_num);
exit(EXIT_FAILURE);}

swap_int = head->n;
head->n = head->next->n;
head->next->n = swap_int;
}
