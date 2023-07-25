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

	length = 0;
	while (s[length] != '\0')
	{
		_putchar(s[length]);
		length += 1;
	}
	_putchar('\n');
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
