#include "_putchar.c"

/**
* alphabet - prints lowercase alphabets
* main - code execution entry point
* Return: 0
*/

void print_alphabet()
#include <unistd.h>
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
	print_alphabet();
	return (0);
}
