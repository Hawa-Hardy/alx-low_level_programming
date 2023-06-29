#include "main.h"

/**
 * leet - Encode into 1337speak
 * @str: Input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	int index1, index2;
	char letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	for (index1 = 0; str[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 10; index2++)
		{
			if (str[index1] == letters[index2])
			{
				str[index1] = leet_nums[index2];
				break;
			}
		}
	}

	return (str);
}
