#include "main.h"

/**
 * print_binary - prints the binary equivalent of a number
 * @n: number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	int bit_pos, count = 0;
	unsigned long int current_bit;

	for (bit_pos = 63; bit_pos >= 0; bit_pos--)
	{
		current_bit = n >> bit_pos;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

