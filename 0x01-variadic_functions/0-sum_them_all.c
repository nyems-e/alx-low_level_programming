#include <stdarg.h>

/**
 * sum_them_all - return sum of all parameters
 * @n: number of arguments passed
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i = 0;
int sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
