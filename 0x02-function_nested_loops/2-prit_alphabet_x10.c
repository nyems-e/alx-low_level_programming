#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
int count = 1;
int i = 1;
while (count <= 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
count++;
}
}
