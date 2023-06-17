#include <stdio.h>

/**
* main - prints all lower case alphabet
*
* Return: 0 always for proper end of program
*/
int main(void)
{
	int var;

	char alpha;

	for (var = 48; var < 59; var++)
	{
		putchar(var);
	}
	for (alpha = 'a'; alpha < 'g'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
