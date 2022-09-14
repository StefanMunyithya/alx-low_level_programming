#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack bauer
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int i;
	for (i = 0; i <= 24; ++i)
	{
		int j;
		for (j = 0; j < 60; ++j)
		{
			if (i < 10)
			{	_putchar('0');
				_putchar('0' + i);
			}
			else
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
			}
			_putchar(':');

			if (j < 10)
			{
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
			_putchar('\n');
			
			if (i == 24)
				break;
		}

	}
	
}
