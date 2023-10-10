#include "main.h"
/**
 *
 */

char *getCommand()
{
	char *prmt = "(abdul@ubuntu)-$ ";
	size_t size = 100;
	ssize_t getline_value;
	char *command;
	size_t command_length;

	command = (char *)malloc(sizeof(char) * size);
	if (command == NULL)
	{
		print_error("Memory allocation failed");
	}

	printString(prmt);
	getline_value = getline(&command, &size, stdin);

	if (getline_value == -1)
	{
		free(command);
		_putchar('\n');
		print_error("Process terminated");
	}

	command_length = _strlen(command);
	if (command_length > 0 && command[command_length - 1])
	{
		command[command_length - 1] = '\0';
	}

	if (_strcmp(command, "exit") == 0)
	{
		free(command);
		print_error("Exiting shell...");
	}

	
	return (command);
}
