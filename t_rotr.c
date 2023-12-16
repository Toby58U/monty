#include "monty.h"

/**
 * t_rotr - Rotates the stack to the bottom.
 * @stack: Double pointer to the beginning of the linked list.
 * @line_number: Script line number.
 *
 * Return: void
 */
void t_rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number; /* Unused parameter */

	if (*stack != NULL)
		*stack = (*stack)->prev;
}

