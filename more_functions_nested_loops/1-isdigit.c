#include "main.h"
/**
 * _isdigit - check for digits values.
 * @c: value given to check or evaluate.
 *
 * Return: 1 if is a number, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
