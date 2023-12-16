#include "monty.h"

/**
 * execute_opcode - Executes the given opcode.
 * @opcode: Opcode to execute.
 * @stack: Double pointer to the beginning of the stack.
 * @line_number: Script line number.
 *
 * Return: void
 */
void execute_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	size_t i;
	instruction_t valid_opcodes[] = {
		{"push", t_push},
		{"pall", t_pall},
		{"pint", t_pint},
		{"pop", t_pop},
		{"swap", t_swap},
		{"add", t_add},
		{"nop", t_nop},
		{"sub", t_sub},
		{"mul", t_mul},
		{"div", t_div},
		{"mod", t_mod},
		{"rotl", t_rotl},
		{"rotr", t_rotr},
		{"stack", set_stack},
		{"queue", set_queue},
		{"pchar", t_pchar},
		{"pstr", t_pstr},
		{NULL, NULL}
	};

	for (i = 0; valid_opcodes[i].opcode != NULL; i++)
	{
		if (strcmp(valid_opcodes[i].opcode, opcode) == 0)
		{
			valid_opcodes[i].f(stack, line_number);
			return;
		}
	}

	dprintf(STDOUT_FILENO,
			"L%u: Unknown instruction %s\n",
			line_number, opcode);
	exit(EXIT_FAILURE)
}
