#include "main.h"

/**
* swap_int - swaps the values of arguments passed to it
* @a: first pointer argument
* @b: second pointer argument
*/

void swap_int(int *a, int *b)
{
	int q, p;

	q = *b;
	p = *a;
	*a = q;
	*b = p;
}

