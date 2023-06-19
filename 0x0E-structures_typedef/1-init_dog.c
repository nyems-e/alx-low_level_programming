#include "dog.h"

/**
 * init_dog - dog
 * @d: pointer to struc dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
