#include <stdlib.h>
#include "main.h"
/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int is_space = 1, count = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_space = 1;
		else if (is_space)
		{
			count++;
			is_space = 0;
		}
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **words_array, *word;
	int word_count = 0, len = 0, index = 0
	int word_length = 0, start_index, end_index;

	while (str[len])
		len++;

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);
	words_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (words_array == NULL)
		return (NULL);

	for (int i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (word_length)
			{
				end_index = i;
				word = (char *)malloc(sizeof(char) * (word_length + 1));
				if (word == NULL)
					return (NULL);

				start_index = index - word_length;
				for (int j = 0; j < word_length; j++)
					word[j] = str[start_index++];

				word[word_length] = '\0';
				words_array[index] = word;
				index++;
				word_length = 0;
			}
		}
		else if (word_length++ == 0)
			start_index = i;
	}
	words_array[index] = NULL;
	return (words_array);
}
