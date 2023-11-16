#include "monty.h"
/***/
void readlines_from_file(char *filename)
{
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

execute_line(buffer_line);
}
fclose(file);
}
/***/
void execute_line(const char *line)
{
char *delim = " \t\n";
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
printf("opcode = %s, val  = %s\n", opcode, val);
free(line_copy);
}
