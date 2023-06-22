#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int max_prime;
	long int i;

	num = 612852475143;
	max_prime = -1;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num = num / i;
		}
	}

	if (num > 2)
		max_prime = num;

	printf("%ld\n", max_prime);

	return (0);
}
