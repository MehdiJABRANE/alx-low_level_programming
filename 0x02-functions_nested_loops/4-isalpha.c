#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if the character is an alphabet or not
 *
 * @c: the character that i will check
 *
 * Return: 1 if it's lower, 0 if it's not
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
