#include <stdio.h>

/**
 *main - print all arguments recieved
 *
 *@argc: Argument counter
 *@argv: Argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
