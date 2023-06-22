#include "main.h"

/**
* print - returns the output of a string
* @str: string argument for print
*
* main - entry point
* Return: 0
*/

/**
* main - entry point
* Return: Always 0
*/

void print(const char *str)
{
	int i = 0;

	while (i < 8)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
int main(void)
{
	const char *text = "_putchar\n";

	print(text);
	return (0);
}
