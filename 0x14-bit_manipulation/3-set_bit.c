#include "main.h"

/**
 * set_bit- set value at a given index
 * @n: number to be modified
 * @index: index
 * Return: 1 if it worked 0r -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
*n = (*n | (1 << index));
return (1);
}
