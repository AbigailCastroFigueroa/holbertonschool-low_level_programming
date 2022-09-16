#include "dog.h"
/**
 * init_dog - function that initialize a of a variable type struct
 * @d: pointer to the struct
 * @name: variable containing a dog's name
 * @age: variable containing an dog's age
 * @owner: variable containing the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
