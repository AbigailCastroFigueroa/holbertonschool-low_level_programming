#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string given.
 * @c: character to be located in the string.
 *
 * Return: string modified after the character is located.
 */
char *_strchr(char *s, char c)
{
	int i, x;

	for (i = 0; s[i] != 0; ) /*string lenght*/
		i++;

	for (x = 0; x <= i; x++) /*loop to run through the string*/
	{
		if (c == s[x]) /*if c is equal to the value in x pos*/
		{
			s += x; /* a shorter way to say s = s + x */
			return (s);
		}
	}
	return (0);
}

