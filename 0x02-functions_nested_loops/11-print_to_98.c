#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: the number that will for start from
 *
 * Return: from n to 98
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i <= 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i >= 98; i++)
			printf("%d, ", i);
	}
	printf("98\n");
}
