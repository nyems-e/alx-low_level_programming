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
int index;
tab = malloc(sizeof(char) * size);
if (tab == NULL)
{
return (NULL);
}
for (index = 0; index < size; index++)
{
tab[index] = c;
}
return (tab);
}

