#include "main.h"

/**
 * _strncpy - Concatenate two strings using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_length = 0;
	int src_index = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	while (src_index < n && src[src_index] != '\0')
	{
		dest[dest_length] = src[src_index];
		dest_length++;
		src_index++;
	}

	dest[dest_length] = '\0';
	return (dest);
}
