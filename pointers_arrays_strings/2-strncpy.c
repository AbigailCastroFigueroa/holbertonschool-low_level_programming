#include "main.h"
/**
 * _strncpy - function copy a string until n characters.
 * @dest: main string.
 * @src: copy of the string.
 * @n: tokens added to the copy string.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, a = 0;

	while (src[a] != 0)
		a++;

	for (i = 0; i < n && src[i] != 0; )
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
