#include "main.h"

/**
 * _strcat - concatenate string
 * @dest: dest pointer
 * @src: src pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int length = 0;
int i;
char *temp;
length = string_len(dest);
temp = dest;
for (i = 0; src[i] != '\0'; i++)
{
dest[length] = src[i];
length++;
}
dest[length] = '\0';
return (temp);
}

/**
 * string_len - length of a string
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
