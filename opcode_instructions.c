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
fprintf(stdout, "%d\n", tmp->n);
tmp = tmp->next;
counter++;
}

return; }
/**
 *opcode_pint - print frist element in stack
 *
 *@stack: new node
 *@ln_num: line number
*/
void opcode_pint(
__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
if (head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", ln_num);
exit(EXIT_FAILURE); }
fprintf(stdout, "%d\n", head->n);
}
/**
 *opcode_pop - pop to stack
 *
 *@stack: new node to push
 *@ln_num: line num
*/
void opcode_pop(
__attribute__((unused))stack_t **stack, unsigned int ln_num)
{
stack_t *temp = head;
if (head == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", ln_num);
exit(EXIT_FAILURE); }
temp = head->next;
free(head);
head = temp;
}
/**
 *opcode_nop - no operation
 *
 *@stack: new node to push
 *@ln_num: line num
*/
void opcode_nop(
__attribute__((unused))stack_t **stack,
__attribute__((unused))unsigned int ln_num)
{
return;
}
