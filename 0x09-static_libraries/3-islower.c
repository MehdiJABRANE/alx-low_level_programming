#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if the character is lower or not
 *
 * @c: the character that i will check
 *
 * Return: 1 if it's lower, 0 if it's not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
