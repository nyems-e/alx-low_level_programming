#include "main.h"
/**
 * get_bit- get value of a bit at a given index
 * @n: number to index
 * @index: index
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if (((1 << index) & n) == 0)
	{
		return (0);
	}
	return (1);
}
