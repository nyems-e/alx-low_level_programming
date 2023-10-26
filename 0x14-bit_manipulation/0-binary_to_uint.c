#include "main.h"

/**
 * binary_to_uint - converts binary to integer
 * @b: pointer to binary string
 * Return: converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv_num = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b == '1')
			conv_num = (conv_num << 1) | 1;
		else if (*b == '0')
			conv_num = (conv_num << 1);
		else
			return (0);
		b++;
	}
	return (conv_num);
}
