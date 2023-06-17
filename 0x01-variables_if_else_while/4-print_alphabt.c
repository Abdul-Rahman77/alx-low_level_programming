#include <stdio.h>

/**
* main - prints all lower case alphabet except q and e
*
* Return: 0 always for proper end of program
*/
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
		if (var == 'e' || var == 'p')
			continue;
	}
	putchar('\n');
	return (0);
}
