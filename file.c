#include "monty.h"
/***/
void readlines_from_file(char *filename)
{
unsigned int line_num = 0;
char buffer_line[1024];
FILE *file;
char *newline;
if (filename == NULL)
{
fprintf(stderr, "Error: Filename is NULL\n");
exit(EXIT_FAILURE); }
file = fopen(filename, "r");
if (file == NULL)
{
fprintf(stderr, "Error: Unable to open file %s\n", filename);
exit(EXIT_FAILURE); }
while (fgets(buffer_line, sizeof(buffer_line), file) != NULL)
{
newline = strchr(buffer_line, '\n');
if (newline != NULL)
*newline = '\0';

execute_line(buffer_line, line_num);
}
fclose(file);
free_nodes(head);
}
/***/
void execute_line(const char *line, unsigned int line_num)
{
char *delim = " $\t\n";
char *opcode;
char *val;
char *line_copy = _strdup(line);

if (line_copy == NULL)
{
fprintf(stderr, "Error: Memory allocation failed\n");
exit(EXIT_FAILURE);
}
opcode = strtok(line_copy, delim);
if (opcode == NULL)
{
free(line_copy);
return; }
val = strtok(NULL, delim);
/* printf("opcode = %s, val = %s\n", opcode,val);*/
get_op_func(opcode, val, line_num);

free(line_copy);
}
