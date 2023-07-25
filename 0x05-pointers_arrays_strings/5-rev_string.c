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
	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
