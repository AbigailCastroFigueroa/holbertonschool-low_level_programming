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
	int i, a = 0;

	while (needle[a])
		a++;
	
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != a)
			haystack ++;
		else
			return (haystack);
	}
	return (0);
}
