#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - A C function that puts a char in the first n of an array
 *
 * @s: the array
 *
 * @b: the charater
 *
 * @n: the n of array
 *
 * Return: The concatenated string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0;; i++)
	{
		if (n == 0)
			break;
		s[i] = b;
		i--;
	}
	return (s);
}
