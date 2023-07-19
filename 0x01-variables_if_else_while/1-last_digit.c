#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that checks the last digit of a number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int modulo = n % 10;

	if (modulo > 5)
		printf("Last digit of %d is %d and is greater than 5", n, modulo);
	else if (modulo == 0)
		printf("Last digit of %d is %d and is 0", n, modulo);
	else if (modulo < 6 && modulo > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, modulo);
	return (0);
}
