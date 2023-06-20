#include "dog.h"
#include <stdlib.h>

/**
 * new_dog- creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: NULL or dog_ *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_ptr;
int len_name;
int len_owner;
if (name == NULL || owner == NULL)
{
return(NULL);
}
len_name = string_len(name);
len_owner = string_len(owner);
dog_ptr = malloc(sizeof(dog_t));
if (dog_ptr == NULL)
{
return (NULL);
}
dog_ptr->name = malloc(sizeof(char) * len_name);
dog_ptr->owner = malloc(sizeof(char) * len_owner);
if (dog_ptr->name == NULL || dog_ptr->owner == NULL)i
{
free(dog_ptr->name);
free(dog_ptr->owner);
free(dog_ptr);
return (NULL);
}
dog_ptr->name = name;
dog_ptr->age = age;
dog_ptr->owner = owner;
return (dog_ptr);
}

/**
 * string_len- length
 * @s: string
 * Return: length
 */
int string_len(char *s)
{
int length = 0;
while (s[length] > '\0')
{
length++;
}
return (length);
}

