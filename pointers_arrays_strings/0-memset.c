#include "main.h"
/**
 * _memset - replace n bytes for a character given in an array
 * @s: string given or array.
 * @b: character replacement.
 * @n: amount of replacements set in the array given.
 *
 * Return: string or array modified.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
