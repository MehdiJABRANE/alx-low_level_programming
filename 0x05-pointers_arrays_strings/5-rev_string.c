#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - A C function that prints a string and reversed
 *
 * @s: the string
*/

void rev_string(char *s)
{
	int length, i;

	length = strlen(s);
	char *e[length + 1];

	for (i = 0; i < length; i++)
	{
		e[i] = s[length - 1 - i];
	}
	e[length] = '\0';
	for (i = 0; i < length; i++)
	{
		s[i] = e[i];
	}
}
