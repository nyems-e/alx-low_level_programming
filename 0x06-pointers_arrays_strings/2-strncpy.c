#include "main.h"

/**
 * _strncpy- copies string
 * @dest: dest
 * @n: number
 * @src: src
 * Return: pointer
 */

char *_strncpy(char *dest, char *src,int n)
{
char *temp;
int i;
i = 0;
temp = dest;
while (*src != '\0' && (unsigned int)n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (temp);
}
