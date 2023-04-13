#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the 2D grid
 * @grid: The grid to free
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

