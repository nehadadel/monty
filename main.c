#include "monty.h"
stack_t *head = NULL;
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
