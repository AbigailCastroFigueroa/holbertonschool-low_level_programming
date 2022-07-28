#include "main.h"
/**
 * _isalpha - check for alphabetic characters.
 * @c: character arguments.
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
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
