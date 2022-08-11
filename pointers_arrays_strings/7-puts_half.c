#include "main.h"
/**
 * puts_half - print half of a string followed by a new line
 * @str: string given.
 */
void puts_half(char *str)
{
	int a, b, n;

	a = 0;
	while (str[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		n = a  / 2;
	_putchar(str[b + n]);
	}
	_putchar(10);
}
