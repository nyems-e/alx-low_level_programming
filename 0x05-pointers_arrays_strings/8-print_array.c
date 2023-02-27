#include "main.h"

/**
 * print_array - print n elements of an array
 * @a: pointer to array
 * @n: number of elements to print from array
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
print(a[i++]);
if (i < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}

/**
 * print - print integer
 * @a: intger
 */
void print(int a)
{
if (a < 0)
{
_putchar('-');
a = -a;
}
if (a / 10)
{
print(a / 10);
}
_putchar('0' + (a % 10));
}
