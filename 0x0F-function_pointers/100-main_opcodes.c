#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of command-line arguments (should be 2)
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, index;
	char *main_func;

	if (argc != 2)
	{
		printf("Usage: %s <num_bytes>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error: Number of bytes must be a positive integer.\n");
		exit(EXIT_FAILURE);
	}

	main_func = (char *)main;

	for (index = 0; index < num_bytes; index++)
	{
		if (index == num_bytes - 1)
		{
			printf("%02hhx\n", main_func[index]);
		}
		else
		{
			printf("%02hhx ", main_func[index]);
		}
	}

	return (0);
}

