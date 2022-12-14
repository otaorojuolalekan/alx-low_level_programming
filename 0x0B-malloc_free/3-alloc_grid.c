#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D integer array.
 * @width: Width of integer array
 * @height: Height of integer array
 * Return: Null on Failure or if width/height == 0, ELSE a pointer to a 2D
 * ----- Integer array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr = malloc(height * sizeof(int *));

	if (width == 0 || height == 0)
		return (NULL);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);

			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
