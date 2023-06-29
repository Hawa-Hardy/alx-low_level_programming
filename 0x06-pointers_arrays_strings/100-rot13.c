#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoder for ROT13 cipher
 * @s: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
	int index1;
	int index2;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (s[index1] == data1[index2])
			{
				s[index1] = datarot[index2];
				break;
			}
		}
	}
	return (s);
}

