#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_index = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src[src_index] != '\0')
	{
		dest[dest_length] = src[src_index];
		dest_length++;
		src_index++;
	}

	dest[dest_length] = '\0';
	return (dest);
}
