#include <stdio.h>

/**
* main - print both lower and upper case letters
*
* Return: 0 always for proper exit
*/
int main(void)
{
	char var1 = 'a';

	char var2 = 'A';

	while (var1 <= 'z')
	{
		putchar(var1);
		var1++;
	}
	while (var2 <= 'Z')
	{
		putchar(var2);
		var2++;
	}
	putchar('\n');
	return (0);
}
