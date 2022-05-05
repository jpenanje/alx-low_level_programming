#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: the actual number of letters it should read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nread, nprint;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	nread = read(fd, buf, letters);
	nprint = write(STDOUT_FILENO, buf, nread);

	close(fd);
	free(buf);
	return (nprint);
}
