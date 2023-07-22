#include "main.h"
#include <stdio.h>

/**
 * more_numbers - A function prints numbers from 1 to 14
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		int operation;

		if (i >= 10)
		{
			operation = i / 10;
			_putchar(operation + '0');
		}
		operation = i % 10;
		_putchar(operation + '0');
	}
	_putchar('\n');
}
