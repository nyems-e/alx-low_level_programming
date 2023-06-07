#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "lll";
    char *f = "l";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    
    return (0);
}

