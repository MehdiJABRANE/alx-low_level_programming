#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that return 1 if c is upper and 0 if c is lower
 *
 * @c: the ASCII number of the character
 *
 * Return: 0 if its lower and 1 if its upper
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
