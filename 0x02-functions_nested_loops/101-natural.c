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
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		if (i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
