#include "main.h"

/**
 * leet - change some alphabets to numbers
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i, j;

	char spe[] = "43071";
	char alp[] = "AEOTL";
	char sm[] = "aeotl";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == alp[j] || s[i] == sm[j])
			{
				s[i] = spe[j];
			}
		}
	}

	return (s);
}
