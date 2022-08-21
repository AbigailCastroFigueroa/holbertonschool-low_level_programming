#include "main.h"
/**
 * cap_string - turn to upper the first letter of all the words from a string.
 * @s: string given.
 *
 * Return: modified string
 */
char *cap_string(char *s)
{
	int i, n;
	char sep[] = {32, 9, 10, 44,59, 46, 33, 63, 34, 40, 41, 123,125};

	for (i = 0; s[i] != 0; i++)
	{
		for (n = 0; n < 13; n++)
		{
		if ((i == 0 || s[i - 1] == sep[n]) && (s[i] >= 97 && s[i] <= 122))
			s[i] = s[i] - 32;
		}
	}
return (s);
}
