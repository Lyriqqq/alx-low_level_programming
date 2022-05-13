#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly allocated space
  * in memory which contains a copy of the string given as a parameter
  * @str: pointer string
  * Return: NULL if str = NULL or a pointer to the duplciated string
  * or NULL if insufficient memory is available
  **/

char *_strdup(char *str)
{
	int l, m;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l]; l++)
	{
	}
	a = malloc((l + 1) * sizeof(char));
	if (a != NULL)
	{
		for (m = 0; str[m]; m++)
		{
			a[m] = str[m];
		}
		a[m] = '\0';
	}
	else
		return (NULL);
	return (a);
}
