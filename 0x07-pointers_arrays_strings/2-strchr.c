#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
