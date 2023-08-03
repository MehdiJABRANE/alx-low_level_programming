#include "main.h"
#include <string.h>
int actual_wildcmp(char *s1, char *s2, int i);

/**
 * wildcmp - returns the 1 if the strings is identical and 0 if its not
 * @s1: the first string
 * @s2: the second one
 *
 * Return: the result
 */
int wildcmp(char *s1, char *s2)
{
	return (actual_wildcmp(s1, s2, 0));
}

/**
 * actual_wildcmp - recurses to find if the 2 strings identical
 * @s1: the first string
 * @s2: the second one
 * @i: i
 *
 * Return: the result
 */
int actual_wildcmp(char *s1, char *s2, int i)
{
	int length;

	length = strlen(s2);
	if (s2[i] == '*')
	{
		if (i == length)
			return (1);
		return (actual_wildcmp(s1, s2, i + 1));
	}
	if (s1[i] == s2[i])
	{
		if (i == length)
			return (1);
		return (actual_wildcmp(s1, s2, i + 1));
	}
	else
		return (0);
}
