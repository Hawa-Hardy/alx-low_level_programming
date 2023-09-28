#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character input to stdout
 * @c: The input chara to print
 *
 * Return: 1 (On success)
 * -1 (on error) and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
 