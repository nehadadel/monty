#include "monty.h"
/**
 *opcode_rotl -  rotates the stack to the top.
 *
 *@s: new node to push
 *@l_n: line num
*/
void opcode_rotl(
__attribute__((unused))stack_t **s, unsigned int l_n)
{
int n;
stack_t *new, *tmp;

if (head == NULL)
return;

n = head->n;
new = create_new_node(n);
opcode_pop(s, l_n);
tmp = head;

while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
}
