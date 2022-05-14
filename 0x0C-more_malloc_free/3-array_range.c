#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - function that creates an array of integers
  * @min: min range
  * @max: max range
  * Return: pointer to the newly created array
**/

int *array_range(int min, int max)
{
	int x, length = 0, *p;

	if (min > max)
		return (NULL);
	length = max - min;
	p = malloc(sizeof(int) * (length + 1));
	if (p == NULL)
		return (NULL);
	for (x = 0; x <= length; x++, min++)
		p[x] = min;
	return (p);
}
