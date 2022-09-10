#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - merge two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes of the second string to add to first string.
 *
 * Return: The resulting string after merge.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i1, i2, iptr, size0 = 0, size1 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i1 = 0; s1[i1] != 0; i1++)
		size0++;
	for (i2 = 0; s2[i2] != 0; i2++)
		size1++;

	ptr = malloc((size0 + n + 1) * sizeof(char));

	if (size1 <= n)
		n = size1;

	if (ptr == NULL)
		return (NULL);
	for (iptr = 0; iptr < size0 + n; iptr++)
	{
		if (*s1)
		{
			ptr[iptr] = *s1;
			s1++;
		}
		else
		{
		ptr[iptr] = *s2;
		s2++;
		}
	}
	ptr[iptr] = 0;
	return (ptr);
}

