#include "main.h"
#include <stdio.h>

/**
 * print_square - A function prints # size time
 *
 * @size: the times that will # be printed
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
