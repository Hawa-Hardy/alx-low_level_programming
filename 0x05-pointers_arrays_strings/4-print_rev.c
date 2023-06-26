#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int count;

	/*Calculate length of string*/
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (count = length - 1; count > 0; count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
