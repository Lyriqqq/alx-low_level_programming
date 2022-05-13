#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - function that frees a 2 dimensional grid previously created by
  * the  alloc_grid function
  * @width: width of the grid
  * @height: height of the grid
  * Return: Pointer or NULL
  **/

int **alloc_grid(int width, int height)
{
	int i, j, k, **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(p[k]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
