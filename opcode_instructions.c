#include "monty.h"
/***/
void opcode_push(stack_t **stack, __attribute__((unused))unsigned int line_number)
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
/***/
void opcode_pall(__attribute__((unused))stack_t **stack, __attribute__((unused))unsigned int line_number)
{
stack_t *tmp = head;
size_t counter = 0;
if (head == NULL)
return;

while(tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
counter++;
}

 
return; }
