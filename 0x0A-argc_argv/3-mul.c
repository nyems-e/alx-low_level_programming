#include "main.h"

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
numA = _atoi(argv[1]);
numB = _atoi(argv[2]);
result = numA *numB;
printNumber(result);
return (0);
}


/**
 * print_number- print number using putchar
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

/**
 * _atoi- string to integer
 * @str: string
 * Return: int
 */
int _atoi(char *str)
{
int result = 0;
int sign = 1;
int i = 0;
if (str[i] == '-')
{
sign = -1;
i++;
}
else
{
i++;
}
while (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
i++;
}
return (result *sign);
}

