#include "main.h"

/**
 * string_toupper - Change all lowercase characters to uppercase
 * @str: Pointer to the string
 *
 * Return: Pointer to the modified string
 */
char *string_toupper(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}

	return (str);
}
