#include "monty.h"

/**
 * t_mod - Computes the remainder (modulus) of the second element divided by
 * the top element of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_mod(stack_t **stack, unsigned int line_number)
{
	int divisor;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to perform modulus, stack is too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	divisor = (*stack)->n;
	t_pop(stack, line_number);

	if (divisor == 0)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Division by zero is not allowed\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->n %= divisor;
}
