#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts2 - A C function that prints a string
 *
 * @str: the string
*/

void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i < length;)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
