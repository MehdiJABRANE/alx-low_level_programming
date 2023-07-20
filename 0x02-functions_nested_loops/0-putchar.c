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
	int i;

	char sent[] = "_putchar";

	for (i = 0; i < strlen(sent); i++)
	{
		_putchar(sent[i]);
	}
	return (0);
}
