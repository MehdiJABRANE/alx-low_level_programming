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
	int i;
	long int a, b, sum;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (i == 49)
			printf("%ld\n", sum);
		else
			printf("%ld, ", sum);
	}
	return (0);
}
