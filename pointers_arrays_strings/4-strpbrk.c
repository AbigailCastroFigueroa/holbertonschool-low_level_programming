#include "main.h"
/**
 * _strpbrk - search for matching bytes on a string.
 * @s: given string.
 * @accept: characters to match.
 *
 * Return: string modified.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != 0; i++)
	{
	for (x = 0; accept[x] != 0; x++)
	{
		if (*s == accept[x])
		{
			return (s);
		}
	accept = accept + x;
	s++;
	}
	}
	return (0);
}
