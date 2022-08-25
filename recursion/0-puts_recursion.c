#include "main.h"
/**
 * _puts_recursion - print a string using only recursion
 * @s: string given.
 *
 * Return: string given.
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar(10);

	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
