#include "main.h"

/**
 * print_line- print line
 * @n: number of times
 */
void print_line(int n)
{
int i = 0;
if (n < 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
