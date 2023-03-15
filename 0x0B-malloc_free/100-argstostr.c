#include "main.h"
#include <stdlib.h>

/**
 * argtostr - concatenate arguments of program
 * @ac: number of arguments
 * @av: arrys of arguments
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
int len = 0;
char *new_str;
char *m_arg;
int i;
int str_index = 0;
if (ac == 0 || av == NULL)
{
return (NULL);
}


len = _strlen(av,ac);
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
{
return (NULL);
}


for (i = 0; i < ac; i++)
{
m_arg  = av[i];
while (*m_arg)
{
new_str[str_index++] = *m_arg++;
}
new_str[str_index++] = '\n';
}
new_str[str_index] = '\0';
return (new_str);
}



/**
 * _strlen - total length of strings in array
 *
 * @s: array of strings
 * @al: length of array
 * Return: length of string
 */
int _strlen(char **s,int al)
{
int len = 0;
int i;
char *f_arg;
for (i = 0; i < al; i++)
{
f_arg = s[i];
while (*f_arg)
{
len++;
f_arg++;
}
len++;
}
return (len);
}

