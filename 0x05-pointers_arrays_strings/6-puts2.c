#include "main.h"
/**
 * puts2 - function prints every other character of a string
 * starting with the first one
 * @str: input string
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int j;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (j = 0 ; j <= t ; j++)
	{
		if (j % 2 == 0)
	{
		_putchar(str[j]);
	}
	}
	_putchar('\n');
}
