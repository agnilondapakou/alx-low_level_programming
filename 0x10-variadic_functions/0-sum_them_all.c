#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - variadic function
  * @n: first parameter
  *
  * Return: 0 if n == 0 and int if not
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
