#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *arr = (char *)malloc(strlen(str) + 1 * sizeof(char));

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < strlen(str); i++)
			{
				arr[i] = str[i];
			}
			return (arr);
		}
	}
}
