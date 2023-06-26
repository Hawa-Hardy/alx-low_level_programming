#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int index, length, half_length;

	length = 0;

	/*Calculate the length of the string*/
	for (index = 0; str[index] != '\0'; index++)
		length++;

	half_length = length / 2;

	if (length % 2 == 1)
		half_length = (length + 1) / 2;

	for (index = half_length; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
