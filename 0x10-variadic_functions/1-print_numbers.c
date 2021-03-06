#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - function that prints numbers, folled by a new line
  * @n:is the number of integers passed to the function
  * @separator: string to be printed between numbers
  * Return: Void
  **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst; /* creating the list */

	/* initialize the list to store all values after n */
	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(lst); /* cleaning up the list */
	printf("\n");
}

