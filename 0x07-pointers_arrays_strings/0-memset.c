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
	unsigned int i;

	for (i = 0; i < n; i++)
	{		
		s[i] = b;
	}
	return (s);
}
