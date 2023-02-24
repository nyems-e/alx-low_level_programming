#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers- print
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (i != 50 && i != 52)
{
putchar(i);
}
i++;
}
putchar('\n');
}

