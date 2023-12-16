#include "monty.h"
#include <ctype.h>

/**
 * t_pstr - Prints a string from the stack of integers up to the null byte,
 * the first non-ASCII character, or the end of the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_node;
	int character_value;

	(void)line_number; /* Unused parameter */

	temp_node = *stack;

	while (temp_node != NULL)
	{
		character_value = temp_node->n;
		if (!isascii(character_value) || character_value == 0)
			break;

		putchar(character_value);

		temp_node = temp_node->next;

		/* Check if we have cycled back to the original stack top */
		if (temp_node == *stack)
			break;
	}

	putchar('\n');
}
