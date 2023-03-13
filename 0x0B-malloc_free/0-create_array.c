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
char *hold = "failed to allocate memory";
tab = malloc(sizeof(char) * size);
if (tab == NULL)
{
while (*hold)
{
_putchar(*hold++);
}
}
else{
for (index = 0; index < size; index++)
{
tab[index] = c;
}
}
return (tab);
}
