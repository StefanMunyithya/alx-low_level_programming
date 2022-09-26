#include <stddef.h>
/**
 * _strchr - returns pointer to first occurrence of c in s
 * @s: String
 * @c: Character to search
 *
 * Return: Pointer to c or NULL if c isn't found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (c == '\0')
		return (s);

	return (NULL);

}
