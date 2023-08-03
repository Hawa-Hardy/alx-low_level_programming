#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_pos = 0;
	int is_printing = 0;

	/* Find the most significant bit position */
	for (bit_pos = sizeof(unsigned long int) * 8 - 1; bit_pos >= 0; bit_pos--)
	{
		if (n & (mask << bit_pos))
		{
			is_printing = 1;
			break;
		}
	}

	if (!is_printing)
		_putchar('0');

	/* Print binary digits */
	for (; bit_pos >= 0; bit_pos--)
	{
		if (n & (mask << bit_pos))
			_putchar('1');
		else
			_putchar('0');
	}
}
