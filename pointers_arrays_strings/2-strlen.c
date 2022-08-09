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

	letters = 0;
	while (s[letters] != 0)
		letters++;
	return (letters);
}
