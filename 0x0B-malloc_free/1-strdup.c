#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer 
 *@str: original string
 *Return: char
 */
char *_strdup(char *str)
{

if(str == NULL)
{
return (NULL);
}
	
char *new_str = malloc(sizeof(char) * string_len(str));

if(new_str == NULL)
{
return (NULL);
}
_memcpy(new_str, str, string_len(str));
return (new_str);
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
