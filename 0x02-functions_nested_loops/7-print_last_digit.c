#include "main.h"

/**
* print_last_digit - returns the last three digits of a number
* @n: An argument of the function print_last_digit
* Return: last_three_digits
*/

int print_last_digit(int n)
{
	int last_three_digits = (n % 10);

	if (last_three_digits < 0)
	{
		last_three_digits *= -1;
	}
	_putchar(last_three_digits + '0');
	return (last_three_digits);
}
