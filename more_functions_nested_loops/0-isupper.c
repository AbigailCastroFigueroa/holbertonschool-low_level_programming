#include "main.h"
/**
 * _isupper - check for uppercase characters.
 * @c: variable to evaluate.
 *
 * Return: 1 if is upper, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}

