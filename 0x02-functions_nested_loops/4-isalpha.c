#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for an an alphabet
 *
 * @c: letter to be checked
 *
 * Return: 0 for success
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
