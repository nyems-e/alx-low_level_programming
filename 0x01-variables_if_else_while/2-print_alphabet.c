#include <stdio.h>

/**
 * main- lower case
 * Return: 0 success
 */
int main(void)
{
int i = 0;
i = 'a';
while (i <= 'z')
{
putchar(i++);
}
putchar('\n');
return (0);
}
