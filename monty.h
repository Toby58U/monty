#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct var_s - struct to contain the main variables of the Monty interpreter
 * @queue: flag to determine if in stack vs queue mode
 * @stack_len: length of the stack
 */
typedef struct var_s
{
	int queue;
	size_t stack_len;
} var_t;

#define STACK 0
#define QUEUE 1

/* global struct to hold flag for queue and stack length */
extern var_t var;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void t_add(stack_t **stack, unsigned int line_number);
void t_div(stack_t **stack, unsigned int line_number);
void t_mod(stack_t **stack, unsigned int line_number);
void t_pop(stack_t **stack, unsigned int line_number);
void t_mul(stack_t **stack, unsigned int line_number);
void t_nop(stack_t **stack, unsigned int line_number);
void t_sub(stack_t **stack, unsigned int line_number);
void t_pall(stack_t **stack, unsigned int line_number);
void t_pstr(stack_t **stack, unsigned int line_number);
void t_rotr(stack_t **stack, unsigned int line_number);
void t_swap(stack_t **stack, unsigned int line_number);
void t_push(stack_t **stack, unsigned int line_number);
void t_rotl(stack_t **stack, unsigned int line_number);
void t_pint(stack_t **stack, unsigned int line_number);
void t_free_stack(int exit_status, void *stack_ptr);
void t_pchar(stack_t **stack, unsigned int line_number);
void set_stack(stack_t **stack, unsigned int line_number);
void set_queue(stack_t **stack, unsigned int line_number);
void t_close_file_stream(int exit_status, void *file_stream_ptr);
void t_free_line_pointer(int exit_status, void *line_pointer);
stack_t *add_node_to_list(stack_t **list, const int value);
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number);

#endif /* _MONTY_H_ */
