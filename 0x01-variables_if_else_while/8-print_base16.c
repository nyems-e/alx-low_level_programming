#include <stdio.h>

/**
 * main- print
 * Return: 0;
 */
int main(void)
{
int i = 48;
int j = 'a';
while (j <= 'f')
{
if (i <= '9')
{
putchar(i);
i++;
}
else
{
putchar(j);
j++;
}
}
putchar('\n');
return (0);
}
