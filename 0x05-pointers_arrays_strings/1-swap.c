#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the value of two ints
 *
 * @a: first int
 *
 * @b: second int
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
