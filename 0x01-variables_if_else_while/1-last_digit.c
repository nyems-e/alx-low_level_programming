#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- print
 * Return: success 0
 */
int main(void)
{
int n;
int last_d = 0;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_d = n % 10;
printf("Last digit of %d is %d", n, last_d);
if (last_d > 5)
{
printf(" and is greater than 5\n");
}
if (last_d == 0)
{
printf(" and is 0\n");
}
if (last_d < 6 && last_d != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
