#include "_putchar.c"

/**
* print_alphabet_x10 - derives an replicate lowercase alpha 10x
* main check the code
* Return: Always 0
*/

void print_alphabet_x10()
{
	int i = 97;
	while (0 < 10)
	{
		while (i  < 122)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
int main(void)
{
	print_alphabet_x10();
	return (0);
}
