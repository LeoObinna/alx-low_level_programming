#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This is a function that frees a two dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int q;

	for (q = 0; q < height; q++)
	{
		free(grid[q]);
	}
	free(grid);
}
