#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int index, total, random_number;

	total = 0;

	srand(time(NULL));

	for (index = 0; index < 100; index++)
	{
		password[index] = rand() % 78;
		total += (password[index] + '0');
		putchar(password[index] + '0');
		if ((2772 - total) - '0' < 78)
		{
			random_number = 2772 - total - '0';
			total += random_number;
			putchar(random_number + '0');
			break;
		}
	}

	return (0);
}
