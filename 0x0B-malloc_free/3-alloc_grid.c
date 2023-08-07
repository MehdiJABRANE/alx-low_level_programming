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
	if (width <= 0 || height <= 0)
		return (NULL);
	int i;
	int **array = (int **)calloc(height * sizeof(int));

	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		array[i] = (int *)calloc(width * sizeof(int));
}
