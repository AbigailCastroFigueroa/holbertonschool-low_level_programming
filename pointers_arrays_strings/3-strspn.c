#include "main.h"
/**
 * _strspn - gets the lenght of a substring.
 * @s: string given.
 * @accept: substring given.
 *
 * Return: the number of bytes in s that consist with the
 * substring given.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, a, count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		for (a = 0; accept[a] != 0; a++)
		{
			if (s[i] == accept[a])
			{
				count++;
			}
		}
		if (s[i] == 32)
			break;
	}
	return (count);
}

