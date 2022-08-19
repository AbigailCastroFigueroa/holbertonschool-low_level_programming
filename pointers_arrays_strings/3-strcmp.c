#include "main.h"
/**
 * _strcmp - function that compare two given strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if both are equals, the ascii difference
 *         between the first unmatched tokens.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != s2[i]; i++)
		if (s1 != 0 || s2 != 0)
			return (s1[i] - s2[i]);
	return (0);
}
