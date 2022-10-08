#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatnates two strings
 * @s1: Beginning string
 * @s2: Ending string
 * @n: Number of bytes of s2 to be concatenated
 *
 * Return: Pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int i;
	char *nxt;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = 0;
	nxt = s1;
	while (*nxt != '\0')
	{
		++len_s1;
		++nxt;
	}
	len_s2 = 0;
	nxt = s2;
	while (*nxt != '\0')
	{
		++len_s2;
		++nxt;
	}
	p = malloc(len_s1 + len_s2 + 1);
	nxt = p;

	if (nxt == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		*nxt = *s1;
		++nxt;
		++s1;
	}
	if (n <= len_s2)
	{
		for (i = 0; i < n; i++, nxt++, s2++)
		{
			*nxt = *s2;
		}
	}
	else
	{
		while (*s2 != '\0')
		{
			*nxt = *s2;
			++nxt;
			++s2;
		}
	}
	*nxt = '\0';
	return (p);

}
