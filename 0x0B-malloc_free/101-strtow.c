#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * strtow - function that splits a string into words
 * @str: input pointer of the string to split
 * Return: pointer to concatened strings or NULL if it fails
 */
char **strtow(char *str)
{
	char **array;
	int x = 0, y, z, w = 0, len = 0, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; str[x]; x++)
	{
		if ((str[x] != ' ' || *str != '\t') &&
				((str[x + 1] == ' ' || str[x + 1] == '\t') || str[x + 1] == '\n'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (count + 1));
	if (array == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0' && w < count; x++)
	{
		if (str[x] != ' ' || str[x] != '\t')
		{
			len = 0;
			y = x;
			while ((str[y] != ' ' || str[y] != '\t') && str[y] != '\0')
				y++, len++;
			array[w] = malloc((len + 1) * sizeof(char));
			if (array[w] == NULL)
			{
				for (w = w - 1; w >= 0; w++)
					free(array[w]);
				free(array);
				return (NULL);
			}
			for (z = 0; z < len; z++, x++)
				array[w][z] = str[x];
			array[w++][z] = '\0';
		}
	}
	array[w] = NULL;
	return (array);
}
