#include "main.h"

/**
 * is_prime_number- checking for prime numbers
 * @n: number to be checked
 * Return: int
 */
int is_prime_number(int n)
{
int divisor = n - 1;
return (is_prime_search(n, divisor));
}

/**
 * is_prime_search-search for any factors
 * @n: number to be checked
 * @divisor: divisor
 * Return: int
 */
int is_prime_search(int n, int divisor)
{
if (n <= 1)
{
return (0);
}
if (divisor == 1)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (is_prime_search(n, divisor - 1));
}

