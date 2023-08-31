#include "main.h"

/**
 * flip_bits- number of bits to flip to get from one number to the other
 * @n: number to be flipped
 * @m: number to flip to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int num_bits;
num_bits = n ^ m; /* getting the bits that are different */
while (num_bits > 0)
{
	count += (num_bits & 1); /*counting number of different bits */
	num_bits >>= 1; 
}
return (count);
}


