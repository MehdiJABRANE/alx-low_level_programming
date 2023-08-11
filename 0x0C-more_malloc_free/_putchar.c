#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character a
 *
 * @a: the character to print
 *
 * Return: On success 1. On error -1
*/

int _putchar(char a)
{
	return (write(1, &a, 1));
}
