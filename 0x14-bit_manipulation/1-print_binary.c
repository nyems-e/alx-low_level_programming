#include "main.h"

/**
 * print_binary - print binary
 * @n: integer to  be converted
 */
void print_binary(unsigned long int n)
{
	int bit_size;
	int bin_num = 0;

	bit_size = sizeof(unsigned long int) * 8;
	bit_size--;
	while (bin_num == 0)
	{
		bin_num = (n >> bit_size) & 1;
		bit_size--;
	}
	while (bit_size >= 0)
	{
		bin_num = (n >> bit_size) & 1;
		_putchar(bin_num + '0');
		bit_size--;
	}
}
