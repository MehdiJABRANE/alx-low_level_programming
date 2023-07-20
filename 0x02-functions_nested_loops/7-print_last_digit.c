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
	int ab;

	ab = _abs(n % 10);
	return (ab);
}
