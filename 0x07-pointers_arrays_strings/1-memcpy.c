#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memcpy - A C function that copies a char in the first n of an array
 *
 * @dest: the array
 *
 * @src: the charater
 *
 * @n: the n of array
 *
 * Return: The concatenated string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
