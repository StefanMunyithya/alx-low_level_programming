#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings and
 * returns pointer to the two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer
 * NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int num_chars;
	char *p;
	char *nxt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	num_chars = 0;
	p = s1;
	while (*p != '\0')
	{
		num_chars++;
		++p;
	}
	p = s2;
	while (*p != '\0')
	{
		num_chars++;
		++p;
	}
	num_chars++;
	p = (char *)malloc(sizeof(char) * num_chars);

	if (p == NULL)
		return (NULL);
	nxt = p;
	while (*s1 != '\0')
	{
		*nxt = *s1;
		++nxt;
		++s1;
	}
	while (*s2 != '\0')
	{
		*nxt = *s2;
		++nxt;
		++s2;
	}
	*nxt = '\0';
	return (p);
}
