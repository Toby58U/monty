#include "monty.h"

/**
 * set_stack - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Script line number.
 *
 * Return: void
 */
void set_stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
 	(void)line_number;
	var.queue = STACK;
}
