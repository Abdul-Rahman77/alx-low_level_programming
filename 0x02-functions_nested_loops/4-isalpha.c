#include "main.h"

/**
* _isalpha - checks if a character is an alphabet
* @c: An argument of type int fo function _isalpha
* Return: 1 if character is a lower or uppercase and 0 if otherwise
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
