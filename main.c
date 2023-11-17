#include "monty.h"
stack_t *head = NULL;
/**
 *main - entry point
 *
 *@ac: intger
 *@av: string array
 *
 *Return: 0
*/
int main(int ac, char *av[])
{
if (ac != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
readlines_from_file(av[1]);
return (0);
}
