#include "main.h"

/**
 * is_palindrome- check if word is a palinfrome
 * @s: string to check
 * Return: int
 */
int is_palindrome(char *s)
{
int length = _strlen_recursion(s);
int start = 0;
int end = length - 1;
return (is_palindrome_check(s, start, end));
}

/**
 * is_palindrome_check- check for palindrome
 * @s: s
 * @start: start
 * @end: end
 * Return: int
 */
int is_palindrome_check(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}
return (is_palindrome_check(s, start + 1, end - 1));
}


/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */
int _strlen_recursion(char *s)
{
if (*s > '\0')
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
