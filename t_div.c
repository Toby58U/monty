#include "monty.h"

/**
 * t_div - Divides the second element of the stack by the top element.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_div(stack_t **stack, unsigned int line_number)
{
	int divisor;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to perform division, stack is too short\n",
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


	(*stack)->n /= divisor;
}
