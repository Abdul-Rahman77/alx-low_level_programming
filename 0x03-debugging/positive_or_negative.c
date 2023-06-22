#include <stdio.h>

/**
* positive_or_negative - determines whether an integer is +, - or 0
*
* @i: An argument of positive_or_negative
*/
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
