#include "main.h"

/**
 *
 *
 */

void execute_command(char *command)
{
	char *str;
	pid_t getPid = fork();

	if (getPid == -1)
	{
		_putchar('\n');
		free(command);
		perror("Forking failed!");
		exit(EXIT_FAILURE);
	}
	else if (getPid == 0)
	{
		char *args_to_main[] = {command, "-l", NULL};

		if (execve(command, args_to_main, NULL) == -1)
		{
			free(command);
			perror("Command not found!");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		pid_t status;
		wait(&status);

		if (WIFEXITED(status)) {
			str = malloc(10); // Allocate memory for the status string
			if (str == NULL) {
				perror("Memory allocation failed!");
				exit(EXIT_FAILURE);
			}
			snprintf(str, 10, "%d", WEXITSTATUS(status)); // Convert status to string
			printf("Child process exited with status: %s\n", str);
			free(str); // Free the allocated memory
		}

	}
}
