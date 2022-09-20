#include "main.h"

/**
 * puts2 - Prints every other chacter of a string
 * @str: First character
 *
 * Return: Void
 */
void puts2(char *str)
{
	char c;

	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		str += 2;
		c = *str;
	}
	_putchar('\n');
}
