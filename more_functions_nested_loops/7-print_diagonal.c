#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 *@n: value given.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
		for (j = 0; j < i; j++)
			_putchar(32);
		
		_putchar(92);
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
