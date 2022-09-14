#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
		int j;

		for (j = 0; j <= 9; ++j)
		{
			int mult;

			mult = i * j;

			if (mult < 10)
				_putchar('0' + mult);
			else
			{
				_putchar('0' + (mult / 10));
				_putchar('0' + (mult % 10));
			}

			if (j == 9)
				break;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
