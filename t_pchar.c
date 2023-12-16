#include "monty.h"
#include <ctype.h>

/**
 * t_pchar - Prints a character from the top of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: Line number of the current operation.
 *
 * Return: void
 */
void t_pchar(stack_t **stack, unsigned int line_number)
{
	int character_value;

	if (var.stack_len < 1)
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to print character, stack is empty\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	character_value = (*stack)->n;
	if (!isascii(character_value))
	{
		dprintf(STDOUT_FILENO,
				"L%u: Unable to print character, value out of range\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", character_value);
}
