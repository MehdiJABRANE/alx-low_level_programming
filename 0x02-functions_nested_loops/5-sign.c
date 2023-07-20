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
		printf("%s", "+");
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
