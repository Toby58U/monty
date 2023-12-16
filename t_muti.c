#include "monty.h"

/**
 * t_mul - Multiplies the top two elements of the stack and pushes the result.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_mul(stack_t **stack, unsigned int line_number)
{
	int multiplier;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to mul, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	multiplier = (*stack)->n;
	t_pop(stack, line_number);
	(*stack)->n *= multiplier;
}
