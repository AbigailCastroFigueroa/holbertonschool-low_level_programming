#include "main.h"

/**
 * print_alphabet - prints the alphabet in a line, no spaces between letters.
 *
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
