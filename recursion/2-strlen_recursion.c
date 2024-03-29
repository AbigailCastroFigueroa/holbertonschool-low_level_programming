#include "main.h"
/**
 * _strlen_recursion - return the length of a given string.
 * @s: string given.
 *
 * Return: the string length as an integer value.
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
		return (1 + _strlen_recursion(s + 1));

	else
		return (0);
}
