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
	int i, j, h, e;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48 ; j <= 57; j++)
		{
			for (h = i; h <= 57; h++)
			{
				for (e = j; e <= 57; e++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(h);
					putchar(e);
					if (i + j + e + h != 227)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
