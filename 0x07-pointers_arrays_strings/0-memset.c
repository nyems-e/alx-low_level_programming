#include "main.h"
/**
 * _memset- set memory
 * @s: pointer
 * @b: character
 * @n: number limit
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
char *temp;
temp = s;
while (i < n)
{
s[i] = b;
i++;
}
return (temp);
}

