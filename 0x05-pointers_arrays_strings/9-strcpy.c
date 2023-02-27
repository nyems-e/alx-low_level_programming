#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination pointer
 * @src: source pointer
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
int i = 0;
char *temp;
length = string_len(src);
temp = dest;
while (i <= length)
{
if (i == length)
{
*dest = '\0';
i++;
}
else
{
*dest = *src;
dest++;
src++;
i++;
}
}
return (temp);
}

/**
 * string_len- length of string
 * @s: pointer
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
