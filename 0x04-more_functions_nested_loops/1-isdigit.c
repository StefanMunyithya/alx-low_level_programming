#include "main.h"

/**
 * _isdigit - Checks if character is a digit
 * @c: Character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
