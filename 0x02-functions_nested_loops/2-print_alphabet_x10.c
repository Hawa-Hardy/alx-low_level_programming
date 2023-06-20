#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet 10 times
 */
void print_alphabet_x10(void)
{
		char letter;
		int count;


		count = 0;


		while (count < 10)
		{
			letter = 'a';
			while (ch <= 'z')
			{
				_putchar(letter);
				letter++;
			}
			_putchar('\n');
			count++
		}
}
