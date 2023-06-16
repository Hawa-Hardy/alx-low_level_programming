#include <stdio.h>

/**
 * main - Prints alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int j;

	for (j = 1; j <= 52; j++)
	{
		putchar(alpha[j]);
	}
	putchar('\n');
	return (0);
}
