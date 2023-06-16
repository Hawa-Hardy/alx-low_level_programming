#include <stdio.h>

/**
 * main - Prints 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		printf("%d", count);
	}
	putchar('\n');
	return (0);
}
