#include "monty.h"

/**
 * t_pint - Prints the value on top of the stack, or exits if the stack is empty.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *top_node = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't pint, stack empty\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", top_node->n);
}
