#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - A C function that prints a string reversed
 *
 * @s: the string
*/

void print_rev(char *s)
{
	int length, i;

        length = 0;
        while (s[length] != '\0')
        {
                length += 1;
        }
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
