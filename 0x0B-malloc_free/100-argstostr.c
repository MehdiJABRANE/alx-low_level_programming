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
char *argstostr(int ac, char **av)
{
	int i, j = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		char *arr = (char *)malloc(ac * sizeof(char));

		if (arr == NULL)
			return (NULL);
		for (i = 0; i < ac; i++)
		{
			arr[j] = av[i];
			j++;
			arr[j] = '\n';
			j++;
		}
	}
	return (arr);
}
