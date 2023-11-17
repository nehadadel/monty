#include "monty.h"
/**
 *_strdup - string duplicate
 *
 *@str: string to duplicate
 *
 *Return: string duplicated
*/
char *_strdup(const char *str)
{
char *dup;
size_t len = strlen(str) + 1;
dup = malloc(len);
if (dup == NULL)
{
fprintf(stderr, "Error: Memory allocation failed\n");
exit(EXIT_FAILURE);
}

strcpy(dup, str);

return (dup);
}
