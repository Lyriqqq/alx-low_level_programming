#include "main.h"

/**
* _strspn - function that gets the length of a prefix substring
* @s: String where substring will look
* @accept: Substring of accepted chars
* Return: Length of prefix substring
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				x++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (x);
}
