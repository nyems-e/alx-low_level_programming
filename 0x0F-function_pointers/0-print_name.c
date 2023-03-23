#include <stdio.h>
#include "main.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to function
 * Return: nothing
 */
 
void print_name(char *name, void (*f)(char *))
{
while(*name)
{

f(*name);
name++;
}
}


/**
 * print_char - print character
 * @name: name to print
 * Return: nothing
 */

void print_char(char *name)
{
_putchar(*name);
}


