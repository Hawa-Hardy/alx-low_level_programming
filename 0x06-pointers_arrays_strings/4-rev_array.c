#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @arr: array
 * @size: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *arr, int size)
{
	int index;
	int temp;

	for (index = 0; index < size--; index++)
	{
		temp = arr[index];
		arr[index] = arr[size];
		arr[size] = temp;
	}
}
