#include "main.h"
/**
 * print_rev - print a string in reverse, followed by a new line.
 * @s: string given.
 */
void print_rev(char *s)
{
	int a, b, c;

	a = 0;
	while (s[a] != '\0')
		a++;

	c = a - 1;
	for (b = 0;  b < a; b++)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar(10);
}
