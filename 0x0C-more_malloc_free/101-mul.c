#include <stdio.h>
#include <stdlib.h>

/**
  * main: program that multiplies two numbers
  * @argc: count of the arguments supplied to the program and the
  * @argv: an array of pointers to the strings
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int count, multi = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			multi = multi * atoi(argv[count]);
		}
		printf("%d\n", multi);
		return (0);
	}
}
