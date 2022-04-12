#include <stdio.h>
/**
* main -Prints  all possible combinations of two two-digit numbers.
*
* Return: 0
*/
int main(void)
{
	int l, m;

	for (l = '0'; l <= '8'; l++)
	{
		for (m = '1'; m <= '9'; m++)
		{
			putchar(l);
			putchar(m);
			if (l != '8' || m != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		m = l + 2;
	}
	return (0);
}
