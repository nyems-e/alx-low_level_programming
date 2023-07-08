#include "main.h"
/**
 * get_endianness- get endianess
 * Return: endianess
 */
int get_endianness(void)
{
	char *addr;
	int number = 1;

	addr = (char *)&number; /* gets first byte */
	if (*addr == 1)
	{
		return (1); /*little endian*/
	}
	return (0); /* big endian */
}
