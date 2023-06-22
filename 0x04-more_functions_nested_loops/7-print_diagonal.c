#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int row, column;

		for (row = 0; row < n; row++)
		{
			for (column = 0; column < n; column++)
			{
				if (column == row)
					_putchar('\\');
				else if (column < row)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
