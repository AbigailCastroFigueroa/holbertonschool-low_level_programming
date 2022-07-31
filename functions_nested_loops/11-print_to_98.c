#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - it should print all number in an ascending order up to 98.
 * @n: given value.
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		printf("%d, ", n++);

			printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		printf("%d, ", n--);

		printf("%d\n", n);
	}
}
