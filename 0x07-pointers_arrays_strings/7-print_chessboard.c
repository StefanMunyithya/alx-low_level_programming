#include "main.h"
/**
 * print_chessboard - Prints chessboard pieces
 * @a: Array of pointers
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char *p;

	for (i = 0; i < 8; i++)
	{
		p = a[i];
		for (j = 0; j < 8; j++)
		{
			_putchar(*p);
			++p;
		}
		_putchar('\n');
	}
}
