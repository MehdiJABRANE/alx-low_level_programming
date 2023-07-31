#include "main.h"

/**
 * rot13 - encodes the string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char spe[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == spe[j])
			{
				s[i] = alp[j];
			}
		}
	}

	return (s);
}
