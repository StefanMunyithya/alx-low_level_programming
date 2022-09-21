/**
 * _strncat - Appends n characters from src to dest
 * @src: Source string
 * @dest: Destination string
 * @n: Number of bytes to append
 *
 * Return: Pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p;
	int i;

	p = dest;
	while (*p != '\0')
	{
		++p;
	}

	for (i = 0; i < n; i++)
	{
		*p = *src;

		if (*p == '\0')
			break;
		++p;
		++src;
	}
	if (*p != '\0')
		*p = '\0';

	return (dest);
}
