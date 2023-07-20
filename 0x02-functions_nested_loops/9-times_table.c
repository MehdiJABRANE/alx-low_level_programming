#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int operation, first_digit, second_digit;

			operation = i * j;
			if (j == 0)
			{
				_putchar(48);
			}
			if (operation > 0 && operation < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(operation + '0');
			}
			if (operation > 10)
			{
				first_digit = operation / 10;
				second_digit = operation % 10;
				_putchar(' ');
				_putchar(first_digit + '0');
				_putchar(second_digit + '0');
			}
			if (j != 9)
			{
				_putchar(44);
			}
		}
		_putchar('\n');
	}
}
