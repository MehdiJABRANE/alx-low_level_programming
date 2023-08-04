#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - A C function that returns the length of a string
 *
 * @s: the string
 *
 * Return: The length of the string (Success)
*/

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length += 1;
	}
	return (length);
}
