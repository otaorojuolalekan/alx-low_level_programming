#include "main.h"

/**
 * free_grid - frees the 2D grid previous created in 3-alloc_grid task
 * @grid: the grid already created and to be freed
 * @height: Number of rows in grid
 * Return: No return.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
