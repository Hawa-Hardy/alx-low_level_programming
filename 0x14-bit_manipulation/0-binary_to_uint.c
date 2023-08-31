#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[index] - '0');
	}

	return (dec_val);
}
