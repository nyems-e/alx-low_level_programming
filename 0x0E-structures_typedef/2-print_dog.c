#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
