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
return (NULL);
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
if (dog_ptr->name == NULL || dog_ptr->owner == NULL)
{
free(dog_ptr->name);
free(dog_ptr->owner);
free(dog_ptr);
return (NULL);
}
_strcpy(dog_ptr->name, name);
_strcpy(dog_ptr->owner, owner);
dog_ptr->age = age;
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
/**
 * _strcpy - copy string
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i = 0;
char *temp;
length = string_len(src);
temp = dest;
while (i <= length)
{
if (i == length)
{
*dest = '\0';
i++;
}
else
{
*dest = *src;
dest++;
src++;
i++;
}
}
return (temp);
}


