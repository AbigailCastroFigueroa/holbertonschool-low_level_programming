#include "main.h"
/**
 * reverse_array - reverse an array.
 * @a: array given.
 * @n: are the elements in the array.
 */
void reverse_array(int *a, int n)
{
	int  index, *ptr, tvar, b;

	ptr = a;
	for (index = 0; index < n - 1; index++)
		ptr++;

	for (b = 0; b < n / 2; b++)
	{
		tvar = a[b], a[b] = *ptr, *ptr = tvar;
		ptr--;
	}
}
