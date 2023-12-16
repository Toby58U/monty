#include "monty.h"

/**
 * t_swap - Swaps the top two elements of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *next_node;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
				"L%u: can't swap, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	if (var.stack_len == 2)
	{
		*stack = (*stack)->next;
		return;
	}

	next_node = (*stack)->next;
	next_node->prev = (*stack)->prev;
	(*stack)->prev->next = next_node;
	(*stack)->prev = next_node;
	(*stack)->next = next_node->next;
	next_node->next->prev = *stack;
	next_node->next = *stack;
	*stack = next_node;
}

