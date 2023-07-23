#include "main.h"
#include <stdio.h>

/**
 * print_number - Entry point
 *
 * @n: the number
 *
 * Description: A C function that prints a number
*/

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
		n1 = n;
	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + 48);
}
