#include "main.h"
#include <stdio.h>

/**
 * print_triangle - A function prints # as a triangle
 *
 * @size: the times that will # be printed
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if ((i + j) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
