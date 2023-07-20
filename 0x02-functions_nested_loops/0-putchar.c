#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char sent[] = "_putchar";

	int i, length = strlen(sent);

	for (i = 0; i < length; i++)
	{
		_putchar(sent[i]);
	}
	putchar('\n');
	return (0);
}
