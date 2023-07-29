#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strncat - A C function that concatenate two strings n character
 *
 * @dest: first string
 *
 * @src: second string
 *
 * @n: the number of characters to concatenate
 *
 * Return: The concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int length1, length2, i;

	length1 = strlen(dest);
	if (n <= strlen(src))
		length2 = strlen(src) - (strlen(src) - n);
	else
		length2 = strlen(src);
	for (i = length1; i < length1 + length2; i++)
		dest[i] = src[i - length1];
	if (dest[strlen(dest) - 1] != '\n')
		dest[strlen(dest)] = '\0';
	return (dest);
}
