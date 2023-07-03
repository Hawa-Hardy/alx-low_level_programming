#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, length;

	sum1 = 0;
	sum2 = 0;

	for (length = 0; length < size; length++)
	{
		sum1 = sum1 + a[length * size + length];
	}

	for (length = size - 1; length >= 0; length--)
	{
		sum2 += a[length * size + (size - length - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
