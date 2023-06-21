#include "main.h"

/**
* _isalpha - checks if a character is an alphabet
* Return: 1 if character is a lower or uppercase
* Return: 0 if character is not a lower or an uppercase
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
