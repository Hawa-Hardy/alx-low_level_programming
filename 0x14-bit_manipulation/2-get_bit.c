#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to search
 * @index:  index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit or
 * -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	bit_val = (n >> index) & 1;

	return (bit_val);
}
