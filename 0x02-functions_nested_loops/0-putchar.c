#include "_putchar.c"

/**
* main - Entry point
* print - returns the output of a string
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
	return;
}
int main(void)
{
	const char *text = "_putchar\n";
	print(text);
	return (0);
}
