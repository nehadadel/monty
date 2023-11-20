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
tmp = head;

while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
opcode_pop(s, l_n);
}
/**
 *opcode_rotr -  rotates the stack to the bottom.
 *
 *@s: new node to push
 *@l_n: line num
*/
void opcode_rotr(
__attribute__((unused))stack_t **s,
__attribute__((unused))unsigned int l_n)
{
stack_t *tmp2, *tmp;

if (head == NULL || head->next == NULL)
return;


tmp = head;

while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = head;
head->prev = tmp;
tmp2 = tmp->prev;
tmp->prev = NULL;
head = tmp;
tmp2->next = NULL;
 
}
