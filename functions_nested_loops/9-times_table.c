#include "main.h"
/**
 * times_table - prints an n times table.
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			_putchar(44);
			_putchar(32);

			c = a * b;

			if (c <= 9)
			_putchar(32);
			else
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar(10);
	}
}
