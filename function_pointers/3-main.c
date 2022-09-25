#include "3-calc.h"

/**
 * main - check the code
 * @argc: amount of arguments pass through main
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	ptr = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!ptr)
	{
		printf("Error\n");
		exit (99);
	}
	printf("%d\n", ptr(a, b));
	return (0);
}
