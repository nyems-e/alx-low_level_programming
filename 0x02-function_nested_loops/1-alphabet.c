#include <stdio.h>

/**
 * print_alphabet - print alphabet in lower case
 */
void print_alphabet(void)
{
int alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
putchar('\n');
}
