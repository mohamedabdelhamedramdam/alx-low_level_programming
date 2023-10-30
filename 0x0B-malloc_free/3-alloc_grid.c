#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dimensional array of int
 * @width: type int width.
 * @height: type int height.
 * Return: Null if 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, y;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(**grid));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grid[i][y] = 0;
	}
	return (grid);
}
