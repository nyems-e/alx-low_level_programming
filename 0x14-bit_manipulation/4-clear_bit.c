#include "main.h"

/**
 * clear_bit - clear bit at set index
 * @n: pointer to number
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
	}
	return (1);
}

