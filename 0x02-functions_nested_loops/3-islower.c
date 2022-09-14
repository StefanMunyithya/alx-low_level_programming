#include "main.h"

/**
 * _islower - Checks whether a character is a lower case character
 * @c: The character that is checked
 *
 * Return: 1 if true 0 otherwise
 */
int _islower(int c);
{
	if (('a' <= c) && (c <= 'z'))
		return (1);
	else
		return (0);
}
