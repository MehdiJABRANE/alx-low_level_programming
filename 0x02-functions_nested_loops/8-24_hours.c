#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_baeur - prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j, e, h;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (h = 48; h <= 53; h++)
			{
				for (e = 48; e <= 57; e++)
				{
					if (i == 50 && j > 51)
					{
						continue;
					}
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
