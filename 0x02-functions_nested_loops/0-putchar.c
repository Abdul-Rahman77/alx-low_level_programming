#include "main.h"

/**
* print - returns the output of a string
* main - main entry point
* str - string argument for print 
* Return: 0
*/
void print(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
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
