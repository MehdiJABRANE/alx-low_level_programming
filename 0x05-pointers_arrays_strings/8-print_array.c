#include "main.h"
#include <string.h>

/**
 * print_array - A C function that prints n elements
 *
 * @a: the array
 *
 * @n: the n
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
