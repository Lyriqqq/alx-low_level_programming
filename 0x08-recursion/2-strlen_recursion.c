#include "main.h"

/**
 *_strlen_recursion -function that returns the length of a string
 *
 *@s: pointer to string
 *Return: int plus the length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		s++;
		n = _strlen_recursion(s);
		return (n + 1);
	}

	return (0);
}
