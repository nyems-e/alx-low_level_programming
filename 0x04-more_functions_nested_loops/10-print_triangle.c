#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size:size of  triangle
 * Return:nothing
 */
void print_triangle(int size)
{
int i = 0;
int j = 0;
int ref = size - 1;
if (size <= 0)
{
_putchar('\n');
}
while (i < size)
{
while (j < size)
{
if (j < ref)
{
_putchar(' ');
}
else
{
_putchar('#');
}
j++;
}
_putchar('\n');
i++;
j = 0;
ref--;
}
}
