#include "main.h"
/**
 * check_root - verifies if the number has natural root.
 * @i: number to multiply
 * @n: number given.
 *
 * Return: root number if it has one.
 */
int check_root(int i, int n)
{
	if (n == 0 || n == 1)
	return (n);

	else if (i * i == n)
		return (i);
	else if (i * i < n)
	return (check_root(i + 1, n));
	else
	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - return natural square root
 * @n: number given.
 *
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	return(check_root(i, n));
}
