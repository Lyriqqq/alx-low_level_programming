#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * _realloc - function that reallocates a memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size of the allocated space of pointer
  * @new_size: the new size of the new memory block
  * Return: void pointer
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *p, *p_aux;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		free(ptr);
		return (NULL);
	}
	p_aux = ptr;
	for (x = 0; x < old_size && x < new_size; x++, p_aux++)
	{
		p[x] = *p_aux;
	}
	free(ptr);
	return (p);
}
