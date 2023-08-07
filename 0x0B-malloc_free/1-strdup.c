#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - A C function that creates an array
 * @str: the array of characters
 * Return: the array (success)
*/
char *_strdup(char *str)
{
	int i, length;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *cpstr = (char *)malloc(strlen(str) * sizeof(char));

		if (cpstr == NULL)
		{
			return (NULL);
		}
		else
		{
			length = strlen(str);

			for (i = 0; i < length; i++)
			{
				cpstr[i] = str[i];
			}
			cpstr[i] = '\0';
			return (cpstr);
		}
	}
}
