#include "main.h"

/**
 * _print_rev_recursion - reverse string
 * @s: string to reverse
 * Return: nothing
 */
void _print_rev_recursion(char *S)
{
if (*s > '\0')
{
_print_rev_recursion(s + 1);
_putchar(*S);
}
}
