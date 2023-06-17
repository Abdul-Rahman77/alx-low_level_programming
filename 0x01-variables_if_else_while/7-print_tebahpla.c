#include <stdio.h>

/**
* main - prints all lower case alphabet
*
* Return: 0 always for proper end of program
*/
int main(void)
{
	char var = 'z';

	while (var >= 'a')
	{
		putchar(var);
		var--;
	}
	putchar('\n');
	return (0);
}
