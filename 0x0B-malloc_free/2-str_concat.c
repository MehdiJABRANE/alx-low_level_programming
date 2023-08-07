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
	int i, j;

	if (s1 == NULL)
	{
		int length = strlen(s1);
		char *newstr = (char *)malloc((strlen(s1) + 1) * sizeof(char));

		for (i = 0; i < length; i++)
			newstr[i] = s1[i];
		return (newstr);
	}
	if (s2 == NULL)
	{
		int length = strlen(s2);
		char *newstr = (char *)malloc((strlen(s2) + 1) * sizeof(char));
		
		for (i = 0; i < length; i++)
			newstr[i] = s2[i];
		return (newstr);
        }
	else
	{
		int length1 = strlen(s1);
		int length2 = strlen(s2);

		char *newstr = (char *)malloc((length1 + length2 + 1) * sizeof(char));

		if (newstr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < length1; i++)
			{
				newstr[i] = s1[i];
			}
			for (j = 0; j < length2; j++)
			{
				newstr[i] = s2[j];
				i++;
			}
			return (newstr);
		}
	}
}
