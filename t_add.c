#include "monty.h"

/**
 * t_add - Adds the top two elements of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Script line number.
 *
 * Return: void
 */
void t_add(stack_t **stack, unsigned int line_number)
{
	int sum = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to add, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	sum += (*stack)->n;
	t_pop(stack, line_number);
	(*stack)->n += sum;
}
