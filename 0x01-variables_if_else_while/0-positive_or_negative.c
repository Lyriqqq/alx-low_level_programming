#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */

/**
* main -Prints the numbers from 00 to 99
*
Return: Always (Success)
*
*/
int main(void)
{
	int x, i;
	srand(time(0));
        x = rand() - RAND_MAX / 2;
      /* your code goes there */
	x = i = '0';
	for (x = '0' ; x <= '9' ; x++)
{
	for (i = '0' ; i <= '9' ; i++)
{
	putchar(x);
	putchar(i);
	if ((x != '9' || x == '9' && i != '9' ))
{
	putchar(',');
	putchar(' ');
}
}
}
putchar('\n');
return (0);
}
