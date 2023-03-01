#include "main.h"

/**
 * _strncat- concatenate
 * @dest: pointer
 * @src: pointer
 * @n: max number
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int length = 0;
int i;
char *temp;
length = string_len(dest);
temp = dest;

while (src[i] > '\0')
{
if (i <= n)
{
dest[length] = src[i];
length++;
}
i++;
}
dest[length] = '\0';
return (temp);
}

/**
 * string_len- length
 * @s: string
 * Return: length
 */
int string_len(char *s)
{
int length = 0;
while (s[length] > '\0')
{
length++;
}
return (length);
}

