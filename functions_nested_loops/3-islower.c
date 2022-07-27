#include "main.h"
/**
 * _islower - check for lowercase characters.
 * @c: character check.
 *
 * Return: 0
 */
int _islower(int c)
{
	int c;

	if (c > 'a' && c < 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}
	_putchar('\n');
	return (0);
}
