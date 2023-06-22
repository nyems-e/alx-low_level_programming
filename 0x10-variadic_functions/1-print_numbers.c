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
printf("%d", va_arg(ap, int));
if (separator != NULL && i != n-1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}

