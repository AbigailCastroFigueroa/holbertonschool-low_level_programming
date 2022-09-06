#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function that duplicates a string.
 * @str: string given.
 *
 * Return: duplicated string if sucess, NULL if it fails.
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = (char *) malloc(strlen(str) + 1);
	if (ptr == 0)
	{
		return (NULL);
	}

	if (ptr != 0)
	{
		strcpy(ptr, str);
	}
	return (ptr);
}
