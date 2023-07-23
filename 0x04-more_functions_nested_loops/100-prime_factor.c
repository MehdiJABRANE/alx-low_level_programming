#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that calculates the prime factor
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int i, n;

	n = 612852475143;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
