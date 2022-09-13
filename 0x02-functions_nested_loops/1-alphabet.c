#include "main.h"

/**
 * print_alphabet - Prints letters in lower case
 *
 * Return: Nothing
 */
void print_alphabet(void)
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
