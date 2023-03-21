#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_ptr;
char *name_loc;
char *owner_loc;
int len_name;
int len_owner;
len_name = string_len(name);
len_owner = string_len(owner);

dog_ptr = malloc(sizeof(dog_t));
if (dog_ptr == NULL)
{
return (NULL);
}
name_loc = malloc(sizeof(char) * len_name);
if (name_loc  == NULL)
{
free(dog_ptr);
return (NULL);
}
owner_loc = malloc(sizeof(char) * len_owner);
if (owner_loc == NULL)
{
free(dog_ptr);
free(name_loc);
return (NULL);
}
name_loc = name;
owner_loc = owner;
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

