#include "main.h"

/**
 * read_textfile - reads file and prints to stdout.
 * @filename: file to be read.
 * @letters: number of letters to read and print.
 * Return: number of letters, or 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	r = read(fd, buf, letters);

	if (r == -1)
		return (0);

	close(fd);

	w = write(STDOUT_FILENO, buf, r);

	if (w == -1)
		return (0);

	return (w);
}
