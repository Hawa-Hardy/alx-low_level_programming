#include "function_pointers.h"
/**
 * int_index - returns  index of the first element for
 * which the cmp function does not return 0
 * @array: array
 * @size: size of elements in array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: 0, -1 ( size <= 0, no element match)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
