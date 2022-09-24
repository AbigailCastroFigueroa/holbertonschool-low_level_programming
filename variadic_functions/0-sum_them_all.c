#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all the parameters given
 * @n: amount of arguments given
 *
 * Return: 0 if n is equal to 0, an integer otherwise.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list num;

	va_start(num, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		x += va_arg(num, int);
	}
	return (x);
}
