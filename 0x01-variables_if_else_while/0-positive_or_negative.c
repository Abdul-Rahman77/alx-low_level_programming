#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - determines whether a random number is +, - or 0
*
* Return: exit 0 when program executes normally
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
