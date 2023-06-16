#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[24] = "abcdfghijklmnoprstuvwxyz";
	int count;

	for (count = 0; count < 24; count++)
	{
		putchar(alphabet[count]);
	}
	putchar('\n');
	return (0);
}
