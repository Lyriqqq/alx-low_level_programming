#include <stdio.h>

/**
 *main - adds numbers
 *
 *@argc: argumentcounter
 *@argv: vector array
 *Return: 0 
 */
int main(int argc, char *argv[])
{
	int x;
	int add = 0;
	int y;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");

					return (1);
				}
			}
			add += atoi(argv[x]);
		}
		printf("%d\n", add);
	}
	return (0);
}
