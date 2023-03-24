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
f(name);
}
