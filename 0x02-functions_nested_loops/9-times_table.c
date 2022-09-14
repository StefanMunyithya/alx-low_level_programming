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

			if (j == 0)
				_putchar('0' + mult);
			else
			{
				if (mult < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + mult);
				}

				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (mult / 10));
					_putchar('0' + (mult % 10));
				}
			}

		}
		_putchar('\n');
	}
}
