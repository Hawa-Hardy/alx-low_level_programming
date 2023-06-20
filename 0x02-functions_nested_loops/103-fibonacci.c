#include <stdio.h>
/**
 * main - Prints the sum of the even Fibonacci terms,
 * less than 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (count = 1; count <= 33; ++count)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
