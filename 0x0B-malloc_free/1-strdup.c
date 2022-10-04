#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to duplicate string
 * @str: String
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	unsigned int num_chars;
	unsigned int i;
	char *p;

	if (str == NULL)
		return (NULL);

	p = str;
	num_chars = 0;
	while (*p != '\0')
	{
		num_chars++;
		++p;
	}
	num_chars++;
	p = (char *)malloc(sizeof(char) * num_chars);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < num_chars; i++)
	{
		*(p + i) = *(str + i);

	}
	return (p);



}
