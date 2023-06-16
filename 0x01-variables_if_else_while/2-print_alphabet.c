#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int count;

	for (count = 0; count < 26; count++)
	{
		putchar(alphabet[count]);
	}
	putchar('\n');
	return (0);
}
