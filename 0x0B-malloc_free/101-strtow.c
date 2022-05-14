#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **strtow - function that splits a string into words
 * @str: The array
 *
 * Return: char
 */
char **strtow(char *str)
{
	int i;
	char **s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	s = malloc(i);
	if (s == NULL)
		return (NULL);
	return (s);
}
