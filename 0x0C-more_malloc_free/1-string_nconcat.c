#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - cocatenates two strings
 * @s1:char *
 * @s2:char *
 * @n: int
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1;
unsigned int len2;
char *new_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{ 
s2 = "";
}
len1 = string_len(s1);
len2 = string_len(s2);
if (n > len2)
{
n = len2;
}

new_str = malloc(sizeof(char) * (len1 + n + 1));
if (new_str == NULL)
{
return (NULL);
}
_memcpy(new_str, s1, len1);
_memcpy(new_str + len1, s2, n);

new_str[len1 + n] = '\0';
return (new_str);
}


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

/**
 * string_len - length of string
 *
 * @s: string
 * Return: length of string
 */
int string_len(char *s)
{
int i = 0;
while (s[i] > '\0')
{
i++;
}
return (i);
}
