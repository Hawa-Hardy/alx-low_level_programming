#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function to convert binary
 * to unsigned integer
 * @b: binary digit to be converted
 *
 * Return: the converted binary digit
**/
unsigned int binary_to_uint(const char *b)
{
	int z = 0;
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[z] != '\0')
	{
		if (b[z] != '0' && b[z] != '1')
			return (0);
		decimal = 2 * decimal + (b[z] - '0');
		z++;
	}
	return (decimal);
}
