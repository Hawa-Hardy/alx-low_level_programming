#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: pointer to the 2D array
 * @height: height dimension of the grid
 * Description: frees the memory allocated for the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
	{
		free(grid[row]);
	}

	free(grid);
}
