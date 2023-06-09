#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main- main
 * @argc: arg count
 * @argv: arg vector
 * Return: int
 */
int main(int argc, char *argv[])
{
char *e_String = "Error\n";
int numA = 0;
int numB = 0;
int i;
int result;
if (argc != 3)
{
for (i = 0; e_String[i] != '\0'; i++)
{
_putchar(e_String[i]);
}
return (1);
}
numA = atoi(argv[1]);
numB = atoi(argv[2]);
result = numA *numB;
printf("%d\n", result);
return (0);
}


/**
 * printNumber- print number using putchar
 * @num: number
 * Return: void
 */
void printNumber(int num)
{
int rev_Num = 0;
if (num == 0)
{
_putchar('0');
}
if (num < 0)
{
_putchar('-');
num = -num;
}
while (num > 0)
{
rev_Num = rev_Num * 10 + (num % 10);
num = num / 10;
}
while (rev_Num > 0)
{
_putchar('0' + (rev_Num % 10));
num = num / 10;
}
}

