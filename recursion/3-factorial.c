#include "main.h"
/**
 * factorial - return the factorial of a given number.
 * @n: given number.
 *
 * Return: the factorial value of the given number in integers.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
