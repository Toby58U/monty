#include "monty.h"

/**
 * t_close_file_stream - Closes a file stream.
 * @exit_status: Exit status passed to exit.
 * @file_stream_ptr: Pointer to the file stream to be closed.
 *
 * Return: void
 */
void t_close_file_stream(int exit_status, void *file_stream_ptr)
{
	FILE *file_stream;

	(void)exit_status;

	file_stream = (FILE *)file_stream_ptr;
	fclose(file_stream);
}
