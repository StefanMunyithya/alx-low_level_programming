#include "main.h"

/**
 * rev_string - Reverses string
 * @s: The first character of the string
 *
 * Return: Void
 */
void rev_string(char *s)
{
	char c;
	char *start;
	char *end;
	int count;
	int i;
	int swaps;
	char tmp;

	start = s;
	count = 0;
	c = *s;
	while (c != '\0')
	{
		++count;
		++s;
		c = *s;
	}

	--s;
	end = s;
	swaps = count / 2;

	for (i = 0; i < swaps; i++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

}
