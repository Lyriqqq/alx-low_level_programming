#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat -function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: NULL on failure and pointer on  success
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, g, m, sum;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	sum = i + j;
	p = malloc(sizeof(*p) * (sum + 1));
	if (p != NULL)
	{
		for (g = 0; g < i; g++)
		{
			p[g] = s1[g];
		}
		for (m = 0; m < sum; m++)
		{
			p[g++] = s2[m];
		}
		p[g] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (p);
}
