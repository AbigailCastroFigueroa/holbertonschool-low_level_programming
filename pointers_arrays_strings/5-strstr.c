#include "main.h"
/**
 * _strstr - find occurence in a substring.
 * @haystack: string given
 * @needle: substring given
 *
 * Return: occurence.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; haystack[i] != 0; i++)
	{
		for (a = 0; needle[a] != 0; a++)
		{
			if (needle[a] == haystack[i])
			{
				return (needle);
			}
		}
	}
	return (0);
}
