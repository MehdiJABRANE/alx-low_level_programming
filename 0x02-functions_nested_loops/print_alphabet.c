#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints all the alphabets
 *
 * Return: On success 1. On error -1
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
}
