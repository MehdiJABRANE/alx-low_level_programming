#include "main.h"

int actual_is_prime_number(int n, int i);

/**
 * is_prime_number - returns the 1 if the number is prime and 0 if its not
 * @n: number to calculate if its prime
 *
 * Return: the result
 */
int is_prime_number(int n)
{
	return (actual_is_prime_number(n, 2));
}

/**
 * actual_is_prime_number - recurses to find if the number is prime
 * @n: number to calculate if it is prime
 * @i: iterator
 *
 * Return: the result
 */
int actual_is_prime_number(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i == n - 1)
		return (1);
	actual_is_prime_number(n, i + 1);
}
