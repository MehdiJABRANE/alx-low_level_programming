#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - A function prints \\ n time
 *
 * @n: the times that will \\ be printed
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			i = j;
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
