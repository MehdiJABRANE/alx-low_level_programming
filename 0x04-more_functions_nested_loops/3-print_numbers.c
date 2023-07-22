#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints the number from 0 to 9 with _putchar
*/

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
