#include "main.h"

/**
 * main - Entry point
 *
 * Description: A C program that print the sum of all multiplies of 3 and 5
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int i, a, b, sum;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%d, ", sum);
	}
	return (0);
}
