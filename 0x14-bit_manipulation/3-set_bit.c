#include "main.h"

/**
 * set_bit - sets value of a bit of integer to 1
 * @n: pointer to number
 * @index: index
 * Return: 1 0r -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
	}
	return (1);
}
