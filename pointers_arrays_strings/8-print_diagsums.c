#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum values in an array diagonally.
 * @a: array given.
 * @size: array size.
 */
void print_diagsums(int *a, int size)
{
	int x, add1 = 0, add2 = 0;

	for (x = 0; x < size; x++)
	{
		add1 = add1 + a[(size + 1) * x];
		add2 = add2 + a[(size - 1) * (x + 1)];
	}
	printf("%d, %d\n", add1, add2);
}
