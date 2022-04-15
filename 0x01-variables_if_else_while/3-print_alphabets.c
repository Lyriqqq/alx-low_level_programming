#include <stdio.h>
/**
  * main -Prints the alphabetic in lower case and upper case
  * Return: 0
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}


