#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements of an array followed by a new line.
 * @a: array given.
 * @n: elements inside the array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 2); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i != '\0')
	{
			printf("%d", a[i]);
	}
	printf("\n");
}
