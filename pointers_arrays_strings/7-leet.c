#include "main.h"
/**
 * leet - encode a string.
 * @s: string given.
 *
 * Return: modified token.
 */
char *leet(char *s)
{
	int i, b;
	char letters[] = {'a', 'e', 'o', 'l', 't'}; /*characters to look for*/
	char numbers[] = {'4', '3', '0', '1', '7'}; /*characters replacement*/

	for (i = 0; s[i] != 0; i++)
	{
		for (b = 0; b < 5; b++)
		{
		if (letters[b] == s[i] || (letters[b] - 32) == s[i])
			s[i] = numbers[b];
		}
	}
	return (s);
}

