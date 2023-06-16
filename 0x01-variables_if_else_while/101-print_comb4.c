#include <stdio.h>

/**
 * main - prints all combinations of three-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first < 58; first++)
	{
		for (second = 49; second < 58; second++)
		{
			for (third = 50; third < 58; third++)
			{
				if (third > second && second > first)
				{
					putchar(first);
					putchar(second);
					putchar(third);
					if (first != 55 || second != 56)
					{
						putchar(',');
						putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
