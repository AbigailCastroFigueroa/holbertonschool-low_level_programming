#include "main.h"
/**
 * _puts - print string to stdout.
 * @str: string given.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
