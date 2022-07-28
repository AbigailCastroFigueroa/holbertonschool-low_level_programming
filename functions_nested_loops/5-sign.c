#include "main.h"
/**
 * print_sign - let us know if a given value is less or great than 0.
 * @n: value given.
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar(10);
	return (0);
}
