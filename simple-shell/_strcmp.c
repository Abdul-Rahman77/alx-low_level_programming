#include "main.h"

/**
 *
 */

int _strcmp(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] == str2[i])
		{
			i++;
		}
		else
		{
			if (str1[i] > str2[i])
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
	}
	
	return (0);
}
