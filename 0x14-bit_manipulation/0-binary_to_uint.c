#include "main.h"
/**
 * binary_to_uint- binary to unsignes integer
 * @b: number as a string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int conv_num = 0;
if (b == NULL)
{
	return (0);
}
while (*b != '\0')
{
	if (*b == '0' || *b == '1')
	{
		conv_num = (*b - '0') + (conv_num << 1);
		b++;
	}
	else
	{
		return (0);
	}
}
return (conv_num);
}

