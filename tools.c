#include "monty.h"
/***/
int is_digit(char *str)
{
int i;
int start_index = (*str == '-') ? 1 : 0;

for (i = start_index; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0); }
return (1); }
/***/
stack_t *create_new_node(int n)
{
stack_t *new_node = malloc (sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: Memory allocation failed\n");
exit(EXIT_FAILURE); }
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
return (new_node); }
/***/
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
