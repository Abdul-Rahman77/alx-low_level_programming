#include <unistd.h>

/**
* main - Entry point
* print - returns the output of a string
* Return: 0
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}

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
