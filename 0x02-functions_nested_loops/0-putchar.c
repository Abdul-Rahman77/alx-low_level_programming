#include "main.h"

/**
* main - entry point
* Return: Always 0
*/

int main(void)
{
	const char *str = "_putchar\n";
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
