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
	int dest_index;

	dest_index = 0;
	while (dest_index < n && src[dest_index] != '\0')
	{
		dest[dest_index] = src[dest_index];
		dest_index++;
	}
	while (dest_index < n)
	{
		dest[dest_index] = '\0';
		dest_index++;
	}

	return (dest);
}
