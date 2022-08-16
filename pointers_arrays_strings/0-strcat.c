#include "main.h"
/**
 * _strcat - add a string at the end of the first one.
 * @dest: main string.
 * @src: string appended to dest.
 *
 * Return: The merge of both strings as one.
 */
char *_strcat(char *dest, char *src)
{
	int i, z;

	for (i = 0; dest[i] != 0; )
		i++;

	for (z = 0; src[z] != 0; z++)
	{
		dest[i] = src[z];
		i++;
	}
	return (dest);
}
