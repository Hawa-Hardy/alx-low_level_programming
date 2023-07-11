#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input string
 * @s2: second input string
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length_s1, length_s2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = 0;
	while (s1[length_s1] != '\0')
		length_s1++;

	length_s2 = 0;
	while (s2[length_s2] != '\0')
		length_s2++;

	concatenated = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

	if (concatenated == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		concatenated[i] = s2[j];
		i++;
		j++;
	}

	concatenated[i] = '\0';
	return (concatenated);
}
