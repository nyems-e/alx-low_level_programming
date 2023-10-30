#include "main.h"

/**
 * flip_bits - flip bits
 * @n: number to be flipped
 * @m: result of flip
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned long int b;

	i = 0;
	b = n ^ m;
	while (b > 0)
	{
		i += (b & 1);
		b >>= 1;
	}
	return (i);
}
