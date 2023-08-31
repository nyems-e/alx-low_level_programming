#include "main.h"
/**
 * get_endianness- get endianess
 * Return: endianess
 */
int get_endianness(void)
{
	char *addr;
	int number = 1;

	addr = (char *)&number; /* gets first byte of number*/
	if (*addr == 1) /* addr is 1 when first byte is at the little end of memory */
	{
		return (1); /*little endian*/
	}
	return (0); /* big endian */
}
