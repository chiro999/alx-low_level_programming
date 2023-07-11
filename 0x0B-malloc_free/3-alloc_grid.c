#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a grid based on a given width and hight
 * @width: width input
 * @height: height input
 * Return: gives out a  2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grid_space;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid_space = malloc(sizeof(int *) * height);

	if (grid_space == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid_space[y] = malloc(sizeof(int) * width);

		if (grid_space[y] == NULL)
		{
			for (; y >= 0; y--)
				free(grid_space[y]);

			free(grid_space);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			grid_space[y][x] = 0;
	}

	return (grid_space);
}

