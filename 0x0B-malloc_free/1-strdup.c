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
	int i;

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
			for (i = 0; i < strlen(str); i++)
			{
				cpstr[i] = str[i];
			}
			return (cpstr);
		}
	}
}
