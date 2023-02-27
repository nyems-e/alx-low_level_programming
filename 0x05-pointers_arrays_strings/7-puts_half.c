#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string
 */
void puts_half(char *str)
{
int i = 0;
int j = 0;
int length = 0;
int half = 0;
int half_o = 0;
length = string_len(str);
half = length / 2;
half_o = (length - 1) / 2;
while (i < length)
{
if (length % 2 == 0)
{
while (j < length / 2)
{
_putchar(str[half++]);
j++;
}
}
else
{
while (j < (length - 1) / 2)
{
_putchar(str[++half_o]);
j++;
}
}
i++;
}
_putchar('\n');
}

/**
 * string_len - string length
 * @s: pointer
 * Return: string length
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
