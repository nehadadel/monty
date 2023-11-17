#include "monty.h"
/**
 *is_digit - check if is digit
 *
 *@str: string
 *
 *Return: 0 if isn't digit, 1 otherwise
*/
int is_digit(char *str)
{
int i;
int start_index = (*str == '-') ? 1 : 0;

for (i = start_index; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0); }
return (1); }
/**
 *create_new_node - create_new_node
 *
 *@n: integer data
 *
 *Return: new node
*/
stack_t *create_new_node(int n)
{
stack_t *new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE); }
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
return (new_node); }
/**
 *free_nodes - free nodes
 *
 *@head: head node of stack
*/
void free_nodes(stack_t *head)
{
stack_t *temp = head;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}
/**
*stack_len - lenth of stack
*
*@head: head of stack
*
*Return: number of nodes
*/
size_t stack_len(stack_t *head)
{
stack_t *temp = head;
size_t counter = 0;
if (head == NULL)
return (0);

while (temp)
{
temp = temp->next;
counter++;
}
return (counter);
}
