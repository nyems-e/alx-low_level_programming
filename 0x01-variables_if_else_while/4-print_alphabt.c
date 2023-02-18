#include <stdio.h>

/**
 * main- alpha
 * Return: 0
 */
int main(void)
{
int i = 97;
while (i <= 'z')
{
if (i != 'q' && i != 'e')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
