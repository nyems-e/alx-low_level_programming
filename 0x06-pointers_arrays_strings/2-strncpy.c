#include "main.h"

/**
 * _strncpy- copies string
 * @dest: dest
 * @n: number
 * @src: src
 * Return: pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
char *temp;
int i;
i = 0;
temp = dest;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
while (i < n)
{
*dest = '\0';
i++;
}
return (temp);
}
