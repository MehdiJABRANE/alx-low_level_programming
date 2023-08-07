#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	int **array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		array[i] = (int *)malloc(width * sizeof(int));
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
