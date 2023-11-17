#include "monty.h"
/**
 *opcode_push - push to stack
 *
 *@stack: new node to push
 *@ln_num: line num
*/
void opcode_push(
stack_t **stack, __attribute__((unused))unsigned int ln_num)
{

if (stack == NULL || *stack == NULL)
exit(EXIT_FAILURE);

(*stack)->prev = NULL;
(*stack)->next = head;
if (head != NULL)
head->prev = *stack;
head = *stack;

return;
}
/**
 *opcode_pall - pall stack
 *
 *@s: new node to push
 *@l_n: line num
*/
void opcode_pall(
__attribute__((unused))stack_t **s, __attribute__((unused))unsigned int l_n)
{
stack_t *tmp = head;
size_t counter = 0;
if (head == NULL)
return;

while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
counter++;
}

return; }
