#include "main.h"
/**
 *
 */

int main(void)
{
	char *command = NULL;
	while (1)
	{
		command = getCommand();
		execute_command(command);

	}
	
	free(command);
	return (0);
}
