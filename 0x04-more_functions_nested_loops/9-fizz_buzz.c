#include <stdio.h>
/**
 * main- print fizzbuzz
 * Return: int
 */
int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
}
else if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
i++;
if ((i - 1) != 100)
{
printf(" ");
}
}
putchar('\n');
return (0);
}
