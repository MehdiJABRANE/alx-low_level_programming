#include "main.h"
#include <string.h>

/**
 * *_strcpy - A C function that copies a string and returns it
 *
 * @dest: the array
 *
 * @src: the string
 *
 * Return: the string copied
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	i = -1;
	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
