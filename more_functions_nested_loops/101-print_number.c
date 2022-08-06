#include "main.h"
/**
 * print_number - prints an integer.
 * @n: variable to test.
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		_putchar(45);
		   n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
