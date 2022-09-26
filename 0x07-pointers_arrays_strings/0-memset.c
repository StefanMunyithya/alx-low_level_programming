/**
 * _memset - Fills first n bytes of memory area
 * pointed to by s with constant byte b
 * @s: Pointer
 * @b: Constant byte
 * @n: number of byte
 *
 * Return: Pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	int i;

	p = s;

	for (i = 0; i < n; i++, p++)
	{
		*p = b;
	}

	return (s);
}
