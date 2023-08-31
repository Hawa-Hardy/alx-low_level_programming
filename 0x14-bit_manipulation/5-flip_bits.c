#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_pos, count = 0;
	unsigned long int current_bit;
	unsigned long int xor_result = n ^ m;

	for (bit_pos = 63; bit_pos >= 0; bit_pos--)
	{
		current_bit = xor_result >> bit_pos;
		if (current_bit & 1)
			count++;
	}

	return (count);
}
