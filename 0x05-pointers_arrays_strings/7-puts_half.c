#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A C function that prints a string
 *
 * @str: the string
*/

void puts_half(char *str)
{
	int length, i;

	length = strlen(str);
	if (length % 2 != 0)
	{
		length = (length - 1) / 2;
		for (i = length + 1; i < length + length; i++)
			_putchar(str[i]);
	}
	else
	{
		length = length / 2;
		for (i = length; i < length + length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
