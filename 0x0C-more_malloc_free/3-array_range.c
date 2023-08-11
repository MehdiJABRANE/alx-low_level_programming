#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i, j = min;

	if (min > max)
		return (NULL);

	int *array = (int *)malloc(min - max * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i <= min - max; i++)
	{
		if (j > max)
			break;
		array[i] = j;
		j++;
	}
	return (array);
}
