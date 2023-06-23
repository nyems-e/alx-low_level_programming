#ifndef variadic
#define variadic
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @specifier: The operator
 * @string_form: The function associated
 */
typedef struct op
{
    char *specifier;
    void (*fun)(va_list);
} type_spec;


int sum_them_all(const unsigned int n, ...);
void _putchar(int);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);


#endif

