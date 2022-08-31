#include <stdio.h>
/**
 * main - prints the name of the running program.
 * @argc: arguments count.
 * @argv: array of arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
