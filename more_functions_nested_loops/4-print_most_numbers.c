#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 to 9, omiting just 2 and 4.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar(10);
}
