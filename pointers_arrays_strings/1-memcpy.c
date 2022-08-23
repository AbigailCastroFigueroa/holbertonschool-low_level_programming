#include "main.h"
/**
 * _memcpy - copies a memory area to another memory area.
 * @dest: where the selected memory area is gonna be copied.
 * @src: area to copy.
 * @n: determine how much bytes are gonna be copied.
 *
 * Return: memory copied.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, b;

	for (i = 0; dest[i] != 0; )
		i++;

	for (b = 0; b < n; b++)
	{
		dest[i] = src[b];
		i++;
	}
	return (dest);
}

