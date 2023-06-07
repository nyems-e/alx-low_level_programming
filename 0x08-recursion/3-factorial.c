#include "main.h"

/**
 * factorial -  factorial of a givem number
 * @n: given number
 * Return: factorial of n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

