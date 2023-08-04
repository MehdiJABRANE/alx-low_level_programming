#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - A C function that prints a string
 *
 * @str: the string
*/

void _puts(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length += 1;
	}
	_putchar('\n');
}
