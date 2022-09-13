#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			++c;
		}

		_putchar('\n');
	}
}
