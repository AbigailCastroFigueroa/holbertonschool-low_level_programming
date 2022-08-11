#include "main.h"
/**
 * puts_half - print half of a string followed by a new line
 * @str: string given.
 */
void puts_half(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
		a++;

	b = a / 2;

	if (a % 2 == 1)
		b++;

	while (str[b] != 0)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar(10);
}

