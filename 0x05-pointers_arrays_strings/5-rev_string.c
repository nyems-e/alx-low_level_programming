#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer
 */
void rev_string(char *s)
{
int length = 0;
int i = 0;
char *st1;
char *st2;
char temp;
length = string_len(s);
st1 = s;
st2 = s;
for (i  = 0; i < length - 1; i++)
{
st2++;
}
for (i = 0; i < length / 2; i++)
{
temp = *st2;
*st2 = *st1;
*st1 = temp;
st1++;
st2--;
}
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
