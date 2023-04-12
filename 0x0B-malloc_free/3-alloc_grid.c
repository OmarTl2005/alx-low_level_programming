#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-D array
 * @width: width of the grid
 * @height: height of the grid
 * Return: return pointer to array, or NULL if width or height is 0 or neg
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(sizeof(int *) * height);
	if (!grid)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
