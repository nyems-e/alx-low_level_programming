#include "main.h"
#include <stdlib.h>
/**
 * _calloc- calloc
 * @nmemb: number of members in array to allocate memory for
 * @size: type for the members in array
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);

if (ptr != NULL)
{
_memset(ptr, 0, nmemb * size);
}
return (ptr);
}

/**
 * _memset- memeset function
 * @ptr: pointer memory location to be set
 * @value: value to store in memory
 * @num: size of memory to set
 */
void _memset(void *ptr, unsigned  int value, unsigned int num)
{
unsigned int i;
char *p;
char val;
p = (char *)ptr;
val = (unsigned char)value;
for (i = 0; i < num; ++i)
{
p[i] = val;
}
}
