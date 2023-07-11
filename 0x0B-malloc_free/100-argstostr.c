#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates command-line arguments into a single string
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: pointer to the concatenated string
 */
char *argstostr(int argc, char **argv)
{
	int row, col, total_length = 0, index = 0;
	char *concatenated;

	if (argc == 0 || argv == NULL)
		return (NULL);

	for (row = 0; row < argc; row++)
	{
		for (col = 0; argv[row][col]; col++)
			total_length++;
	}

	total_length += argc;

	concatenated = malloc(sizeof(char) * (total_length + 1));
	if (concatenated == NULL)
		return (NULL);

	for (row = 0; row < argc; row++)
	{
		for (col = 0; argv[row][col]; col++)
		{
			concatenated[index] = argv[row][col];
			index++;
		}
		if (concatenated[index] == '\0')
		{
			concatenated[index++] = '\n';
		}
	}
	concatenated[index] = '\0';

	return (concatenated);
}
