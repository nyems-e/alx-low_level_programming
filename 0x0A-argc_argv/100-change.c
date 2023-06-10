#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * min_change- number of coins for an amount of change
 * @cents: amount of change needed
 * Return: int
 */
int min_change(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int numCoins = sizeof(coins) / sizeof(coins[0]);
int count = 0;
int i;
for (i = 0; i < numCoins; i++)
{
count  = count + cents / coins[i];
cents = cents % coins[i];
}
return (count);
}

/**
 * main- main
 * @argc: argc
 * @argv: argv
 * Return: int
 */
int main(int argc, char *argv[])
{
int cents;
int minChange;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents <= 0)
{
printf("0\n");
}
else
{
minChange = min_change(cents);
printf("%d\n", minChange);
}
return (0);
}

