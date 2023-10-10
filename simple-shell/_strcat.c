#include "main.h"

/**
 *
 *
 */

char *_strcat(char *str1, char *str2)
{
//	size_t sum_of_sizes = _strlen(str1) + _strlen(str2);
	char *buffer;
	int i = 0;
	int count = 0;

	while (str1[i] != '\0')
	{
		buffer[i] = str1[i];
		i++;
	}
	while (str2[count] != '\0')
	{
		buffer[i] = str2[count];
		count++;
	}

	return (buffer);

}
