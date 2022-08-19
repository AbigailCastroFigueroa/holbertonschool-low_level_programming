#include "main.h"
/**
 * string_toupper - turn lowercase letters to upper in a given string.
 * @*: pointer given.
 *
 * Return: letter change to upper.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}
	return (s);
}
