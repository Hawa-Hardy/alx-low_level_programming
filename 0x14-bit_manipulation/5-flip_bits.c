#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	/* Count the number of set bits in the exclusive OR result */
	while (exclusive)
	{
		exclusive &= (exclusive - 1);
		count++;
	}

	return (count);
}
