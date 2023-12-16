#include "monty.h"

/**
 * t_pall - Prints all values on the stack starting from the top.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the script file.
 *
 * Return: void
 */
void t_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;

	(void)(line_number); /* Unused parameter */

	current_node = *stack;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;

		/* Check if we have cycled back to the original stack top */
		if (current_node == *stack)
		{
			return;
		}
	}
}
