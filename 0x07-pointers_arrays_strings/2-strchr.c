#include "main.h"
/**
 * _strchr- find char
 * @s: pointer
 * @c: char to find
 * Return: point to char found
 */
char *_strchr(char *s, char c)
{
int i = 0;
int length = 0;
length = str_len(s);
while (i <= length)
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
}
return ('\0');
}

/**
 * str_len- length
 * @s: string
 * Return: i
 */
int str_len(char *s)
{
int i = 0;
while (s[i] > '\0')
{
i++;
}
return (i);
}
