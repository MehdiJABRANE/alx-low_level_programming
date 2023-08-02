#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts_rev_recursion - A C function that prints a string rev with recursion
 *
 * @s: the string
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
