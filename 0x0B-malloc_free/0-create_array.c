#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * and initializes it with a specific char
  * @size: size of the buffer
  * @c: char to asign
  * Return: NULL if size is 0 or fails or a pointer to the array
  **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
}
