#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy destination
 * @src: copy source
 * Return: pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int src_length = 0;
	int index = 0;

	while (*(src + src_length) != '\0')
	{
		src_length++;
	}
	for (; index < src_length; index++)
	{
		dest[index] = src[index];
	}
	dest[src_length] = '\0';
	return (dest);
}
