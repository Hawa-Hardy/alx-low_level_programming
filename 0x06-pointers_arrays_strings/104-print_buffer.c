#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int offset, chunkSize, index;
	int character;

	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		chunkSize = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (index = 0; index < 10; index++)
		{
			if (index < chunkSize)
				printf("%02x", *(b + offset + index));
			else
				printf("  ");
			if (index % 2)
			{
				printf(" ");
			}
		}
		for (index = 0; index < chunkSize; index++)
		{
			character = *(b + offset + index);

			if (character < 32 || character > 132)
			{
				character = '.';
			}
			printf("%c", character);
		}
		printf("\n");
		offset += 10;
	}
}
