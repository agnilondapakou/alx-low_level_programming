#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  * print_numbers - variadic function
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: Nothing.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pa, int));
		if (separator != NULL)
		{
			if (i < (n - 1))
				printf("%s ", separator);
		}
	}

	printf("\n");
}
