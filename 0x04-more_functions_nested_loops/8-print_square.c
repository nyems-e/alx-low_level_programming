#include "main.h"

/**
 * print_square- print square
 * @size: size
 */
void print_square(int size)
{
int i = 0;
int j = 0;
if (size <= 0)
{
_putchar('\n');
}
while (i < size)
{
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
j = 0;
}
}
