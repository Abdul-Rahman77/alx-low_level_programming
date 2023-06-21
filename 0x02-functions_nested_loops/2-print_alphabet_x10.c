#include "main.h"

/**
* print_alphabet_x10 - derives and replicates lowercase alpha 10x
*/

void print_alphabet_x10(void)
{
	int i = 97;
	int count = 0;

	while (count < 10)
	{
		while (i  <= 122)
		{
			_putchar(i);
			i++;
		}
		count++;
		_putchar('\n');

		i = 97;
	}
}
