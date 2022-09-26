#include <stddef.h>

/**
 * _strpbrk - Searches for c in accept in s
 * @s: String where we are searching
 * @accept: Characters we are searching for
 *
 * Return: Pointer to first occurrence of character or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			++p;
		}
		++s;
	}
	return (NULL);
}
