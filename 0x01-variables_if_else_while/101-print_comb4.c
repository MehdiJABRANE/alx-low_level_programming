#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints alphabets in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, h;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (h = j + 1; h <= 57; h++)
			{
			putchar(i);
			putchar(j);
			putchar(h);
			if (i != 55)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
