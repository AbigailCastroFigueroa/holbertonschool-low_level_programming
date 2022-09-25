#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: separate arguments given
 * @n: amount of arguments given
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);
		if (!str)
			printf("(nil)");
		else
		printf("%s", str);
		if (i != n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
