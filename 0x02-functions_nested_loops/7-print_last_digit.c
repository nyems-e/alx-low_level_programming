#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: digit
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
int rem = 0;
if (n < 0)
{
rem = n % 10;
_putchar('0' + (-rem));
return (-rem);
}
else
{
rem = n % 10;
_putchar('0' + rem);
return (rem);
}
}
