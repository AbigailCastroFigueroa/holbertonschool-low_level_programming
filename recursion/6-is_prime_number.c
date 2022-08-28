#include "main.h"
/**
 * check_prime - evaluate if a number has a prime number
 * @x: recursive variable.
 * @n: value given.
 *
 * Return: the result after checking the number
 */
int check_prime(int x, int n)
{
	if (x == n - 1)
	{
		return (1);
	}
	else if (n % x == 0)
	{
		return (0);
	}
	if (n % x != 0)
		return (check_prime(x + 1, n));
	return (0);
}
/**
 * is_prime_number - let us know if a given number is prime or not
 * @n: given number
 *
 * Return: 1 if it's prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(x, n));
}
