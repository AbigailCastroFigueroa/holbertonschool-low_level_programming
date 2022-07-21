#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
{
	if (i != 113 && i != 101)
	{
	putchar(i);
	}
}
	putchar(10);
return (0);
}
