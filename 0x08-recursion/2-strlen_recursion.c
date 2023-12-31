#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - A C function that returns the length of a string
 *
 * @s: the string
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
