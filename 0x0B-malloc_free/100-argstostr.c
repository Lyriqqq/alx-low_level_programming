#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - Function that concatenates all the arguments of the program
  * @ac: width of the grid
  * @av: height of the grid
  * Return: pointer to a new string or NULL if it fails
  **/

char *argstostr(int ac, char **av)
{
	int x, y, z = 0, len = 0;
	char *p;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			len++;
		}
	}
	p = malloc((len + ac + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			p[z] = av[x][y];
			z++;
		}
		p[z] = '\n';
		z++;
	}
	return (p);
}
