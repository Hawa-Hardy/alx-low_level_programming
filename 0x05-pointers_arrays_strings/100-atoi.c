#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int index, digit_count, number, length;
	int minus_count, is_valid, digit;

	index = 0;
	digit_count = 0;
	number = 0;
	length = 0;
	minus_count = 0;
	is_valid = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && is_valid == 0)
	{
		if (s[index] == '-')
			++minus_count;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (minus_count % 2)
				digit = -digit;
			number = number * 10 + digit;
			is_valid = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			is_valid = 0;
		}
		index++;
	}

	if (is_valid == 0)
		return (0);

	return (number);
}
