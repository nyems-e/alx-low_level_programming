#include "main.h"

/**
 * _strcmp-compare strings
 * @s1: pointer
 * @s2: pointer
 * Return: negative int(s1<s2), positive int(s1>s2), zero(s1=s2)
 */

int _strcmp(char *s1, char *s2)
{
unsigned int st;
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
st = *s1 - *s2;
return (st);
}
