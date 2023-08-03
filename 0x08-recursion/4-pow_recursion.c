#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _pow_recursion - A C function that calculates the value of x power to y
 *
 * @x: the number
 *
 * @y: the number of power
 *
 * Return: the factorial
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
