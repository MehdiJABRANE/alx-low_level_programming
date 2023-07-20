#include "main.h"
#include <stdio.h>

/**
 * print_sign - checks the sign of n
 *
 * @n: the number that will be checked
 *
 * Return: 1 if it's lower, 0 if it's not
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
