#include "main.h"

/**
 * print_number - Print characters of a number
 * @number: Integer number to be printed
 * Return: void
 */

void print_number(int number)
{
	unsigned int unsigned_number;

	unsigned_number = number;

	if (number < 0)
	{
		_putchar('-');
		unsigned_number = -number;
	}

	if (unsigned_number / 10 != 0)
	{
		print_number(unsigned_number / 10);
	}
	_putchar((unsigned_number % 10) + '0');
}
