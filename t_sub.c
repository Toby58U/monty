#include "monty.h"

/**
 * t_sub - Subtracts the top element of the stack
 * from the next element and pushes the result.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_sub(stack_t **stack, unsigned int line_number)
{
	int subtracted_value;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to subtract, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	subtracted_value = (*stack)->n;
	t_pop(stack, line_number);
	(*stack)->n -= subtracted_value;
}
