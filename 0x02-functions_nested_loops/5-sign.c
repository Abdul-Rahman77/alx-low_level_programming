#include "main.h"

/**
* print_sign - determines if a number has a + or - sign
* @n: Argument passed to the function print_sign
* Return: 1 if n greater than 0, 0 if n is 0 and -1 if n less than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
