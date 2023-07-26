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
	int length;

	length = 0;
	while (str[length] != '\0' || str[length - 1] != '\0')
	{
		_putchar(str[length]);
		length += 2;
	}
	_putchar('\n');
}
