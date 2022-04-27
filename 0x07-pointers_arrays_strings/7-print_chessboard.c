#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: matrix
*/

void print_chessboard(char (*a)[8])
{
	int x, z;

	for (x = 0; x < 8; x++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(*(*(x + a) + z));
		}
	_putchar('\n');
	}
}
