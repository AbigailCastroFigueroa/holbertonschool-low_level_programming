#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print a struct dog.
 * @d: struct variable
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		exit(1);
	}
	if (d->name == NULL)
	{
		printf("nil");
	}
	if (d->age == 0)
	{
		printf("nil");
	}
	if (d->owner == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}


