#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - A C function that reverse an array
 *
 * @a: the array
 *
 * @n: the number of reversed
*/

void reverse_array(int *a, int n)
{
	int i;

	char *e[n];

	for (i = 0; i < n; i++)
	{
		e[i] = a[n - 1 - i];
	}
	e[n] = '\0';
	for (i = 0; i < n; i++)
	{
		a[i] = e[i];
	}
}
