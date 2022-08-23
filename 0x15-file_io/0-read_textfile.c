#include "main.h"

/**
 * read_textfile - reads file and prints to stdout.
 * @filename: file to be read.
 * @letters: number of letters to read and print.
 * Return: number of letters, or 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i, y;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, 0_RDONLY);

	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (!buf)
	{
		return (0);
	}
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);

	y = write(2, buf, i);

	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buff);
	return (y);
}
