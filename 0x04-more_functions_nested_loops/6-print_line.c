#include "main.h"
#include <stdio.h>

/**
 * print_line - A function prints _ n times
 *
 * @n: the times that will _ be printed
*/

void print_line(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
