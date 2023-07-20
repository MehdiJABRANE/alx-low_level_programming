#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - gives the last digit of an int
 *
 * @n: the number that will be operated
 *
 * Return: last digit of an integer
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
