#include "main.h"
#include <stdlib.h>
/**
 * strtow- split strings into words
 * @str: string to be split
 * Return: char **
 */
char **strtow(char *str)
{
int i;
int j;
int word_count;
int len_word;
char **words;
int k;
int len = _StrLen(str);
if (str == NULL || _strcmp(str,"") == 0)
{
return (NULL);
}
for (i = 0; i< len; i++)
{
if (str[i] != ' ')
{
word_count++;
while (str[i] != ' ' && str[i] != '\0')
{
i++;
}
}
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
i = 0;
j = 0;
while (i < len && j < word_count)
{
len_word = 0;
while (str[i] == ' ')
{
i++;
}
while (str[i + len_word] != ' ' && str[i + len_word] != '\0')
{
len_word++;
}
words[j] = (char *)malloc((len_word + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
{
free(words[k]);
}
free(words);
return (NULL);
}
_strncpy(words[j], str + i, len_word);
words[j][len_word] = '\0';
i = i + len_word;
j++;
}
words[word_count] = NULL;
return (words);
}
/**
 * _strncpy- copies string
 * @dest: dest
 * @n: number
 * @src: src
 * Return: pointer
 */

char *_strncpy(char *dest, char *src,int n)
{
char *temp;
temp = dest;
while (*src != '\0' && (unsigned int)n--)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (temp);
}


/**
 * _StrLen - length of string
 *
 * @s: string
 * Return: length of string
 */
int _StrLen(char *s)
{
int i = 0;
while (s[i] > '\0')
{
i++;
}
return (i);
}

/**
 * _strcmp-compare strings
 * @s1: pointer
 * @s2: pointer
 * Return: negative int(s1<s2), positive int(s1>s2), zero(s1=s2)
 */

int _strcmp(char *s1, char *s2)
{
unsigned int st;
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
st = *s1 - *s2;
return (st);
}
