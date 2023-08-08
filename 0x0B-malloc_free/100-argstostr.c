#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	char *arr = (char *)malloc(total_length * sizeof(char));
	
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(arr + j, av[i]);
		j += strlen(av[i]);
		arr[j] = '\n';
		j++;
	}
	return (arr);
}
