#include "main.h"
#include <stdio.h>

/**
 * print_triangle - A function prints # as a triangle
 *
 * @size: the times that will # be printed
*/

void main(void)
{
	int i, n;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}