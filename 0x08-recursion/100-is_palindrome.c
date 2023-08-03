#include "main.h"
#include <string.h>
int actual_is_palindrome(char *s, int i, int j);

/**
 * is_palindrome - returns the 1 if the string is palindrome and 0 if its not
 * @s: the string
 *
 * Return: the result
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (length == 0)
		return (1);
	return (actual_is_palindrome(s, 0, length - 1));
}

/**
 * actual_is_palindrome - recurses to find if the string is palindrome
 * @s: the string
 * @i: i
 * @j: j
 *
 * Return: the result
 */
int actual_is_palindrome(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (j == 0)
			return (1);
		return (actual_is_palindrome(s, i + 1, j - 1));
	}
	else
		return (0);
}
