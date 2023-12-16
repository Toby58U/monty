#include "monty.h"

/**
 * t_pop - Removes the top element from the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *pop_node = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to pop from an empty stack\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->prev = (*stack)->prev;
	(*stack)->prev->next = (*stack)->next;

	if (var.stack_len != 1)
		*stack = (*stack)->next;
	else
		*stack = NULL;

	free(pop_node);
	var.stack_len--;
}
