#include "main.h"

/**
 *
 */

void print_error(char *error_message)
{
//	strcat(error_message, "\n");
	write(STDERR_FILENO, error_message, _strlen(error_message));
	exit(EXIT_FAILURE);
}
