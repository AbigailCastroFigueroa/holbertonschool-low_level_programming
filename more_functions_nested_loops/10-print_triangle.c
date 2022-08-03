#include "main.h"
/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: value given.
 */
void print_triangle(int size)
{
	int a, b, i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (a = 1; a <= (size - i); a++)
				_putchar(32);

			for (b = 1; b <= i; b++)
				_putchar(35);

			_putchar(10);
		}
	}

	else
	{
		_putchar(10);
	}
}

