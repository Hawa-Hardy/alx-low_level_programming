#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character x to stdout
 *
 * Return: On success 1
 * On error, -1 is returned, and error number is appropriately set
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
