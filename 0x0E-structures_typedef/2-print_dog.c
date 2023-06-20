#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog
 * @d: struct dog
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name == NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", "(nil)", d->age, d->owner);
}
else if (d->owner == NULL)
{
printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
}
else
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
}

