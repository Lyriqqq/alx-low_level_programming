#include <stdio.h>

/**
 * main - function that  prints an argument passed to it
 * followed by a new line
 * @argc: x args
 * @argv: array  args
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

