#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_number - print numbers
 * @separator: comma
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
{
if (separator == NULL || i == n-1)
{
printf("%d ", va_arg(ap, int));
}
else
{
printf("%d%s ", va_arg(ap, int), separator);
}
}
va_end(ap);
_putchar('\n');
}
