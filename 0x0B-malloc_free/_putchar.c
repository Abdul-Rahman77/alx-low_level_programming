#include <unistd.h>

/**
* _putchar - prints a character to the stdout
* @c: An argument to the _putchar()
* Return: the character c passed to the function _putchar
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
