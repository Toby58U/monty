#include "monty.h"
#include <ctype.h>

/**
 * has_non_digit - checks if a string contains only digits
 * @str: string to check
 *
 * Return: 1 if non-digit characters found, 0 otherwise
 */
static int has_non_digit(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);

/**
 * t_push - Pushes an integer onto the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Script line number.
 *
 * Return: void
 */
void t_push(stack_t **stack, unsigned int line_number)
{
	char *argument;
	int value;

	argument = strtok(NULL, "\n\t\r ");
	if (argument == NULL || has_non_digit(argument))
	{
		dprintf(STDOUT_FILENO,
				"L%u: usage: push integer\n",
				line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(argument);
	if (!add_node(stack, value))
	{
		dprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	var.stack_len++;
}
