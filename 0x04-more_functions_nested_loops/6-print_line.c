#include "main.h"

/**
 * print_line - Prints line made up of n underscores
 * @n: Number of times to print underscores
 *
 * Return: Void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
