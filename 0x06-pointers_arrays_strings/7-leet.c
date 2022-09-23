/**
 * leet - Encodes a string
 * @str: Pointer to string
 *
 * Return: Pointer to encoded string
 */
char *leet(char *str)
{
	char *p;
	int i;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	int n[]	 = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};

	p = str;

	while (*p != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*p == a[i])
			{
				*p = '0' +  n[i];
				break;
			}
		}
		++p;
	}
	return (str);
}
