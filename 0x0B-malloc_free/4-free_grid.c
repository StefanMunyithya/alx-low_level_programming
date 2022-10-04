#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees up heap memory that was initially allocated
 * @grid: 2D Array
 * @height: Number of rows
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
