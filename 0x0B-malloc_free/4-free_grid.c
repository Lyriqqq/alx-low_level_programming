#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - function that frees a 2 dimensional grid previously created
  * by the alloc_grid function
  * @height: height of the grid
  * @grid: the address of the two dimensional grid
  **/

void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0 || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
