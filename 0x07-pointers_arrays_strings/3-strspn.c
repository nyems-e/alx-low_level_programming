#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: intial segment
 * @accept: bytes to compare to
 * Return: number of common bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int acc = 0;
int s_len = 0;
int accept_len = 0;
s_len = string_len(s);
accept_len = string_len(accept);
while (s_len)
{
while (accept_len)
{
if (s[s_len] == accept[accept_len])
{
acc++;
}
accept_len--;
}
s_len--;
accept_len = string_len(accept);
}
return (acc);
}

/**
 * string_len - length of string
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
