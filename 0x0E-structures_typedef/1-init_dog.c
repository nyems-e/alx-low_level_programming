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
if (_strcmp(name,"") != 0 && _strcmp(owner,"") != 0 && age != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

/**
 * _strcmp-compare strings
 * @s1: pointer
 * @s2: pointer
 * Return: negative int(s1<s2), positive int(s1>s2), zero(s1=s2)
 */

int _strcmp(char *s1, char *s2)
{
unsigned int st;
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
st = *s1 - *s2;
return (st);
}

