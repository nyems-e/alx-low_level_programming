#include "main.h"
/**
 * _memcpy- copy memory
 * @dest:dest pointer
 * @src: src pointer
 * @n: number limit
 * Return: temp
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
char *temp;
temp = dest;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (temp);
}

