#include "main.h"
/**
 * _strcpy - copies a string pointed including the null
 * @src: original string.
 * @dest: copied string.
 *
 * Return: copied string.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int i;

	while (src[a] != 0)
		a++;

	for (i = 0; i < a && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < a; i++)
	{
		dest[i] = 0;
	}
	return (dest);
}
