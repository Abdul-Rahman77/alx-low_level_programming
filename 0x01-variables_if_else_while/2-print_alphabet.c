#include <stdio.h>

/**
* main - prints all lower case alphabet
*
* Return: 0 always for proper end of program
*/
int main(void)
{
	char var = 'a';

	while (var <= 'z')
	{
		putchar(var);
		var++;
	}
	putchar('\n');
	return (0);
}
