#include "main.h"
#include <stdio.h>

/**
 * _islower - checks if the character is lower or not
 *
 * Return: 1 if it's lower, 0 if it's not
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
