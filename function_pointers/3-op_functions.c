#include "3-calc.h"

/**
 * op_add - sum two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of both integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract value b from value a
 * @a: value of a
 * @b: value of b
 *
 * Return: the result of the substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two given integers
 * @a: first value
 * @b: second value
 *
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first value
 * @b: second value
 *
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives us the remaining of the division
 * @a: first value
 * @b: second value
 *
 * Return: remaining from the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
