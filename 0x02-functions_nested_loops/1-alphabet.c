#include "main.h"
/**
 * Main - Prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	_putchar(let);
	_putchar('\n');
	return (0);
}
