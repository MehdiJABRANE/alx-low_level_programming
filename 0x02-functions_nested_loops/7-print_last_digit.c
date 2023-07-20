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
	int last_d, ab;

	last_d = n % 10;
	ab = _abs(last_d);
	return (ab);
}
