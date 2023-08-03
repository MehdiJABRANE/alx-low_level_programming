#include "main.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - A C function that calculates the square root of n
 *
 * @n: the number
 *
 * Return: the factorial
*/

int _sqrt_recursion(int n)
{
	int squareroot;

	squareroot = 0;
	while (squareroot * squareroot <= n)
	{
		if (squareroot * squareroot == n)
			return (squareroot);
		squareroot++;
	}
	return (-1);
}
