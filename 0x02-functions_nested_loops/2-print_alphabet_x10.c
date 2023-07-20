#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints all the alphabets x10
 *
 * Return: On success 1. On error -1
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
