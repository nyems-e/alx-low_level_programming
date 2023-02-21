#include "main.h"
/**
 *_islower - checks for lowercase letters
 *
 * @c: lower case character to be checked
 *
 * Return: 0 for success
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
