#include "monty.h"

/**
 * t_free_line_pointer - Frees the line pointer returned by getline.
 * @exit_status: Exit status.
 * @line_pointer: Pointer to the line.
 *
 * Return: void
 */
void t_free_line_pointer(int exit_status, void *line_pointer)
{
	char **lineptr = (char **)line_pointer;

	(void)exit_status;

	if (*lineptr != NULL)
		free(*lineptr);
}
