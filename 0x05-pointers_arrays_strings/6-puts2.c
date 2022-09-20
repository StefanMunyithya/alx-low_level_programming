#include "main.h"

/**
 * puts2 - Prints every other character of a string
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
		++str;

		if (*str == '\0')
			break;
		++str;
		c = *str;
	}
	_putchar('\n');
}
