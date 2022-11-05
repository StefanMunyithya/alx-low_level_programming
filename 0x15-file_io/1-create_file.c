#include "main.h"
size_t _strlen(char *str);

/**
 * create_file - Creates file and writes the given text
 * @filename: Name of file
 * @text_content: Text to be written
 *
 * Return: 1 on success
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t num_chars;
	ssize_t chars_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	num_chars = _strlen(text_content);
	chars_written = write(fd, text_content, num_chars);
	if (chars_written == -1)
		return (-1);
	close(fd);
	return (1);


}

/**
 * _strlen - Returns length of string of chars
 * @str: String
 *
 * Return: Number of chars excluding
 * terminating null byte
 */
size_t _strlen(char *str)
{
	size_t num_chars;
	char *p;

	if (str == NULL)
		return (0);
	p = str;
	num_chars = 0;
	while (*p != '\0')
	{
		num_chars++;
		++p;
	}
	return (num_chars);

}
