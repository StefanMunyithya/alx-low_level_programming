#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses string
 * @s: The first character of the string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	char c;
	int count;

	count = 0;
	c = *s;
	while (c != '\0')
	{
		++count;
		++s;
		c = *s;
	}

	--s;

	char arr[count];
	int i;

	for (i = 0; i < count; i++)
	{
		arr[i] = *s;
		--s;
	}

	++s;

	for (i = 0; i < count; i++)
	{
		*s = arr[i];
		++s;
	}

}
