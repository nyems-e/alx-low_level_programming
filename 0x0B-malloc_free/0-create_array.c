#include "main.h"
#include <stdlib.h>
/**
 * create_array - array of chars
 * @size:int
 * @c: char
 * Return: char *
 */

char *create_array(unsigned int size, char c)
{
char  *tab;
unsigned int index;

tab = malloc(sizeof(char) * size);
if (size == 0 || tab == NULL)
{
return (NULL);
}
else
{
for (index = 0; index < size; index++)
{
tab[index] = c;
}
}
return (tab);
}
