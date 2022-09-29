#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: String
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		_putchar(*s);
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);

}
