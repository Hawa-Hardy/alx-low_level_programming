#include <stdio.h>

/**
 * main - Prints 0 - 9 without char variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 48; j < 58; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
