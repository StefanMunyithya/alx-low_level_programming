#include "main.h"

/**
 * _isalpha - Checks whether a character is in the alphabet
 * @c: Character to be checked
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if (('a' <= c) && (c <= 'z'))
		return (1);
	else if (('A' <= c) && (c <= 'Z'))
		return (1);
	else
		return (0);
}
