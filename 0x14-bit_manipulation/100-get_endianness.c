#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian,
 * order in which bytes are stored in the memory
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *bytePointer = (char *) &num;

	return (*bytePointer);
}
