#include "main.h"

/**
 * print_triangle - Prints triangle made up of #
 * @size: Size of triangle
 *
 * Return: Void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;

			for (j = 0; j < size - i ; j++)
			{
				_putchar(' ');
			}

			int k;

			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
