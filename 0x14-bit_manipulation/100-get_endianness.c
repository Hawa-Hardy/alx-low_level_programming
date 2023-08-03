#include "main.h"

/**
 * get_endianness - checks for endian
 * Return: 0 for big endian
 * or 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
