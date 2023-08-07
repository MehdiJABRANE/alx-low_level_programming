#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * create_array - A C function that creates an array
 * @size: the size of the array
 * @c: the character that will be in the beginning of the arrat
 * Return: the array (success)
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	
	char *newstr = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < length1; i++)
		{
			newstr[i] = s1[i];
		}
		for (; j < length2; j++)
		{
			newstr[i] = s2[j];
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	
}
