#include <stdio.h>

/**
* main - prints 0-9
*
* Return: 0 always
*/
int main(void)
{
	int i;
	for (i = 48; i < 59; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
