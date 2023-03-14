#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer 
 *@str: original string
 *Return: char
 */
char *_strdup(char *str)
{
char *new_str = malloc(sizeof(str));
new_str = str;
if(str == NULL || new_str == NULL)
{
return (NULL);
}
return (new_str);
}

