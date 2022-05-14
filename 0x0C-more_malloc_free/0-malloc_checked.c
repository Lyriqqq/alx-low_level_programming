#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * malloc_checked - function that allocates memory
  * @b: size
  * Return: pointer to the allocated memory
**/

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
