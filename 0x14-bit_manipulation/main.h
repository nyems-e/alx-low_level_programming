#ifndef BITS_H
#define BITS_H

#include <stdlib.h>
unsigned int binary_to_uint(const char *b);
unsigned int size(const char *b);
void _putchar(int charac);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
#endif
