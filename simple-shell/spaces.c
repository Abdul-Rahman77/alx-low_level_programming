#include "main.h"

/**
 *
 *
 *
 */

int spaces(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			count++;
		}
		i++;
	}
	return (count);
}
