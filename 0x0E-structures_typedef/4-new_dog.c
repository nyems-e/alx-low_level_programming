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
dog_ptr = malloc(sizeof(dog_t));
if (dog_ptr == NULL)
{
return (NULL);
}
dog_ptr->name = name;
dog_ptr->age = age;
dog_ptr->owner = owner;
return (dog_ptr);
}
