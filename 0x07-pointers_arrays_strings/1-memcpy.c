/**
 * _memcpy - copies n bytes from src to dest
 * @dest: Destination location
 * @src: Source location
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p;
	unsigned int i;

	p = dest;
	for (i = 0; i < n; i++, p++, src++)
	{
		*p = *src;
	}
	return (dest);
}
