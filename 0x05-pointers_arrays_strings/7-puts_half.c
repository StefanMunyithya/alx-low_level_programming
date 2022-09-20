#include "main.h"

/**
 * puts_half - prints half a string
 * @str: Pointer to first character of string
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int count;
	char c;
	int num_chars;

	count = 0;
	c = *str;
	while (c != '\0')
	{
		++count;
		++str;
		c = *str;
	}

	if (count % 2 == 0)
		num_chars = count / 2;
	else
		num_chars = (count - 1) / 2;
	str = str - num_chars;
	c = *str;
	while (c != '\0')
	{
		_putchar(c);
		++str;
		c = *str;
	}
	_putchar('\n');
}
