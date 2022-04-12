#include <stdio.h>
/**
* main -Prints  all possible combinations of two two-digit numbers.
*
* Return: 0
*/
int main(void)
{
	int numbl, numbm;

	for (numbl = 0; numbl <= 98; numbl++)
	{
		for (numbm = numbl + 1; numbm <= 99; numbm++)
		{
			putchar((numbl / 10) + '0');
			putchar((numbl % 10) + '0');
				putchar(' ');
			putchar((numbm / 10) + '0');
			putchar((numbm % 10) + '0');

			if (numbl == 98 && numbm == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
