#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: first argument given.
 * @b: second argument given.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
