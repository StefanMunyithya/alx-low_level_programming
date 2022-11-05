#include "main.h"
/**
 * read_textfile - Reads and prints the number of letters
 * specified.
 * @filename: File to be read
 * @letters: Number of letters it should read and
 * print
 *
 * Return: Actual number of letters it could
 * read and print
 * 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_written;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	num_read = read(fd, buf, letters);
	close(fd);
	num_written = write(STDOUT_FILENO, buf, num_read);
	free(buf);

	if ((size_t)num_written != letters)
		return (0);
	return (num_written);

}
