#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - merge two given strings as one.
 * @s1: initial part.
 * @s2: string to merge.
 *
 * Return: merged string in case of sucess, NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
