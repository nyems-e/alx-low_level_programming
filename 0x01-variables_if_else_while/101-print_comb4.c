#include <stdio.h>

/**
 * main- print
 * Return: 0
 */
int main(void)
{
int i = 1;
int j = 2;
int k = 0;
int count[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
while (k <= 7)
{
while (i <= 8)
{
while (j <= 9)
{
putchar(k + '0');
putchar(i + '0');
putchar(j  + '0');
if (k != 7 || i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
j++;
}
j = count[++i];
}
k++;
i = k + 1;
j = 2 + k;
}
putchar('\n');
return (0);
}
