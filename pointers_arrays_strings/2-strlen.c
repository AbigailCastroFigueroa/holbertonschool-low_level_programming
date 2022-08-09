#include "main.h"
/**
 * _strlen - return the lenght of the string.
 *@s: string given.
 *
 * Return: 0.
 */
int _strlen(char *s)
{
	int letters;

	for (letters = 0; s[letters] != 0; letters++);

	return (letters);
}
