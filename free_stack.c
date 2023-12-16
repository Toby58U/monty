#include "monty.h"

/**
 * t_free_stack - Frees the stack on program exit.
 * @exit_status: Exit status.
 * @stack_ptr: Double pointer to the stack.
 *
 * Return: void
 */
void t_free_stack(int exit_status, void *stack_ptr)
{
	stack_t **stack;
	stack_t *next_node;

	(void)exit_status;

	stack = (stack_t **)stack_ptr;

	if (*stack)
	{
		(*stack)->prev->next = NULL;
		(*stack)->prev = NULL;
	
	}

	while (*stack != NULL)
	{
		next_node = (*stack)->next;
		free(*stack);
		*stack = next_node;
	}

	var.stack_len = 0;
}
