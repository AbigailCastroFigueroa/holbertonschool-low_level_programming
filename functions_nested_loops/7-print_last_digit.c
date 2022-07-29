#include "main.h"
/**
 * print_last_digit - this function prints the last digit of a given number.
 * @i: given number.
 *
 * Return:0
 */
int print_last_digit(int i)
{
	int a;

	if (i < 0)
		i = -i;
	a = i % 10;
	_putchar(a + '0');
	return (a);
}
