#include <stdio.h>

/**
 * main- print
 * Return: 0
 */
int main(void)
{
int i = 0;
int j = 1;
int count[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
while (i <= 8)
{
while (j <= 9)
{
putchar(i + '0');
putchar(j  + '0');
if (i != 8)
{
putchar(',');
putchar(' ');
}
j++;
}
j = count[++i];
}
putchar('\n');
return (0);
}
