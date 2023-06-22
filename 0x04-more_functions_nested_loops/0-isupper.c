#include "main.h"
/**
 * _isupper - checks if character is uppercase
 * @c: variable to check
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
