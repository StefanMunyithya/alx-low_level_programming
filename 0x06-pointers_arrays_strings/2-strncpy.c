/**
 * _strncpy - Copies string at src to dest
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p;

	p = dest;
	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			break;
		*p = *src;
		++p;
		++src;
	}

	for (; i < n ; i++)
	{
		*p = '\0';
		++p;
	}

	return (dest);

}
