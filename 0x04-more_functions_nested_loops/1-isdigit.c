#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that return 1 if c is a digit and 0 if c is not
 *
 * @c: the ASCII number of the character
 *
 * Return: 0 if its not a digit and 1 if it is
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
