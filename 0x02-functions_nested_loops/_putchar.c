#include <unistd.h>
#include "main.h"

/**
* _putchar - writing out a char of 1 byte to stdout
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
