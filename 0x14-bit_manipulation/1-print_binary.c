#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 1;

	for (i = 63; i >= 0; i--)
	{
		unsigned long int bit = n & (mask << i);

		if (bit)
			_putchar('1');
		else
			_putchar('0');
	}
}
