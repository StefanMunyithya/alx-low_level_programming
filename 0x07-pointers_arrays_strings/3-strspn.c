/**
 * _strspn - Returns the number of bytes in the initial
 * segment of s that contains only bytes in accept
 * @s: String to be searched
 * @accept: string that contains the bytes we are to search
 *
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	char *p;
	int found;

	n = 0;
	while (*s != '\0')
	{
		found = 0;
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				++n;
				found = 1;
				break;
			}
			++p;
		}
		if (found)
			++s;
		else
			break;
	}
	return (n);

}
