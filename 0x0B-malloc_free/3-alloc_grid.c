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
	int **arr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		arr[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
