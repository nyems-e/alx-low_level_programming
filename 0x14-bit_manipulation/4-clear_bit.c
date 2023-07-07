#include "main.h"
/**
 * clear_bit- set a bit to 0
 * @n: pointer to number
 * @index: index
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
	return (-1);
}
*n &= ~(1 << index);
return (1);
}
