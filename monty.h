#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
extern stack_t *head;

void readlines_from_file(char *filename);
void execute_line(const char *line, unsigned int line_num);
char *_strdup(const char *str);
void get_op_func(char *opcode, char *val, unsigned int line_num);

stack_t *create_new_node(int n);
int is_digit(char *str);
void free_nodes(stack_t *head);

void opcode_push(stack_t **stack, unsigned int ln_num);
void opcode_pall(stack_t **s, unsigned int l_n);
void opcode_pint(stack_t **stack,unsigned int ln_num);
#endif
