#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: str
 * @s2: str
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
int len_1;
int len_2;
char *concat_s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len_1 = string_len(s1);
len_2 = string_len(s2);
concat_s = malloc(len_1 + len_2 + 1);
if (concat_s == NULL)
{
return (NULL);
}
_memcpy(concat_s, s1, len_1);
_memcpy(concat_s + len1, s2,, len2 + 1);
r:wq
eturn (concat_s);
}

/**
 * _strlen - length of string
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
