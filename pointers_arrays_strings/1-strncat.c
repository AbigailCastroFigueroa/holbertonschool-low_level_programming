#include "main.h"
/**
 * _strncat - merge to strings together, but only the n amount from the second.
 * @dest: main string
 * @src: string that is added to the main or first string.
 * @n: the amount of tokens added to the main string.
 *
 * Return: both string together as one.
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; *(dest + x) != 0; )
		x++;

	for (y = 0; y < n; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}
