#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strcat - A C function that concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: The concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int length1, length2, i;

	length1 = strlen(dest);
	length2 = strlen(src);
	for (i = length1; i < length1 + length2; i++)
		dest[i] = src[i - length1];
	return (dest);
}
