#include <stdio.h>
/**
 * main - Lists all natural numbers below 1024
 * that are multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count, sum = 0;

	for (count = 0; count < 1024; count++)
	{
		if ((count % 3) == 0 || (count % 5) == 0)
			sum += count;
	}

	printf("%d\n", sum);
	return (0);
}
