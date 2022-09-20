#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Points to first character
 *
 * Return: Void
 */
void print_rev(char *s)
{
	char c;
	int count;
	int i;

	count = 0;
	c = *s;
	while (c != '\0')
	{
		count++;
		++s;
		c = *s;
	}

	--s;
	c = *s;

	for (i = count; i > 0; --i)
	{
		_putchar(c);
		--s;
		c = *s;
	}
	_putchar('\n');

}
