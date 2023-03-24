#include <stdio.h>
#include "varaidic functions"
#include <stdarg.h>
/**
 * print_number - print numbers
 * @separator: comma
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int i = 0;

va_start(ap, n);
for (i = 0; i < n; i++)
{
if (seperator == NULL)
{
printf("%d ", va_arg(ap, int));
}
else
{
printf("%d%s ", va_arg(ap, int), separator);
}
va_end(ap);
_putchar('\n');
}
}
