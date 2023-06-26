#include "main.h"
/**
 * print_array - function that prints n elements of an array
 * @a: name of array
 * @n: the number of elements of the array to be printed
 * Return: void but displays a and n inputs
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < (n - 1); index++)
	{
		printf("%d, ", a[index]);
	}
		if (index == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
