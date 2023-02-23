#include <stdio.h>

/*
 * jack_bauer -  Print every minute of the day
 *
 * return 0
 */
void jack_bauer(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
while (l <= 2)
{
while (k <= 3)
{
while (j <= 5)
{
while (i <= 9)
{
putchar(l + '0');
putchar(k + '0');
putchar(':');
putchar(j + '0');
putchar(i + '0');
putchar('\n');
i++;
}
i = 0;
j++;
}
j = 0;
k++;
}
k = 0;
l++;
}
}

int main(void)
{
jack_bauer();
return 0;
}
