#include "main.h"
#define COUNT 1024
/**
 * main - Copies text from  1 file to another
 * @argc: Number of commandline arguments
 * @argv: Array of char pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int fd_close;
	char *buf;
	ssize_t chars_written;
	size_t chars_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
	buf = malloc(sizeof(char) * COUNT);
	chars_read = read(file_from, buf, COUNT);

	if (chars_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (chars_read != 0)
	{
		chars_written = write(file_to, buf, COUNT);
		if (chars_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		chars_read = read(file_from, buf, COUNT);
		if (chars_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	fd_close = close(file_from);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	fd_close = close(file_to);
	if (fd_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	free(buf);

	return (0);
}
