#ifndef DOG_H
#define DOG_H
/**
 * struct dog - it let you know the dog name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: let you know the dog age, name and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
#endif
