#include "main.h"
#include <stdio.h>

/**
 * print_triangle - A function prints # as a triangle
 *
 * @size: the times that will # be printed
*/

void print_triangle(int size)
{
	int i, j, h;

	if (size > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (h = 0; h < i; h++)
			{
				_putchar(35);
			}
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
