#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional int array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to a 2 dimensional array of integers, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	mat = malloc(height * sizeof(int));
	if (mat == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(width * sizeof(int));
		if (mat[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(mat[j]);
			free(mat);
			return(NULL);
		}
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}
	return (mat);
}
