#include "monty.h"
/**
 *readlines_from_file - readlines_from_file
 *
 *@filename: file name
*/
void readlines_from_file(char *filename)
{
unsigned int line_num = 1;
char buffer_line[1024];
FILE *file;
char *newline;
if (filename == NULL)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE); }
file = fopen(filename, "r");
if (file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE); }
while (fgets(buffer_line, sizeof(buffer_line), file) != NULL)
{
newline = strchr(buffer_line, '\n');
if (newline != NULL)
*newline = '\0';
execute_line(buffer_line, line_num);
line_num++;
}
fclose(file);
free_nodes(head);
}
/**
 *execute_line - execute line
 *
 *@line: readed line
 *@line_num: line number
*/
void execute_line(const char *line, unsigned int line_num)
{
char *delim = " $\t\n";
char *opcode;
char *val;
char *line_copy = _strdup(line);
if (line_copy == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
opcode = strtok(line_copy, delim);
if (opcode == NULL)
{
free(line_copy);
return; }
val = strtok(NULL, delim);
/*printf("opcode = %s, val = %s\n", opcode,val);*/
get_op_func(opcode, val, line_num);

free(line_copy);
}
