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
	double squareroot;

	squareroot = sqrt(n);
	if (squareroot == (int)squareroot)
	{
		return (squareroot);
	}
	else
	{
		return (-1);
	}
}
