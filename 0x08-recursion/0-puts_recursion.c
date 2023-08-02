#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_recursion - A C function that prints a string with recursion
 *
 * @s: the string
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
