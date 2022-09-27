#include <stddef.h>
/**
 * _strstr - finds first occurrence of needle
 * in haystack
 * @haystack: String to search
 * @needle: Substring to search for
 *
 * Return: Pointer to substring location
 */
char *_strstr(char *haystack, char *needle)
{
	char *rn;
	char *rh;


	while (*haystack != '\0')
	{
		rn = needle;
		rh = haystack;
		while (*rn != '\0')
		{
			if (*rn != *rh)
				break;
			if (*(rn + 1) == '\0')
				return (haystack);
			++rn;
			++rh;
		}
		++haystack;
	}
	return (NULL);

}
