#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: Ponter to first character of string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int count;
	char c;

	count = 0;
	c = *s;
	while (c != '\0')
	{
		++count;
		++s;
		c = *s;
	}
	return (count);

}
