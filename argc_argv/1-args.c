#include <stdio.h>
/**
 * main - prints how many arguments passed into it.
 * @argc: count arguments.
 * @argv: array of arguments.
 *
 * Return: 0.
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
		argv[i]++;
	}
	printf("%d\n", i);
	return (0);
}
