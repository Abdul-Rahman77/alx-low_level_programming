#include "main.h"
#include "_putchar.c"
#include <unistd.h>

/**
* alphabet - prints lowercase alphabets
* main - code execution entry point
* Return: 0
*/

void alphabet()
{
	int i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
	alphabet();
	return (0);
}
