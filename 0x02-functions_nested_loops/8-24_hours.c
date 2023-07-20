#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_baeur - prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j, e, h;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (h = 48; h <= 57; h++)
			{
				for (e = 48; e <= 57; e++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(h);
					_putchar(e);
					_putchar('\n');
				}
			}
		}
	}
}
