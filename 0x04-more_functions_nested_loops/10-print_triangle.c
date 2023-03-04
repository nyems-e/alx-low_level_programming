#include "main.h"

/**
 * print_triangle - prints a triangle
 *@size:size of  triangle
 * Return:nothing
 */

void print_triangle(int size)
{
int ref = size;
int chck = 0;
int acc = size * size;
while (chck <= acc)
{
_putchar('\n');
if (chck >= ref && chck != acc)
{
_putchar('#');
ref--;
}
chck++;
}
}
