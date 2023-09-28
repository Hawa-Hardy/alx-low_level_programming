#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary to unsigned int
 *
 * @b: binary digit we will convert
 *
 * Return: converted binary answer
**/
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		decimal = 2 * decimal + (b[index] - '0');
		index++;
	}
	return (decimal);
}
