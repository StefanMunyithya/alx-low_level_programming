/**
 * cap_string - Capitalizes each word in a string
 * @str: Pointer to string
 *
 * Return: Pointer to capitalized string
 */
char *cap_string(char *str)
{
	char *p;
	char *sep;
	int i;
	int word;
	char a[] = {',', ';', '.', '!', '?', '"', '(',
			')', '{', '}', '\t', '\v', '\n', ' ', '\0'};

	p = str;
	sep = a;

	if ('a' <= *p && *p <= 'z')
		*p = 'A' + *p - 'a';
	++p;
	while (*p != '\0')
	{
		word = 0;
		sep = a;
		for (i = 0; i < 15; i++)
		{
			if (*(p - 1) == *sep)
			{
				if ('a' <= *p && *p <= 'z')
				{
					word = 1;
					break;
				}
			}
			++sep;
		}

		if (word)
		{
			*p = 'A' + *p - 'a';
		}
		++p;

	}

	return (str);
}
