#include <unistd>
#include "main.h"

/**
* _putchar - helps in printing to the the stdout without using the std.h
* @c: a single character to be printed always
* Return: return the character to c to stdout
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
