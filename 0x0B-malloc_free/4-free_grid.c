#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees previously allocatted array
 * @grid: 2-D grid
 * @height: height of the grid
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
