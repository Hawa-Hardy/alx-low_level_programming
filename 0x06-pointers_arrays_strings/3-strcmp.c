#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Difference between s1[i] and s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}

	return (0);
}
