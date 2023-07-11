#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees memory of 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int y;

	for (y = 0; y < height; y++)
	{
		free(grid[y]);
	}
	free(grid);
}

