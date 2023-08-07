#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A C function that creates an array
 * @size: the size of the array
 * @c: the character that will be in the beginning of the arrat
 * Return: the array (success)
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *arr = (*char)malloc(size * sizeof(char));

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			arr[0] = c;
			return (arr);
		}
	}
}
