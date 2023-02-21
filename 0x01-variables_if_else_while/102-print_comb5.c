#include <stdio.h>

/**
 *main- print pattern
 *Return:0
 */

int main(void)
{
int i = 1;
int j = 0;
int k = 0;
int l = 0;
int count[] = {1,2,3,4,5,6,7,8,9};
while (l <= 9)
{
while (k <= 9)
{
while (j <= 9)
{
while (i <= 9)
{
putchar(l + '0');
putchar(k + '0');
putchar(' ');
putchar(j + '0');
putchar(i + '0');
putchar(',');
putchar(' ');
i++;
}
i = 0;
j++;
}
j = 0;
i = count[++k];
}
k = 0;
j = count[++l];
}
return(0);
}
