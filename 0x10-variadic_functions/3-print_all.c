#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all- print anything
 * @format: format of arguments
 */

void print_all(const char * const format, ...)
{
va_list args;
int i;
int j;
type_spec spec_grp[5] = {{"c", print_char}, {"i", print_int}, {"f", print_float}, {"s", print_string}, {NULL, NULL}};
i = 0;
j = 0;
va_start(args, format);
while (format[i] != '\0') 
{
j = 0;
while (spec_grp[j].specifier != NULL)
{
if (format[i] == *(spec_grp[j].specifier))
{
spec_grp[j].fun(args);
}
j++;
}
if (format[i + 1] != '\0')
{
printf(", ");
}
i++;
}
va_end(args);
printf("\n");
}


/**
 * print_char- print a character
 * @args: va_list type
 * Return Nothing
 */
void print_char(va_list args)
{
printf("%c", (char)va_arg(args, int));
}


/**
* print_int- print an integer
* @args: va_list type
* Return Nothing
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float- print a float
 * @args: va_list type
 * Return Nothing
 */
void print_float(va_list args)
{
printf("%f", (float)va_arg(args, double));
}

/**
 * print_string- print a string
 * @args: va_list type
 * Return Nothing
 */
void print_string(va_list args)
{
printf("%s", va_arg(args, char *));
}
