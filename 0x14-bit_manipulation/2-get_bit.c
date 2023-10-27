#include "main.h"

/**
 * get_bit - get bit at an index
 * @n: number to be indexed
 * @index: index
 * Return: bit value at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	else
		return ((n >> index) & 1);
}
